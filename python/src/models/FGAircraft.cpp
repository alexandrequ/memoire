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
#include "initialization/FGInitialCondition.h"
#include "FGFDMExec.h"
#include "input_output/FGXMLElement.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include "gridWAPT.hpp"

using namespace std;

namespace JSBSim {

/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
CLASS IMPLEMENTATION
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/

FGAircraft::FGAircraft(FGFDMExec* fdmex) : FGModel(fdmex)
{
  Name = "FGAircraft";
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

    
    ////////////////////////
    ///  Structure Data  ///
    ////////////////////////
    
    int num[4] ={30,30,30,30};

    MyGrid data(num);
    
    
    //////////////////////
    ///  Interpolation ///
    //////////////////////
    
    Velocity BilinearInterpolation(Velocity q11, Velocity q12, Velocity q21, Velocity q22, double x1, double x2, double y1, double y2, double x, double y)
    {
        /* q11 = u11 or v11 or w11 ...
         x1, x2, y1, y2 = maillage
         x,y = position fragmant de l'aile
         */
        Velocity vent;
        double x2x1, y2y1, x2x, y2y, yy1, xx1;
        x2x1 = x2 - x1;
        y2y1 = y2 - y1;
        x2x = x2 - x;
        y2y = y2 - y;
        yy1 = y - y1;
        xx1 = x - x1;
        vent.u =  1.0 / (x2x1 * y2y1) * (
                                         q11.u * x2x * y2y +
                                         q21.u * xx1 * y2y +
                                         q12.u * x2x * yy1 +
                                         q22.u * xx1 * yy1
                                         );
        vent.v =  1.0 / (x2x1 * y2y1) * (
                                         q11.v * x2x * y2y +
                                         q21.v * xx1 * y2y +
                                         q12.v * x2x * yy1 +
                                         q22.v * xx1 * yy1
                                         );
        vent.w =  1.0 / (x2x1 * y2y1) * (
                                         q11.w * x2x * y2y +
                                         q21.w * xx1 * y2y +
                                         q12.w * x2x * yy1 +
                                         q22.w * xx1 * yy1
                                         );
        return vent;
    }
    
    
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
    
    Velocity dataInterpolation(MyGrid data, double time, double x, double y, double z)
    {
        int t =(int) time;
        
        int x0 = (int) x;
        int y0 = (int) y;
        int z0 = (int) z;
        
        int x1 = x0+1;
        int y1 = y0+1;
        int z1 = z0+1;
        
        Velocity c000;
        c000.u = data.get(t,x0,y0,z0,U);
        c000.v = data.get(t,x0,y0,z0,V);
        c000.w = data.get(t,x0,y0,z0,W);
        
        Velocity c001;
        c001.u = data.get(t,x0,y0,z1,U);
        c001.v = data.get(t,x0,y0,z1,V);
        c001.w = data.get(t,x0,y0,z1,W);
        
        Velocity c010;
        c010.u = data.get(t,x0,y1,z0,U);
        c010.v = data.get(t,x0,y1,z0,V);
        c010.w = data.get(t,x0,y1,z0,W);
        
        Velocity c011;
        c011.u = data.get(t,x0,y1,z1,U);
        c011.v = data.get(t,x0,y1,z1,V);
        c011.w = data.get(t,x0,y1,z1,W);
        
        Velocity c101;
        c101.u = data.get(t,x1,y0,z1,U);
        c101.v = data.get(t,x1,y0,z1,V);
        c101.w = data.get(t,x1,y0,z1,W);
        
        Velocity c110;
        c110.u = data.get(t,x1,y1,z0,U);
        c110.v = data.get(t,x1,y1,z0,V);
        c110.w = data.get(t,x1,y1,z0,W);
        
        Velocity c100;
        c100.u = data.get(t,x1,y0,z0,U);
        c100.v = data.get(t,x1,y0,z0,V);
        c100.w = data.get(t,x1,y0,z0,W);
        
        Velocity c111;
        c111.u = data.get(t,x1,y1,z1,U);
        c111.v = data.get(t,x1,y1,z1,V);
        c111.w = data.get(t,x1,y1,z1,W);
        
        Velocity interp = trilinearInterpolation(c000, c001, c010, c011, c101, c110,c100, c111, x0, x1, y0, y1, z0, z1, x, y, z);
        
        return interp;
    }

    /////////////////////
    ///  Wind Moment  ///
    /////////////////////
    
    double  FGAircraft::myMomentFunction( MyGrid data, double t, double xNED, double yNED, double zNED)
    {
        FGAuxiliary* Auxiliary = FDMExec->GetAuxiliary();
        double alpha = Auxiliary->Getalpha();
        double MomentL;
        double MomentR;
        const double pi = M_PI;
        int inter = 20;
        double b = WingSpan;//in.Wingspan; //FDMExec->Aircraft->GetWingSpan(); // Envergure de l'aile
       // double surface = FDMExec->Aircraft->GetWingArea();
        double phi = GetPhi();
        double psi = GetPsi();
        double theta = GetTheta();
        double dens = Density;
        double surf = in.Wingarea/inter;
        double lambda = b*b/in.Wingarea;
        
          orientation = FGQuaternion(phi, theta, psi);
        const FGMatrix33& _Tl2b  = orientation.GetT();     // local to body frame
        const FGMatrix33& _Tb2l  = orientation.GetTInv();  // body to local
        
        // Left wing
        double interLeft = inter/2; //Nmbre d'interval
        Velocity velLeft[inter+1];
        for(int i = 0; i<=interLeft; i++) {
            
            FGColumnVector3 coordBODY(0, -b/2+i*b/inter, 0);
            FGColumnVector3 coordNED = _Tl2b*coordBODY;//transform(0, -b/2+i*b/inter, 0);
            double xWing = coordNED(1);
            double yWing = coordNED(2);
            double zWing = coordNED(3);
            
            Velocity vel = dataInterpolation(data, t, xWing, yWing, zWing);
            
            FGColumnVector3 veloNED(vel.u,vel.v,vel.w);
            FGColumnVector3 velL = _Tb2l*veloNED;
            double velRoll = velL(3);
            double CL = 2*pi*alpha*lambda/(lambda+2);
            double LiftL = 0.5*dens*(velRoll)*(velRoll)*surf*CL;
            MomentL = MomentL+LiftL*(-b/2+i*b/(2*inter));
        }
        
        // Right wing
        double interRight = inter/2; //Nmbre d'interval
        Velocity velRight[inter+1];
        for(int i = 0; i<=interRight; i++) {
            
            FGColumnVector3 coordBODY(0, -b/2+i*b/inter, 0);
            FGColumnVector3 coordNED = _Tl2b*coordBODY;//transform(0, -b/2+i*b/inter, 0);
            double xWing = coordNED(1);
            double yWing = coordNED(2);
            double zWing = coordNED(3);
            
            Velocity vel = dataInterpolation(data, t, xWing, yWing, zWing);
            
            FGColumnVector3 veloNED(vel.u,vel.v,vel.w);
            FGColumnVector3 velR = _Tb2l*veloNED;
            double velRoll = velR(3);
            double CL = 2*pi*alpha*lambda/(lambda+2);
            double LiftR = 0.5*dens*(velRoll)*(velRoll)*surf*CL;
            MomentR = MomentR+LiftR*(i*b/(2*inter));
        }
        
        
        double moment = MomentR-MomentL;
        return moment;
    }
    
        // END : Modifié par Alex

bool FGAircraft::Run(bool Holding)
{
  if (FGModel::Run(Holding)) return true;
  if (Holding) return false;

  RunPreFunctions();

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
    
    // START : Modifié par Alex
    FGColumnVector3 myMoment;
    
     FGAuxiliary* Auxiliary = FDMExec->GetAuxiliary();
    double alpha = Auxiliary->Getalpha();
    
    double t = FDMExec->GetSimTime();
    
    double xNED = 1;
    double yNED = 2;
    double zNED = 3;
    double mz = myMomentFunction(data , t, xNED, yNED, zNED);
    
    myMoment(eX) = 0; //mx;
    myMoment(eY) = 0; //my;
    myMoment(eZ) = mz;
    
    vMoments += myMoment;

    // END : Modifié par Alex
  RunPostFunctions();

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
