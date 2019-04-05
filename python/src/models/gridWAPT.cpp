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

    mydata[0] = (double*)calloc(n[0]*n[1]*n[2]*n[3],sizeof(double)+1); // u
    mydata[1] = (double*)calloc(n[0]*n[1]*n[2]*n[3],sizeof(double)+1); // v
    mydata[2] = (double*)calloc(n[0]*n[1]*n[2]*n[3],sizeof(double)+1); // w


    printf("Hello from allocation grid\n");
    //printf("mydata = %p %p %p\n",mydata[0],mydata[1],mydata[2]);

    _isInitialized = 1;

}

MyGrid::~MyGrid(){

  if(_isInitialized){
    free(mydata[0]);
    free(mydata[1]);
    free(mydata[2]);
  }
  else{
    printf("!!Trying to delete an uninitialized pointer.... noooo Gooood!!\n\n");
  }

}

double MyGrid::get(int itime, int i, int j, int k, int dim){
    return mydata[dim][GET_N(itime,i,j,k)];
}
void MyGrid::set(int itime, int i, int j, int k, int dim,double val){
  //printf("Hello from setting data\n");
    mydata[dim][GET_N(itime,i,j,k)] = val;
}

double MyGrid::get(int itime, int i, int j, int k, VelType dim){
    return mydata[dim][GET_N(itime,i,j,k)];
}
void MyGrid::set(int itime, int i, int j, int k, VelType dim,double val){
    mydata[dim][GET_N(itime,i,j,k)] = val;
}

int* MyGrid::getsize()
{
  return mysize;
}

double* MyGrid::getVelocity(VelType dim){ // double*
    return mydata[dim];
}
