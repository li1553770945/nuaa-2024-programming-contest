#include "testlib.h"
#include <iostream>
#include <map>
using namespace std;
int a[1'00'005];
int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    for(int test_index = 1; test_index <= 20; test_index++)
    {
        startTest(test_index);
        int T = rnd.next(15,20);
        cout << T << endl;

        for(int k=0;k<T;k++)
        {
            int n = rnd.next(5'0'000,1'00'000);
            int m = rnd.next(1,60);
            cout<<n<<" "<<m<<endl;
            for(int i=1;i<=n;i++)
            {
                a[i] = i;
            }
            shuffle(a+1,a+1+n);
            for(int i=1;i<=m;i++)
            {
                cout<<a[i];
                if(i!=m)
                {
                   cout <<" ";
                }
                else
                {
                    cout<<endl;
                }
            }
        }
    }
}