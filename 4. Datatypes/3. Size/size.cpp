#include <iostream>
#include "math.h"
using namespace std;

void printSize(string datatype, int bytesSize)
{
    int bitsInByte = 8;
    int bitsSize = bytesSize * bitsInByte;
    long double maxValue = pow(2, bitsSize);
    string datatypeTabs = "\t";
    if ((datatype.length() < 4) || (datatype.length() >= 4 && datatype.length() < 8))
    {
        datatypeTabs = "\t\t";
    }
    string bytesSizeTabs = "\t\t";
    if (bytesSize > 9) {
        bytesSizeTabs = "\t";
    }
    string bitsSizeTabs = "\t\t";
    if (bitsSize > 99) {
        bitsSizeTabs = "\t";
    }
    std::cout << datatype << datatypeTabs << bytesSize << " bytes" << bytesSizeTabs << bitsSize << " bits" << bytesSizeTabs << maxValue << " values\n";
}

int main()
{
    std::cout << "\nMinimum datatype bytes sizes:\n\n";
    printSize("bool", sizeof(bool));
    printSize("char", sizeof(char));
    printSize("wchar_t", sizeof(wchar_t));
    printSize("char16_t", sizeof(char16_t));
    printSize("char32_t", sizeof(char32_t));
    printSize("short", sizeof(short));
    printSize("int", sizeof(int));
    printSize("long", sizeof(long));
    printSize("long long", sizeof(long long));
    printSize("float", sizeof(float));
    printSize("double", sizeof(double));
    printSize("long double", sizeof(long double));
    return 0;
}