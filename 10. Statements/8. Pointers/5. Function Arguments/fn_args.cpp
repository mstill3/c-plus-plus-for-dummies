#include <iostream>
using namespace std;


// Call by value
int incrementVal(int num)
{
    return num + 1;
}

// Pointers as function arguments - Call by ref
void incrementRef(int* numPointer)
{
    *numPointer += 1;
}

int main()
{
    int count = 0;
    cout << count << endl;

    count = incrementVal(count);
    cout << count << endl;

    incrementRef(&count);
    cout << count << endl;

    return 0;
}