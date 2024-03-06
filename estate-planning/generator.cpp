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
        int T = rnd.next(90, 100);
        cout << T << endl;

        for(int k=0;k<T;k++)
        {
            int n = rnd.next(90,100);
            int m = rnd.next(90,100);
            int x = rnd.next(1,10'000'000);
            int v = rnd.next(1,10'000'000);
            cout<<n<<" "<<m<<" "<<x<<" "<<v<<endl;
            while(n--)
            {
                cout<<rnd.next(10,1'000'000'000)<<" ";
                cout<<rnd.next(-x,x)<<endl;
            }
            while(m--)
            {
                cout<<rnd.next(10,1'000'000'000)<<" ";
                cout<<rnd.next(1,1'000'000'000)<<endl;
            }
        }
    }
}