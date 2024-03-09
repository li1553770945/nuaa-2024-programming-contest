#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    for(int test_index = 1; test_index <= 20; test_index++)
    {
        startTest(test_index);
        int T = rnd.next(15,20);
        cout << T << endl;

        for(int k=0;k<T;k++)
        {
            int n = rnd.next(1,1'00'000);
            int m = rnd.next(0,n);
            if(k==0)
            {
                m = 0;
            }
            else if(k==1)
            {
                m=n;
            }
          
            cout<<n<<" "<<m<<endl;
            while(n--)
            {
                
                if(k==2&&n<=m+1)
                {
                    cout<<0;
                }
                else
                {
                    cout<<rnd.next(0,1'000'000'000);
                }
                if(n)
                {
                    cout<<" ";
                }
                else
                {
                    cout<<endl;
                }
            }
        }
    }
}