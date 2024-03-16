#include "testlib.h"

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int T = inf.readInt(1,10,"T");
    inf.readEoln();
    for (int j = 0;j<T;j++)
    {
        int n = inf.readInt(1, 1'00'000, "n");
        inf.readEoln();
        for(int i=1;i<=n;i++)
        {
            inf.readInt(1,n,"a_i");
            if(i!=n)
            {
                inf.readSpace();
            }
        }
        inf.readEoln();
        int m = inf.readInt(1, 1'00'000, "m");
    
        inf.readEoln();
      
        for(int i=1;i<=m;i++)
        {
            inf.readInt(1,n,"b_i");
            if(i!=m)
            {
                inf.readSpace();
            }
        }
        inf.readEoln();
    }
    inf.readEof();
}