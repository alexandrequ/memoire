//
//  gridWAPT.cpp
//  
//
//  Created by Alexandre Quintart on 11/03/2019.
//

#include "gridWAPT.hpp"
#include <cstdlib>

MyGrid::MyGrid(int n[4]){
    
    mysize[0] = n[0]; // number of times
    mysize[1] = n[1]; // number of nx
    mysize[2] = n[2]; // number of ny
    mysize[3] = n[3]; // number of nz
    
    mydata[0] = (double*)calloc(sizeof(double),n[0]*n[1]*n[2]*n[3]); // u
    mydata[1] = (double*)calloc(sizeof(double),n[0]*n[1]*n[2]*n[3]); // v
    mydata[3] = (double*)calloc(sizeof(double),n[0]*n[1]*n[2]*n[3]); // w
    
}

MyGrid::~MyGrid(){
    free(mydata[0]);
    free(mydata[1]);
    free(mydata[2]);
}

double MyGrid::get(int itime, int i, int j, int k, int dim){
    return mydata[dim][GET_N(itime,i,j,k)];
}
void MyGrid::set(int itime, int i, int j, int k, int dim,double val){
    mydata[dim][GET_N(itime,i,j,k)] = val;
}

double MyGrid::get(int itime, int i, int j, int k, VelType dim){
    return mydata[dim][GET_N(itime,i,j,k)];
}
void MyGrid::set(int itime, int i, int j, int k, VelType dim,double val){
    mydata[dim][GET_N(itime,i,j,k)] = val;
}

double* MyGrid::getVelocity(VelType dim){
    return mydata[dim];
}
