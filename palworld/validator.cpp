#include "testlib.h"

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int T = inf.readInt(1,20,"T");
    inf.readEoln();
    for (int k = 0;k<T;k++)
    {
        int n = inf.readInt(1, 1000, "n");
        inf.readSpace();
        int m = inf.readInt(1, 1000, "m");
        inf.readEoln();
        for (int i = 0; i < n; i++) {
            int p = inf.readInt(1, 12, "p_i");
            inf.readSpace();
            for(int j=0; j<p; j++) {
                inf.readInt(1, 12, "s_i");
                if(j<p-1)
                {
                    inf.readSpace();
                }
            }
            inf.readEoln();
        }
        for (int i = 0; i < m; i++) {
            int t = inf.readInt(1, 12, "t");
            if(i<m-1)
            {
                inf.readSpace();
            }
        }
        inf.readEoln();
    }
    inf.readEof();
}