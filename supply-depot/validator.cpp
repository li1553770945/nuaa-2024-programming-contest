#include "testlib.h"

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int T = inf.readInt(1,10,"T");
    inf.readEoln();
    int n_sum = 0;
    int m_sum = 0;
    for (int j = 0;j<T;j++)
    {
        int n = inf.readInt(1, 5'00'000, "n");
        n_sum += n;
        inf.readEoln();
        for(int i=1;i<=n;i++)
        {
            inf.readInt(1,1'000'000'000,"a_i");
            if(i!=n)
            {
                inf.readSpace();
            }
        }
        inf.readEoln();
        int m = inf.readInt(1, 5'00'000, "m");
        m_sum+=m;
        inf.readEoln();
      
        for(int i=1;i<=m;i++)
        {
            int l_i = inf.readInt(1,n,"l_i");
            inf.readSpace();
            int r_i = inf.readInt(1,n,"r_i");
            ensure( l_i >= 1 && l_i <= r_i && r_i <=n);
            inf.readEoln();
        }
        
        
    }
    ensure(n_sum <= 5'00'000);
    ensure(m_sum <= 5'00'000);
    inf.readEof();
}