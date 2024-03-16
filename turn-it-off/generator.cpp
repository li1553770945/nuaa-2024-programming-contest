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
            int n = rnd.next(1'00'000, 2'00'000);
            int k = rnd.next(1'0'000,n/5);
            cout << n << " " << k << endl;
            for(int j=1;j<=n;j++)
            {
                int x = rnd.next(0,1);
                cout<<x;
            }
            cout<<endl;
        }
    }
}