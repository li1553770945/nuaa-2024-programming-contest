#include "testlib.h"

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int n = inf.readInt(9000,1'0'000,"n");
    inf.readEoln();
    inf.readEof();
}