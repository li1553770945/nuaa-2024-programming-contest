#include "testlib.h"
#include <iostream>

using namespace std;
int a[100010];
int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    for(int test_index = 1; test_index <= 20; test_index++)
    {
        startTest(test_index);
        int T = rnd.next(8, 10);
        cout << T << endl;

        for(int i=0;i<T;i++)
        {
            int n = rnd.next(9000, 1'0'000);
            cout<<n<<endl;
            for(int i=1;i<=n;i++)
            {
                a[i] = i;
            }
            shuffle(a+1,a+1+n);
            for(int i=1;i<=n;i++)
            {
                cout<<a[i];
                if(i!=n)
                {
                    cout<<" ";
                }
            }
            cout<<endl;


            int m = rnd.next(9000, 1'0'000);
            cout << m << endl;

            for(int i=1;i<=m;i++)
            {
                
                cout<<rnd.next(1,n);
                if(i!=m)
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
}