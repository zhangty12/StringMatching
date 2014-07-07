#include "Data.h"
#include "DP.h"
#include <string>
using namespace std;
int main(int argc, char* argv[]){
    std::string file = "input.txt";
    const char* FILENAME = file.c_str();
    // init data storage with filename
    SHAPE_Data shpDat(FILENAME);

    // convertToProb() could be wrapped up in the init function
    shpDat.convertToProb();

    // deliver shpDat's probabilities to dynamic programming
//    DP_NearestNeighbor analyzer(&shpDat);

    //double LAMBDA_BEGIN = -1, LAMBDA_END = 1, LAMBDA = 0.01;
    // gridSearch(begin, end, step)
   // analyzer.gridSearch(LAMBDA_BEGIN, LAMBDA_END, LAMBDA);

    // output the ultimate solution
    //analyzer.output();

    return 0;
}
