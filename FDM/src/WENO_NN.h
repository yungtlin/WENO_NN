// Header: Class/function declaration for mesh data managing
//
// Author: Yung-Tien Lin (UCLA)
// Created: June, 1, 2021
// Updated: June, 8, 2021

#pragma once

// Version
#define CURRENT_VERSION 1


///////////////
// Libraries //
///////////////
#include <math.h>
#include <stdio.h>

#include "SparseMatrix.h"

//////////////
// PCSolver //
//////////////
class WENO_NN
{
private:
    int __nn_count;
    Vec2D *__weights;

public:
    WENO_NN();
    ~WENO_NN(){
        if (__nn_count > 0){
            delete[] __weights;
        }
    };

    // Loading Bin
    void load_bin(const char* path);
    void load_header(FILE* fp);
    void load_weights(FILE* fp);

    //value_type predict();
};

