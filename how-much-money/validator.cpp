#include "testlib.h"
#include <string>
#include <map>
using namespace std;
int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int T = inf.readInt(1,20,"T");
    inf.readEoln();
    while(T--)
    {
        int n = inf.readInt(1,1'00'000,"n");
        inf.readSpace();
        int m = inf.readInt(1,min(n,60),"m");
        inf.readEoln();
        map <int,bool> a;
        for(int i=1;i<=m;i++)
        {
            int a_i = inf.readInt(1,n,"a_i");
            ensure(a[a_i] == false);
            a[a_i] = true;
            if(i!=m)
            {
                inf.readSpace();
            }
            else
            {
                inf.readEoln();
            }
        }
    }
    inf.readEof();
}