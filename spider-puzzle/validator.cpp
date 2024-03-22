#include "testlib.h"

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int t = inf.readInt(1,20,"t");
    inf.readSpace();
    int n = inf.readInt(10,1'0'000,"n");
    inf.readEoln();
    inf.readEof();
}