#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    map <int,bool> out;
    for(int test_index = 1; test_index <= 20; test_index++)
    {
        startTest(test_index);
        int n = rnd.next(9000, 1'0'000);
        while(out[n])
        {
            n = rnd.next(9000, 1'0'000);
        }
        out[n] = true;
        cout<<n<<endl;
    }
}