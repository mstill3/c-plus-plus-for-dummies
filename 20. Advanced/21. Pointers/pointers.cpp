#include <iostream>

using namespace std;

int main()
{
    int num = 3;
    int *numPointer = &num;
    int numPointerValue = *numPointer; // is equal to value of num

    cout << "Variable num with value " << num << " at address " << numPointer << endl;
    cout << numPointerValue << endl;

    return 0;
}