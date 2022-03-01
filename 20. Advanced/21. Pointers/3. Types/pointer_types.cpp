#include <iostream>
using namespace std;


int main()
{
    /*
     * int pointer for ints
     * char pointer for char
     * User pointer for User
     *
     * need to have strict typed pointer for the de-referencing to work
     * (know how many bytes to pull from)
     */
    int a = 1025;
    int *p;
    p = &a;

    cout << "size of integer is " << sizeof(int) << endl;
    cout << "Address = " << p << ", value = " << *p << endl;


    char *p0;
    p0 = (char*) p; // typecast

    cout << hex;
    cout << "size of char is " << sizeof(char) << endl;
    printf("Address = %d, value = %d\n", p0, *p0);  // clear data loss
    // 1025 = 00000000 00000000 00000100 00000001
    printf("Address = %d, value = %d\n", p0+1, *(p0+1));  // 3rd group of bytes = 4

    return 0;
}