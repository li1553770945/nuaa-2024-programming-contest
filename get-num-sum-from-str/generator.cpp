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
        int T = rnd.next(18, 20);
        cout << T << endl;

        for(int k=0;k<T;k++)
        {
            
            string s = "";
            bool last_is_num = false;
            while(s.length()<=9990)
            {
                int is_str = rnd.next(0,1);
                if (is_str||last_is_num)
                {
                    s += rnd.next("[a-zA-Z]{1,3}");
                    last_is_num = false;
                    
                }
                else
                {  
                    int num = rnd.next(99000000,100000000);
                    s += to_string(num);
                    last_is_num = true;
                }
            }
            cout<<s<<endl;
        }
    }
}