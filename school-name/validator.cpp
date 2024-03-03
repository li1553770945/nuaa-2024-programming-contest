#include "testlib.h"

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int T = inf.readInt(1,20,"T");
    inf.readEoln();
    for (int k = 0;k<T;k++)
    {
        
        int y = inf.readInt(1,2023,"y");
        inf.readEoln();
    }
    inf.readEof();
}