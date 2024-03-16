#include "testlib.h"
#include <string>
using namespace std;
int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int T = inf.readInt(1,100,"T");
    inf.readEoln();
    for (int k = 0;k<T;k++)
    {
        int n = inf.readInt(1,100,"n");
        inf.readSpace();
        int v = inf.readInt(1,1'000'000'000,"v");
        inf.readEoln();
        while(n--)
        {
            int i,p;
            i = inf.readInt(1,1'000'000'000,"i");
            inf.readSpace();
            p = inf.readInt(1,1'000'000'000,"p");
            inf.readEoln();
        }
    }
    inf.readEof();
}