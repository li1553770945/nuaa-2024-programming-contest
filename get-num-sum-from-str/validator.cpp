#include "testlib.h"
#include <string>

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int T = inf.readInt(1,20,"T");
    inf.readEoln();
    for (int k = 0;k<T;k++)
    {
        std::string s = inf.readString("[0-9a-zA-Z]","s");
    }
    inf.readEof();
}