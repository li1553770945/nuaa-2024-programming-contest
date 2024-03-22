#include "testlib.h"

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int T = inf.readInt(1,10,"T");
    inf.readEoln();
    for (int j = 0;j<T;j++)
    {
        int n = inf.readInt(1, 1'00'000, "n");
        inf.readEoln();
        while(n--)
        {
            inf.readInt(1,1'000'000,"a_i");
            inf.readSpace();
            inf.readInt(1,1'000'000,"b_i");
            inf.readEoln();
        }
        
    }
    
    inf.readEof();
}