#include "testlib.h"
#include <iostream>

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
            int n = rnd.next(150, 200);
            int m = rnd.next(150, 200);
            cout << n << " " << m << endl;
            for(int i=0;i<n;i++)
            {
                int p = rnd.next(1, 12);
                cout << p << " ";
                int nums[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
                shuffle(nums, nums+12);
                for(int j=0;j<p;j++)
                {   
                    cout << nums[j];
                    if(j<p-1)
                    {
                        cout<<" ";   
                    }
                }
                cout << endl;
            }
            for(int i=0;i<m;i++)
            {
                cout << rnd.next(1, 12);
                if(i<m-1)
                {
                    cout<< " ";
                }
            }
            cout << endl;
        }
    }
}