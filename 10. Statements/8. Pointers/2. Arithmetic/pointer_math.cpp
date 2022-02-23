#include <iostream>
using namespace std;


int main()
{
    int a = 10;
    int *p;
    p = &a;

    cout << "Address p is: " << p << endl;
    cout << "  value at address p is " << *p << endl;
    cout << "  size of integer is " << sizeof(int) << " bytes" << endl << endl;
    cout << "Address p+1 is: " << p+1 << endl; // notice this is +4
    cout << "  value at address p+1 is " << *(p+1) << endl;

    return 0;
}