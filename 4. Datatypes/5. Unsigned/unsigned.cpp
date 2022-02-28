#include <iostream>
#include "math.h"
using namespace std;

int main()
{
    //    by default int is signed (-, and +)
    int intBytes = sizeof(int);
    int intBits = 8 * intBytes;
    int intMin = -pow(2, intBits)/2 - 1;
    int intMax = pow(2, intBits)/2 - 1;
    std::cout << "For int:\n  Min: " << intMin << "\n  Max:  " << intMax << "\n\n";

    unsigned int unsignedIntMin = 0;
    unsigned int unsignedIntMax = pow(2, intBits) - 1;
    std::cout << "For unsigned int:\n  Min: " << unsignedIntMin << "\n  Max: " << unsignedIntMax << "\n";

    return 0;
}