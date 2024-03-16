    #include "testlib.h"
    #include <iostream>
    #include <string>
    #include <map>
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
                int v = rnd.next(1,10'000'000);
                cout<<n<<" "<<v<<endl;
                map <int,bool> have;
                while(n--)
                {
                    int i = rnd.next(10,1'000'000'000),ai=rnd.next(1,1'000'000'000);
                    while(have[i])
                    {
                        i = rnd.next(10,1'000'000'000);
                    }
                    have[i] = true;
                    cout<<i<<" "<<ai<<endl;
                }
            }
        }
    }