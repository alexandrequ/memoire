/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

Module:       FGAircraft.cpp
Author:       Jon S. Berndt
Date started: 12/12/98
Purpose:      Encapsulates an aircraft
Called by:    FGFDMExec

------------- Copyright (C) 1999  Jon S. Berndt (jon@jsbsim.org) -------------

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU Lesser General Public License as published by the Free
Software Foundation; either version 2 of the License, or (at your option) any
later version.

This program is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more
details.

You should have received a copy of the GNU Lesser General Public License along
with this program; if not, write to the Free Software Foundation, Inc., 59
Temple Place - Suite 330, Boston, MA 02111-1307, USA.

Further information about the GNU Lesser General Public License can also be
found on the world wide web at http://www.gnu.org.

FUNCTIONAL DESCRIPTION
--------------------------------------------------------------------------------
Models the aircraft reactions and forces. This class is instantiated by the
FGFDMExec class and scheduled as an FDM entry.

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
COMMENTS, REFERENCES,  and NOTES
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
INCLUDES
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
#include <iostream>
#include "FGAircraft.h"
#include "FGAuxiliary.h"
#include "FGAtmosphere.h"
#include "FGAerodynamics.h"
#include "initialization/FGInitialCondition.h"
#include "FGFDMExec.h"
#include "input_output/FGXMLElement.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include "gridWAPT.hpp"
#include "setDataWAPT.hpp"
#include <iostream>
using namespace std;

namespace JSBSim {

  /*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  CLASS IMPLEMENTATION
  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/

  FGAircraft::FGAircraft(FGFDMExec* fdmex) : FGModel(fdmex)
  {
    WingSpan = 0.0;
    WingArea = 0.0;
    cbar = 0.0;
    HTailArea = VTailArea = 0.0;
    HTailArm  = VTailArm  = 0.0;
    lbarh = lbarv = 0.0;
    vbarh = vbarv = 0.0;
    WingIncidence = 0.0;

    bind();

    Debug(0);
  }

  //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

  FGAircraft::~FGAircraft()
  {
    Debug(1);
  }

  //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

  bool FGAircraft::InitModel(void)
  {
    if (!FGModel::InitModel()) return false;

    vForces.InitMatrix();
    vMoments.InitMatrix();

    return true;
  }

  //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%



  // Modifié par Alex

  ///////////////////////////
  ///  Aircraft position  ///
  ///////////////////////////

  #define WGS84_A		6378137.0		///< major axis
  #define WGS84_E		0.0818191908		///< first eccentricity
  loc latLonAltToEcef(double lat, double lon, double alt)
  {
    loc pos;
    double clat = cos(lat); //En radians
    double slat = sin(lat);
    double clon = cos(lon);
    double slon = sin(lon);

    double N = WGS84_A / sqrt(1.0 - WGS84_E * WGS84_E * slat * slat);

    pos.x = (N + alt) * clat * clon;
    pos.y = (N + alt) * clat * slon;
    pos.z = (N * (1.0 - WGS84_E * WGS84_E) + alt) * slat;

    return pos;
  }

  //////////////////////
  ///  Interpolation ///
  //////////////////////


  Velocity trilinearInterpolation(Velocity c000, Velocity c001, Velocity c010, Velocity c011, Velocity c101, Velocity c110,Velocity c100, Velocity c111, double x0, double x1, double y0, double y1, double z0, double z1, double x, double y, double z)
  {

    Velocity vent;
    double xd, yd, zd, u0, u1, u00, u01, u10, u11, v0, v1, v00, v01, v10, v11, w0, w1, w00, w01, w10, w11;
    xd = (x-x0)/(x1-x0);
    yd = (y-y0)/(y1-y0);
    zd = (z-z0)/(z1-z0);

    // Interpolation along x
    u00 = c000.u*(1-xd)+c100.u*xd;
    u01 = c001.u*(1-xd)+c101.u*xd;
    u10 = c010.u*(1-xd)+c110.u*xd;
    u11 = c011.u*(1-xd)+c111.u*xd;

    v00 = c000.v*(1-xd)+c100.v*xd;
    v01 = c001.v*(1-xd)+c101.v*xd;
    v10 = c010.v*(1-xd)+c110.v*xd;
    v11 = c011.v*(1-xd)+c111.v*xd;

    w00 = c000.w*(1-xd)+c100.w*xd;
    w01 = c001.w*(1-xd)+c101.w*xd;
    w10 = c010.w*(1-xd)+c110.w*xd;
    w11 = c011.w*(1-xd)+c111.w*xd;

    // Interpolation along y
    u0 = u00*(1-yd)+u10*yd;
    u1 = u01*(1-yd)+u11*yd;
    v0 = v00*(1-yd)+v10*yd;
    v1 = v01*(1-yd)+v11*yd;
    w0 = w00*(1-yd)+w10*yd;
    w1 = w01*(1-yd)+w11*yd;

    // Interpolation along z
    vent.u = u0*(1-zd)+u1*zd;
    vent.v = v0*(1-zd)+v1*zd;
    vent.w = w0*(1-zd)+w1*zd;

    return vent;
  }

  Velocity FGAircraft::dataInterpolation(MyGrid** data, double time, double x, double y, double z)
  {

    int *size = (**data).getsize();
    int nt = size[0];
    int nx = size[1];
    int ny = size[2];
    int nz = size[3];

    int t =(int) time;

    int x0 = (int) x;
    int y0 = (int) y;
    int z0 = (int) z;
    int x1 = x0+1;
    int y1 = y0+1;
    int z1 = z0+1;


    Velocity c000, c001, c010, c011,c101,c110, c100, c111;
    if(t<=nt && x1<=nx && y1<=ny && z1<=nz)
    {

      c000.u = (**data).get(t,x0,y0,z0,U);
      c000.v = (**data).get(t,x0,y0,z0,V);
      c000.w = (**data).get(t,x0,y0,z0,W);

      c001.u = (**data).get(t,x0,y0,z1,U);
      c001.v = (**data).get(t,x0,y0,z1,V);
      c001.w = (**data).get(t,x0,y0,z1,W);

      c010.u = (**data).get(t,x0,y1,z0,U);
      c010.v = (**data).get(t,x0,y1,z0,V);
      c010.w = (**data).get(t,x0,y1,z0,W);

      c011.u = (**data).get(t,x0,y1,z1,U);
      c011.v = (**data).get(t,x0,y1,z1,V);
      c011.w = (**data).get(t,x0,y1,z1,W);

      c101.u = (**data).get(t,x1,y0,z1,U);
      c101.v = (**data).get(t,x1,y0,z1,V);
      c101.w = (**data).get(t,x1,y0,z1,W);

      c110.u = (**data).get(t,x1,y1,z0,U);
      c110.v = (**data).get(t,x1,y1,z0,V);
      c110.w = (**data).get(t,x1,y1,z0,W);

      c100.u = (**data).get(t,x1,y0,z0,U);
      c100.v = (**data).get(t,x1,y0,z0,V);
      c100.w = (**data).get(t,x1,y0,z0,W);

      c111.u = (**data).get(t,x1,y1,z1,U);
      c111.v = (**data).get(t,x1,y1,z1,V);
      c111.w = (**data).get(t,x1,y1,z1,W);

    }
    else // Quand l'avion vole en dehors du data
    {
      c000.u = 0;
      c000.v = 0;
      c000.w = 0;

      c001.u = 0;
      c001.v = 0;
      c001.w = 0;

      c010.u = 0;
      c010.v = 0;
      c010.w = 0;

      c011.u = 0;
      c011.v = 0;
      c011.w = 0;

      c101.u = 0;
      c101.v = 0;
      c101.w = 0;

      c110.u = 0;
      c110.v = 0;
      c110.w = 0;

      c100.u = 0;
      c100.v = 0;
      c100.w = 0;

      c111.u = 0;
      c111.v = 0;
      c111.w = 0;
    }
    Velocity interp = trilinearInterpolation(c000, c001, c010, c011, c101, c110,c100, c111, x0, x1, y0, y1, z0, z1, x, y, z);

    return interp;
  }


  /////////////////////
  ///    Velocity   ///
  /////////////////////

  Velocity FGAircraft::myWindFunction( MyGrid *data, double t, double xECEF, double yECEF, double zECEF,double xECEF_data_origine, double yECEF_data_origine, double zECEF_data_origine)
  {
    Velocity windvel;

    const double pi = M_PI;
    int inter = 20;
    double b = WingSpan;//in.Wingspan; //FDMExec->Aircraft->GetWingSpan(); // Envergure de l'aile
    // double surface = FDMExec->Aircraft->GetWingArea();
    double phi = GetPhi();
    double psi = GetPsi();
    double theta = GetTheta();
    double surf = WingArea/inter;
    double lambda = b*b/WingArea;
    double dy = b/inter;
    double integv = 0, integu =0, integw =0 ,oldu =0,oldv=0,oldw=0;


    FGPropagate* Propagate = FDMExec->GetPropagate();
    const FGMatrix33& Tec2b = Propagate->GetTec2b();
    const FGMatrix33& Tb2ec = Propagate->GetTb2ec();
    const FGMatrix33& Tec2l = Propagate->GetTec2l();

    for(int i = 0; i<=inter; i++) {


      FGColumnVector3 coordBODY(0, -WingSpan/2+i*WingSpan/inter, 0);
      FGColumnVector3 coordECEF = Tb2ec*coordBODY;//transform(0, -b/2+i*b/inter, 0);
      double xWing = xECEF + coordECEF(1)*0.3048; // ft to m
      double yWing = yECEF + coordECEF(2)*0.3048; // ft to m
      double zWing = zECEF + coordECEF(3)*0.3048; // ft to m

      double meshx = xWing-xECEF_data_origine;
      double meshy = yWing-yECEF_data_origine;
      double meshz = zWing-zECEF_data_origine;

      Velocity vel = dataInterpolation(&data, t,meshx, meshy, meshz);

      double velu = vel.u*3.28084; // m/s to ft/s
      double velv = vel.v*3.28084; // m/s to ft/s
      double velw = vel.w*3.28084; // m/s to ft/s
      FGColumnVector3 veloECEF(velu,velv,velw);
      FGColumnVector3 velNED = Tec2l*veloECEF;

      integu = integu + (oldu + velNED(1))/2 * dy;
      integv = integv + (oldv + velNED(2))/2 * dy;
      integw = integw + (oldw + velNED(3))/2 * dy;
      oldu = velNED(1);
      oldu = velNED(2);
      oldu = velNED(3);
    }
    windvel.u = integu/b;
    windvel.v = integv/b;
    windvel.w = integw/b;


    return windvel;

  }


  /////////////////////
  ///  Wind Moment  ///
  /////////////////////

  double  FGAircraft::myMomentFunction(MyGrid *data, double t, double xECEF, double yECEF, double zECEF, double xECEF_data_origine, double yECEF_data_origine, double zECEF_data_origine)
  {

    FGAuxiliary* Auxiliary = FDMExec->GetAuxiliary();
    FGAtmosphere* Atmosphere = FDMExec->GetAtmosphere();
    FGAerodynamics* Aerodynamics = FDMExec->GetAerodynamics();
    FGPropagate* Propagate = FDMExec->GetPropagate();
    const FGMatrix33& Tec2b = Propagate->GetTec2b();
    const FGMatrix33& Tb2ec = Propagate->GetTb2ec();
    const FGMatrix33& Tl2b = Propagate->GetTl2b();
    double alpha = Auxiliary->Getalpha();
    double alphaW = Aerodynamics->GetAlphaW();

    FGColumnVector3 trueVel = Tl2b*Propagate->GetVel();
    double Utrue = -trueVel(1)*0.3048;
    double Vtrue = -trueVel(2)*0.3048;
    double Wtrue = -trueVel(3)*0.3048;
    double Density = Atmosphere->GetDensity();

    double MomentL;
    double MomentR;
    const double pi = M_PI;
    int inter = 20;
    double b = WingSpan*0.3048;//in.Wingspan; //FDMExec->Aircraft->GetWingSpan(); // Envergure de l'aile
    double phi = GetPhi();
    double psi = GetPsi();
    double theta = GetTheta();
    double dens = Density*515.378818;
    double surf = WingArea/inter*0.092903;
    double lambda = WingSpan*WingSpan/WingArea;
    double cTip = 0;
    double cRoot = 0;
    double WingStyle = 1;
    //  orientation = FGQuaternion(phi, theta, psi);
    //const FGMatrix33& _Tl2b  = orientation.GetT();     // local to body frame
    //const FGMatrix33& _Tb2l  = orientation.GetTInv();  // body to local


    // Total wing
    double MomentTotal = 0;
    double com = 0;
    for(int i = -(inter-1)/2; i<=(inter-1)/2; i++) {

      // Calcule de la surface de chaque morceau d'aile si les cordes sont spécifiés
      // Aile Trapezoidal
      if(WingStyle == 1 && cTip != 0 && cRoot != 0){
        double y = i*b/inter;
        double rapport = cTip/cRoot;
        double c = 2*WingArea*0.092903/((1+rapport)*b)*(1-((1-rapport)/b)*abs(y));
        surf = c*b/inter;
      }
      // Elliptical Wing
      if(WingStyle == 2 && cRoot != 0){
        double y = i*b/inter;
        double rapport = cTip/cRoot;
        double c = cRoot*sqrt(1-4*(y/b)*(y/b));
        surf = c*b/inter;
      }
      /*
      // Elliptical Wing
      if(WingStyle == 3 && cRoot != 0){
      double y = i*b/inter;
      double rapport = cTip/cRoot;
      double c = cRoot*(1-2*(1-rapport)*y/b);
      surf = c*b/inter;
    }
    */

    FGColumnVector3 coordBODY(0, i*WingSpan/inter, 0);
    FGColumnVector3 coordECEF = Tb2ec * coordBODY;//transform(0, -b/2+i*b/inter, 0);
    double xWing = xECEF + coordECEF(1)*0.3048;  // ft to m
    double yWing = yECEF + coordECEF(2)*0.3048;
    double zWing = zECEF + coordECEF(3)*0.3048;

    double meshx = xWing-xECEF_data_origine;
    double meshy = yWing-yECEF_data_origine;
    double meshz = zWing-zECEF_data_origine;

    Velocity vel = dataInterpolation(&data, t,meshx, meshy, meshz);


    FGColumnVector3 veloECEF(vel.u*3.28084,vel.v*3.28084,vel.w*3.28084); // m/s to ft/s
    FGColumnVector3 velR = Tec2b*veloECEF;
    double velLocalU = velR(1)/3.28084; // ft/s to m/s
    double velLocalV = velR(2)/3.28084; // ft/s to m/s
    double velLocalW = velR(3)/3.28084; // ft/s to m/s

    double velResult = (velLocalU+Utrue)/cos(alpha); // /cos(alpha) car on passe dans le aerodynamic Frame
    double alphaWind = atan ((velLocalW)/(velLocalU+Utrue));
    double alphaLocal = alphaW + alphaWind;//alpha + alphaWind;
    double CL = 2*pi*alphaLocal*lambda/(lambda+4); // (lambda+4) pour un moment;
    double Lift = 0.5*dens*(velResult)*(velResult)*surf*CL;

    printf("Lift %f \n", Lift);
    printf("Utrue %f \n", Utrue);
    com = com +1;
    MomentTotal = MomentTotal-Lift*(i*b/inter)*0.7375621493;
  }
  double RMC1 =  vMoments(eX)/(0.7375621493*0.5*dens*(Utrue)*(Utrue)*WingArea*0.092903*WingSpan*0.3048);
  printf("RMC1 %f \n", RMC1);
  printf("dens %f \n", dens);
  return MomentTotal;

}
// END : Modifié par Alex

bool FGAircraft::Run(bool Holding)
{
  if (FGModel::Run(Holding)) return true;
  if (Holding) return false;

  RunPreFunctions();

  // START : Modifié par Alex
  FGColumnVector3 myMoment;
  FGColumnVector3 myPosition;
  FGAuxiliary* Auxiliary = FDMExec->GetAuxiliary();
  FGPropagate* Propagate = FDMExec->GetPropagate();

  double t = FDMExec->GetSimTime();
  double temps = 1;
  //int num[4] = {30,100,100,100};
  //  MyGrid data(num);
  //setData(&data); // Pose probleme : Il faut setdata en dehors de la fonction et une seul fois


  myPosition = Propagate->GetLocation();
  double xECEF = myPosition(eX)*0.3048; // metre
  double yECEF = myPosition(eY)*0.3048; // metre
  double zECEF = myPosition(eZ)*0.3048; // metre

  printf("position %f %f %f %f\n",xECEF,yECEF,zECEF,t);
  //int *size = (**data).getsize();
  int nt = 10;//size[0];
  int nx = 100;//size[1];
  int ny = 100;//size[2]3
  int nz = 300;//size[3];

  double xECEF_data_origine = 6379306.223956; //metre
  double yECEF_data_origine = -50-0.000008; // metre 1050;//
  double zECEF_data_origine = 1000;

  int num[4] = {nt,nx,ny,nz};
  static MyGrid data(num);
  static bool initData = 0;

  if(initData == 0)
  {
    setDataWaPT(&data);
    printf("Je m'initialise");
    initData = 1;
  }

  double mx;
  Velocity windvel;

  if( xECEF>=xECEF_data_origine && xECEF<=(xECEF_data_origine+nx) &&\
  yECEF>=yECEF_data_origine && yECEF<=(yECEF_data_origine+ny) &&\
  zECEF>=zECEF_data_origine && zECEF<=(zECEF_data_origine+nz))
  {
    printf("OK1");
    mx = myMomentFunction(&data , temps, xECEF, yECEF, zECEF,xECEF_data_origine,yECEF_data_origine,zECEF_data_origine);
    printf("OK2");
    windvel = myWindFunction(&data , temps, xECEF, yECEF, zECEF,xECEF_data_origine,yECEF_data_origine,zECEF_data_origine);

  }
  else
  {
    mx = 0;
    windvel.u = 0;
    windvel.v = 0;
    windvel.w = 0;
  }

  //printf("moment1 %f \n",mx);

  myMoment(eX) = mx; //mx;
  myMoment(eY) = 0; //my;
  myMoment(eZ) = 0;

  FGColumnVector3 myWindNED;

  myWindNED(eNorth) = windvel.u;
  myWindNED(eEast) = windvel.v;
  myWindNED(eDown) = windvel.w;

  WakeTotalWindNED = in.TotalWindNED + myWindNED; // Pas sur du signe

  vForces = in.AeroForce;
  vForces += in.PropForce;
  vForces += in.GroundForce;
  vForces += in.ExternalForce;
  vForces += in.BuoyantForce;

  vMoments = in.AeroMoment;
  vMoments += in.PropMoment;
  vMoments += in.GroundMoment;
  vMoments += in.ExternalMoment;
  vMoments += in.BuoyantMoment;
  vMoments += myMoment;

  FGColumnVector3 AircraftVel = Propagate->GetVel()*0.3048;
  double AircraftVelU = AircraftVel(1);
  FGAtmosphere* Atmosphere = FDMExec->GetAtmosphere();
  const FGMatrix33& Tl2b = Propagate->GetTl2b();
  FGColumnVector3 trueVel = Tl2b*Propagate->GetVel();
  double Utrue = -trueVel(1);
  double Density = Atmosphere->GetDensity();
  double RMC2 =  vMoments(eX)/(0.5*Density*(AircraftVelU)*(AircraftVelU)*WingArea*WingSpan);
  printf("RMC2 %f \n", RMC2);
  // END : Modifié par Alex
  RunPostFunctions();
  /*
  if(mx != 0)
  {
  printf("time %f \n",t);
  printf("xECEF,yECEF,zECEF %f %f %f \n",xECEF,yECEF,zECEF);
  printf("moment %f \n",mx);
  double printvel = (double) windvel.u;
  printf("velocity %f \n",printvel);
}
*/
return false;

}

// END : Modifié par Alex

//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

bool FGAircraft::Load(Element* el)
{
  string element_name;
  Element* element;

  if (!FGModel::Load(el, true)) return false;

  if (el->FindElement("wingarea"))
  WingArea = el->FindElementValueAsNumberConvertTo("wingarea", "FT2");
  if (el->FindElement("wingspan"))
  WingSpan = el->FindElementValueAsNumberConvertTo("wingspan", "FT");
  if (el->FindElement("chord"))
  cbar = el->FindElementValueAsNumberConvertTo("chord", "FT");
  if (el->FindElement("wing_incidence"))
  WingIncidence = el->FindElementValueAsNumberConvertTo("wing_incidence", "RAD");
  if (el->FindElement("htailarea"))
  HTailArea = el->FindElementValueAsNumberConvertTo("htailarea", "FT2");
  if (el->FindElement("htailarm"))
  HTailArm = el->FindElementValueAsNumberConvertTo("htailarm", "FT");
  if (el->FindElement("vtailarea"))
  VTailArea = el->FindElementValueAsNumberConvertTo("vtailarea", "FT2");
  if (el->FindElement("vtailarm"))
  VTailArm = el->FindElementValueAsNumberConvertTo("vtailarm", "FT");

  // Find all LOCATION elements that descend from this METRICS branch of the
  // config file. This would be CG location, eyepoint, etc.

  element = el->FindElement("location");
  while (element) {
    element_name = element->GetAttributeValue("name");

    if (element_name == "AERORP") vXYZrp = element->FindElementTripletConvertTo("IN");
    else if (element_name == "EYEPOINT") vXYZep = element->FindElementTripletConvertTo("IN");
    else if (element_name == "VRP") vXYZvrp = element->FindElementTripletConvertTo("IN");

    element = el->FindNextElement("location");
  }

  // calculate some derived parameters
  if (cbar != 0.0) {
    lbarh = HTailArm/cbar;
    lbarv = VTailArm/cbar;
    if (WingArea != 0.0) {
      vbarh = HTailArm*HTailArea / (cbar*WingArea);
      vbarv = VTailArm*VTailArea / (WingSpan*WingArea);
    }
  }

  PostLoad(el, FDMExec);

  Debug(2);

  return true;
}

//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

void FGAircraft::bind(void)
{
  typedef double (FGAircraft::*PMF)(int) const;
  PropertyManager->Tie("metrics/Sw-sqft", this, &FGAircraft::GetWingArea, &FGAircraft::SetWingArea);
  PropertyManager->Tie("metrics/bw-ft", this, &FGAircraft::GetWingSpan);
  PropertyManager->Tie("metrics/cbarw-ft", this, &FGAircraft::Getcbar);
  PropertyManager->Tie("metrics/iw-rad", this, &FGAircraft::GetWingIncidence);
  PropertyManager->Tie("metrics/iw-deg", this, &FGAircraft::GetWingIncidenceDeg);
  PropertyManager->Tie("metrics/Sh-sqft", this, &FGAircraft::GetHTailArea);
  PropertyManager->Tie("metrics/lh-ft", this, &FGAircraft::GetHTailArm);
  PropertyManager->Tie("metrics/Sv-sqft", this, &FGAircraft::GetVTailArea);
  PropertyManager->Tie("metrics/lv-ft", this, &FGAircraft::GetVTailArm);
  PropertyManager->Tie("metrics/lh-norm", this, &FGAircraft::Getlbarh);
  PropertyManager->Tie("metrics/lv-norm", this, &FGAircraft::Getlbarv);
  PropertyManager->Tie("metrics/vbarh-norm", this, &FGAircraft::Getvbarh);
  PropertyManager->Tie("metrics/vbarv-norm", this, &FGAircraft::Getvbarv);
  PropertyManager->Tie("metrics/aero-rp-x-in", this, eX, (PMF)&FGAircraft::GetXYZrp, &FGAircraft::SetXYZrp);
  PropertyManager->Tie("metrics/aero-rp-y-in", this, eY, (PMF)&FGAircraft::GetXYZrp, &FGAircraft::SetXYZrp);
  PropertyManager->Tie("metrics/aero-rp-z-in", this, eZ, (PMF)&FGAircraft::GetXYZrp, &FGAircraft::SetXYZrp);
  PropertyManager->Tie("metrics/eyepoint-x-in", this, eX, (PMF)&FGAircraft::GetXYZep);
  PropertyManager->Tie("metrics/eyepoint-y-in", this, eY,(PMF)&FGAircraft::GetXYZep);
  PropertyManager->Tie("metrics/eyepoint-z-in", this, eZ, (PMF)&FGAircraft::GetXYZep);
  PropertyManager->Tie("metrics/visualrefpoint-x-in", this, eX, (PMF)&FGAircraft::GetXYZvrp);
  PropertyManager->Tie("metrics/visualrefpoint-y-in", this, eY, (PMF)&FGAircraft::GetXYZvrp);
  PropertyManager->Tie("metrics/visualrefpoint-z-in", this, eZ, (PMF)&FGAircraft::GetXYZvrp);

  // Modifié par alex

  // Total, calculated winds (local navigational/geographic frame: N-E-D). Read only.
  PropertyManager->Tie("atmosphere/total-wind-north-fps", this, eNorth, (PMF)&FGAircraft::GetWakeTotalWindNED);
  PropertyManager->Tie("atmosphere/total-wind-east-fps",  this, eEast,  (PMF)&FGAircraft::GetWakeTotalWindNED);
  PropertyManager->Tie("atmosphere/total-wind-down-fps",  this, eDown,  (PMF)&FGAircraft::GetWakeTotalWindNED);

}


//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//    The bitmasked value choices are as follows:
//    unset: In this case (the default) JSBSim would only print
//       out the normally expected messages, essentially echoing
//       the config files as they are read. If the environment
//       variable is not set, debug_lvl is set to 1 internally
//    0: This requests JSBSim not to output any messages
//       whatsoever.
//    1: This value explicity requests the normal JSBSim
//       startup messages
//    2: This value asks for a message to be printed out when
//       a class is instantiated
//    4: When this value is set, a message is displayed when a
//       FGModel object executes its Run() method
//    8: When this value is set, various runtime state variables
//       are printed out periodically
//    16: When set various parameters are sanity checked and
//       a message is printed out when they go out of bounds

void FGAircraft::Debug(int from)
{
  if (debug_lvl <= 0) return;

  if (debug_lvl & 1) { // Standard console startup message output
    if (from == 2) { // Loading
      cout << endl << "  Aircraft Metrics:" << endl;
      cout << "    WingArea: " << WingArea  << endl;
      cout << "    WingSpan: " << WingSpan  << endl;
      cout << "    Incidence: " << WingIncidence << endl;
      cout << "    Chord: " << cbar << endl;
      cout << "    H. Tail Area: " << HTailArea << endl;
      cout << "    H. Tail Arm: " << HTailArm << endl;
      cout << "    V. Tail Area: " << VTailArea << endl;
      cout << "    V. Tail Arm: " << VTailArm << endl;
      cout << "    Eyepoint (x, y, z): " << vXYZep << endl;
      cout << "    Ref Pt (x, y, z): " << vXYZrp << endl;
      cout << "    Visual Ref Pt (x, y, z): " << vXYZvrp << endl;
    }
  }
  if (debug_lvl & 2 ) { // Instantiation/Destruction notification
    if (from == 0) cout << "Instantiated: FGAircraft" << endl;
    if (from == 1) cout << "Destroyed:    FGAircraft" << endl;
  }
  if (debug_lvl & 4 ) { // Run() method entry print for FGModel-derived objects
  }
  if (debug_lvl & 8 ) { // Runtime state variables
  }
  if (debug_lvl & 16) { // Sanity checking
  }
  if (debug_lvl & 64) {
    if (from == 0) { // Constructor
    }
  }
}
} // namespace JSBSim
