#include "Data.h"

SHAPE_Data::SHAPE_Data(const char* filename)
{
    ifstream fin;
    fin.open(filename);
    length = 0;
    double cur_val;
    while (fin >> cur_val)
    {
        rawData[length++] = cur_val;
    }
}

SHAPE_Data::~SHAPE_Data()
{

}

void SHAPE_Data::convertToProb()
{
    default_random_engine generator;
    normal_distribution<double> distribution(0, 1.0);
    double perturb_number = distribution(generator);
    for (int i = 0; i < length; i++)
    {
        probData[i] = rawData[i] + perturb_number;
        if (probData[i] <= 0.25)
            probData[i] = 0;
        else
            probData[i] = 1;
    }
}

double* SHAPE_Data::transferProbData()
{
    double* Prob = new double[length];
    for (int i = 0; i < length; i++)
        Prob[i] = probData[i];
    return Prob;
}
