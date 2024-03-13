#include "testlib.h"
#include <vector>
using namespace std;
void solve(int T,int n,int m,long long v,vector <int> & a,vector<long long>& p)
{
    sort(a.begin()+1,a.end());
    for(int i =1;i<p.size()-1;i++)
    {
        if(p[i]<p[i+1])
        {
            quitf(_wa, "For test %d,price is not sort on DESC",T);

        }
    }
    vector<int> pa ;
    pa.push_back(0);

    for(int i=1;i<=n;i++)
    {
        if(v>=p[i])
        {
            pa.push_back(i);
            v -= p[i];
        }
    }

    if(pa.size() != m+1)
    {
         quitf(_wa, "For test %d,Purchased %d dishes based on  the output, which should actually be %d",T,pa.size() -1,m);
    }

    for(int i=1;i<=m;i++)
    {
        if(pa[i]!=a[i])
        {
             quitf(_wa, "For test %d,The %dth dish purchased based on  the output is %d, which should actually be %d",T,i,pa[i],a[i]);
        }
    }
    return;

}
int main(int argc, char *argv[])
{
    registerTestlibCmd(argc, argv);
    int T = inf.readInt(1,20,"T");
    while(T--)
    {
        int n = inf.readInt(1,1'00'000);
        int m = inf.readInt(0,n);
        vector <int> a;
        vector <long long> p;
        a.push_back(0);
        p.push_back(0);
        for(int i=1;i<=m;i++)
        {
            int a_i = inf.readInt(1,n,"a_i");
            a.push_back(a_i);
        }

        long long v = ouf.readLong(0,(long long)pow(10,19),"v");
        for(int i=1;i<=n;i++)
        {
            long long p_i = ouf.readLong(0,(long long)pow(10,19),"p_i");
            p.push_back(p_i);
        }
        solve(T,n,m,v,a,p);
    }
    quitf(_ok, "Correct");
    return 0;
}