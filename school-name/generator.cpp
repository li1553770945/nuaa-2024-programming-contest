#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    for(int test_index = 1; test_index <= 20; test_index++)
    {
        startTest(test_index);
        int T = rnd.next(80, 100);
        cout << T << endl;

        for(int k=0;k<T;k++)
        {
            int y = rnd.next(1, 2023);
            cout <<y<< endl;
        }
    }
}