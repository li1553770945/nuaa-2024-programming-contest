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

        for(int t=0;t<T;t++)
        {

            int n;
            n = rnd.next(9'0'000, 1'00'000);
            cout<<n<<endl;
            while(n--)
            {
                cout<<rnd.next(10'000,1'000'000)<<" ";
                cout<<rnd.next(10'000,1'00'000)<<endl;
            }
        }
    }
}