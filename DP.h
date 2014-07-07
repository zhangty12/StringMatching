#ifndef DP_H
#define DP_H

#include <iostream>
#include "Data.h"

class DP_NearestNeighbor{
private:
    int length;
    char* sequence;
    double* probability;

    double minEnergy;
    // 0s and 1s; 0 for paired, 1 for unpaired;
    int* result;

public:
    DP_NearestNeighbor(Data* data);
    ~DP_NearestNeighbor();

    void gridSearch(double bgn, double nd, double step);
    void output();
};

#endif
