#include "testlib.h"

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int T = inf.readInt(1,20,"T");
    inf.readEoln();
    for (int k = 0;k<T;k++)
    {
        
        int n = inf.readInt(1,1'00'000,"n");
        inf.readSpace();
        int m = inf.readInt(0,n,"m");
        inf.readEoln();
        while(n--)
        {
            inf.readInt(0,1'000'000'000,"a");
            if(n)
            {
                inf.readSpace();
            }
            
        }
        inf.readEoln();
    }
    inf.readEof();
}