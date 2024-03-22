#include "testlib.h"
#include <string>

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int n = inf.readInt(1,5'00'000,"n");
    inf.readSpace();
    int k = inf.readInt(1,n/2,"k");
    inf.readEoln();
   
    while(n--)
    {
        int a = inf.readInt(-1'00'000'000,1'00'000'000,"a");
        if(n)
        {
            inf.readSpace();
        }
        
    }
    inf.readEoln();
    inf.readEof();
}