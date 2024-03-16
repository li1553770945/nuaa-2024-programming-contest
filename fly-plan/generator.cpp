#include "testlib.h"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    for(int test_index = 1; test_index <= 20; test_index++)
    {
        startTest(test_index);
        int n = rnd.next(10000,20000);
        int m = rnd.next(n+1,50000);
        int k = rnd.next(0,10);
        cout<<n<<" "<<m<<" "<<k<<endl;
        int s = rnd.next(1,n/2);
        int t = rnd.next(n/2+1,n);
        cout<<s<<" "<<t<<endl;
        for(int i=1;i<=n-1;i++)
        {
            int c = rnd.next(1,1000);
            cout<<i<<" "<<i+1<<" "<<c<<endl;
        }
        for(int i=1;i<=m-n+1;i++)
        {
            int a = rnd.next(1,n);
            int b = rnd.next(1,n);
            int c = rnd.next(1,1000);
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
    }
}