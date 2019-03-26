//
//  gridWAPT.hpp
//
//
//  Created by Alexandre Quintart on 11/03/2019.
//

#ifndef gridWAPT_hpp
#define gridWAPT_hpp

#include <stdio.h>


#define GET_N(atime,ai,aj,ak)\
    (atime * (mysize[1]*mysize[2]*mysize[3]) + \
     ai    * (          mysize[2]*mysize[3]) + \
     aj    * (                    mysize[3]) + \
     ak    )


enum VelType {U=1,V=2,W=3};

class MyGrid{

private:
    int mysize[4];
    // mydata[U,V,W] [ntime * nx * ny * nz]
    double* mydata[3];
public:
    // constructor
    MyGrid(int n[4]);
    // destructor
    ~MyGrid();
    // set and gets
    double get(int itime, int i, int j, int k,int dim);
    void   set(int itime, int i, int j, int k,int dim, double val);

    double get(int itime, int i, int j, int k,VelType dim);
    void   set(int itime, int i, int j, int k,VelType dim, double val);

    double* getVelocity(VelType dim);

};


#endif /* gridWAPT_hpp */
