//
//  setDataWaPT.cpp
//
//
//  Created by Alexandre Quintart on 01/04/2019.
//

#include "setDataWaPT.hpp"
#include "gridWAPT.hpp"
#include <cstdlib>

void setDataWaPT(MyGrid *data) {

  int *size = (*data).getsize();
  int nt = size[0];
  int nx = size[1];
  int ny = size[2];
  int nz = size[3];

  for(int t = 0; t<nt; t++){
  for(int i = 0; i<nx; i++){
    for(int j = 0; j<ny; j++){
      for(int k = 0; k<nz; k++){
        for(int l = 0; l<3; l++){
          double val = rand() % 1000 + 1;
          (*data).set(t,i,j,k,l, val);

          }
        }
      }
    }
  }
};
