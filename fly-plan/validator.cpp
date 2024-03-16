#include "testlib.h"
#include <string>

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int n = inf.readInt(1,20000,"n");
    inf.readSpace();
    int m = inf.readInt(1,50000,"m");
    inf.readSpace();
    int k = inf.readInt(0,10,"k");
    inf.readEoln();
    int s = inf.readInt(1,n,"s");
    inf.readSpace();
    int t = inf.readInt(1,n,"t");
    inf.readEoln();
    while(m--)
    {
        int a = inf.readInt(1,n,"a");
        inf.readSpace();
        int b = inf.readInt(1,n,"b");
        inf.readSpace();
        int c = inf.readInt(1,1000,"c");
        inf.readEoln();
    }
    inf.readEof();
}