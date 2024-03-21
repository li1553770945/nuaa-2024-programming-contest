#include "testlib.h"
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    registerTestlibCmd(argc, argv);
    quitf(_ok, "Correct"); // 不需要checker，全都在interactor
    return 0;
}