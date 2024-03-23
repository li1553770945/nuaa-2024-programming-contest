#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    for(int test_index = 1; test_index <= 10; test_index++)
    {
        startTest(test_index);
        int T = rnd.next(8, 10);
        cout << T << endl;

        for(int i=0;i<T;i++)
        {
            int n = rnd.next(1'99'000, 2'00'000);
            int k = rnd.next(10,20);
            cout << n << " " << k << endl;
            for(int j=1;j<=n;j++)
            {
                int x = rnd.next(0,2000);
                if(x>1)
                {
                    x = 0;
                }
                else
                {
                    x = 1;
                }
                cout<<x;
            }
            cout<<endl;
        }
    }
}