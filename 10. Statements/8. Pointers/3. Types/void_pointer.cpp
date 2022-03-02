#include <iostream>
using namespace std;


int main()
{
    /*
     * Generic pointer,
     * void
     *
     * Only used for address
     * Cannot be de-referenced
     */
    int a = 1025;
    void *p;
    p = &a;

    cout << "size of integer is " << sizeof(int) << endl;
    cout << "Address = " << p << ", value = " << *p << endl;

    return 0;
}