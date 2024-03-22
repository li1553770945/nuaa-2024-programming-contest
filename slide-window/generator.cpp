#include "testlib.h"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    registerGen(argc, argv, 1);
    for (int test_index = 1; test_index <= 20; test_index++)
    {
        startTest(test_index);
        int n, k;
        if (test_index <= 10)
        {
            n = rnd.next(1, 10000);
            k = rnd.next(1, n / 2);
        }
        else
        {
            n = rnd.next(4'00'000, 5'00'000);
            k = rnd.next(n/1000, n / 2);
        }
        cout << n << " " << k << endl;
        for (int i = 1; i <= n; i++)
        {
            cout << rnd.next(-1'00'000'000, 1'00'000'000);
            if (i == n)
            {
                cout << endl;
            }
            else
            {
                cout << " ";
            }
        }
    }
}