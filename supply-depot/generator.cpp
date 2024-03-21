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
            if(test_index <=5)
            {
                n = rnd.next(4000, 5000);
            }
            else
            {
                n = rnd.next(40000, 50000);
            }
            cout<<n<<endl;
            for(int i=1;i<=n;i++)
            {
                cout<<rnd.next(1,1'000'000'000);
                if(i!=n)
                {
                    cout<<" ";
                }
            }
            cout<<endl;


            int m;
            if(test_index <=5)
            {
                m = rnd.next(4000, 5000);
            }
            else
            {
                m = rnd.next(40000, 50000);
            }
            cout<<m<<endl;
            for(int t=1;t<=m;t++)
            {
                int l = rnd.next(1,n);
                int r = rnd.next(l,n);
                cout<<l<<" "<<r<<endl;
            }
        }
    }
}