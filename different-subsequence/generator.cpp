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
        string t = rnd.next("[a-z]{100,200}");
        int max_repeat = 5000 / t.length();
        string s = "";
        for(int i=0;i<t.length();i++)
        {
            int repeat = rnd.next(max_repeat-5,max_repeat);
            for(int j=1;j<=repeat;j++)
            {
                    s+= t[i];
            }
            
        }

        cout << s << endl;
        cout << t << endl;
    }
   
}