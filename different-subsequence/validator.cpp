#include "testlib.h"
#include <string>

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    std::string s = inf.readString("[a-z]+","s");
    std::string t = inf.readString("[a-z]+","t");
    inf.readEof();
}