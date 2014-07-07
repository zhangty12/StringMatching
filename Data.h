#ifndef DATA_H
#define DATA_H

#include <fstream>
#include <cstdlib>
#include <random>
using namespace std;

class Data{
public:
    // transfering prob data to DP;
    virtual double* transferProbData()=0;
};

class SHAPE_Data: public Data{
private:
    int length;
    double* rawData;
    double* probData;

    // convert rawData to probData
    // default on parameters
    void perturb();

public:
    SHAPE_Data(const char* filename);
    ~SHAPE_Data();

    void convertToProb();
    double* transferProbData();
};

#endif
