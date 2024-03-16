#include "testlib.h"
#include <iostream>

using namespace std;

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
            int n = rnd.next(4'0'000, 5'0'000);
            cout<<n<<endl;
            for(int i=1;i<=n;i++)
            {
                cout<<rnd.next(1,1'000'000'000);
                if(i!=n)
                {
                    cout<<" ";
                }
            }
            cout<<endl;


            int m = rnd.next(4'0'000, 5'0'000);
            cout << m << endl;

            for(int i=1;i<=m;i++)
            {
                int l = rnd.next(1,n);
                int r = rnd.next(l,n);
                cout<<l<<" "<<r<<endl;
            }
        }
    }
}