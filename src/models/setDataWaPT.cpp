//
//  setDataWaPT.cpp
//
//
//  Created by Alexandre Quintart on 01/04/2019.
//


#include "setDataWaPT.hpp"
#include "gridWAPT.hpp"
#include <cstdlib>
#include <math.h>

void setDataWaPT(MyGrid *data) {

  int *size = (*data).getsize();
  int nt = size[0];
  int nx = size[1];
  int ny = size[2];
  int nz = size[3];


  double x01 = 75;
  double y01 = 50;

  double x02 = 25;
  double y02 = 50;

  double circ0 = 565;
  double b = 64.43;
  double rc = 3.75+0.0582*b;

//Perpendiculaire

for(int t = 0; t<nt; t++){
  for(int i = 0; i<nx; i++){
    for(int j = 0; j<ny; j++){
      for(int k = 0; k<nz; k++){
        double r1=sqrt((i-x01)*(i-x01)+(k-y01)*(k-y01));
        double r2=sqrt((i-x02)*(i-x02)+(k-y02)*(k-y02));
        double v1 = circ0/(2*M_PI*r1)*(1-exp(-1.2564*(r1/rc)*(r1/rc)));
        double v2 = circ0/(2*M_PI*r2)*(1-exp(-1.2564*(r2/rc))*(r2/rc));

        double u = -(k-y01)/r1*v1+(k-y02)/r2*v2;
        double v = 0;
        double w = (i-x01)/r1*v1-(i-x02)/r2*v2;
        (*data).set(t,i,j,k,U, u);
        (*data).set(t,i,j,k,V, v);
        (*data).set(t,i,j,k,W, w);
      }
    }
  }
}
};

/*
  for(int t = 0; t<nt; t++){
    for(int i = 0; k<nx; k++){
      for(int j = 0; j<ny; j++){
        for(int i = 0; i<nz; i++){
          double r1=sqrt((i-x01)*(i-x01)+(j-y01)*(j-y01));
          double r2=sqrt((i-x02)*(i-x02)+(j-y02)*(j-y02));
          double v1 = circ0/(2*M_PI*r1)*(1-exp(-1.2564*(r1/rc)*(r1/rc)));
          double v2 = circ0/(2*M_PI*r2)*(1-exp(-1.2564*(r2/rc))*(r2/rc));

          double u = 0;
          double v = (i-x01)/r1*v1-(i-x02)/r2*v2;
          double w = -(j-y01)/r1*v1+(j-y02)/r2*v2;;
          (*data).set(t,i,j,k,U, u);
          (*data).set(t,i,j,k,V, v);
          (*data).set(t,i,j,k,W, w);
        }
      }
    }
  }
  };
*/



// Paralle à l'avion
/*
for(int t = 0; t<nt; t++){
  for(int i = 0; i<nx; i++){
    for(int j = 0; j<ny; j++){
      for(int k = 0; k<nz; k++){
        double r1=sqrt((i-x01)*(i-x01)+(j-y01)*(j-y01));
        double r2=sqrt((i-x02)*(i-x02)+(j-y02)*(j-y02));
        double v1 = circ0/(2*M_PI*r1)*(1-exp(-1.2564*(r1/rc)*(r1/rc)));
        double v2 = circ0/(2*M_PI*r2)*(1-exp(-1.2564*(r2/rc))*(r2/rc));

        double u = -(j-y01)/r1*v1+(j-y02)/r2*v2;
        double v = (i-x01)/r1*v1-(i-x02)/r2*v2;
        double w = 0;
        (*data).set(t,i,j,k,U, u);
        (*data).set(t,i,j,k,V, v);
        (*data).set(t,i,j,k,W, w);
      }
    }
  }
}
};
*/




/*
  for(int t = 0; t<nt; t++){
    for(int i = 0; i<nx; i++){
      for(int j = 0; j<ny; j++){
        for(int k = 0; k<nz; k++){
          for(int l = 0; l<3; l++){
            //double val = rand() % 30 + 1; //m/s
            (*data).set(t,i,j,k,l, val);

          }
        }
      }
    }
  }
  */
