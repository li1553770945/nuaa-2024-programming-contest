#include "testlib.h"

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int T = inf.readInt(1,10,"T");
    inf.readEoln();
    for (int j = 0;j<T;j++)
    {
        int n = inf.readInt(1, 2'00'000, "n");
        inf.readSpace();
        int k = inf.readInt(1, n ,"k");
        inf.readEoln();
      
        std::string str = inf.readString();
        ensure(str.length()==n);
        int one_num = 0;
        for(int i=0;i<str.length();i++)
        {
            ensure(str[i]=='0' || str[i] =='1');
            if(str[i]=='1')
            {
                one_num ++;
            }
        }
        ensure(one_num != 0);
        
    }
    inf.readEof();
}