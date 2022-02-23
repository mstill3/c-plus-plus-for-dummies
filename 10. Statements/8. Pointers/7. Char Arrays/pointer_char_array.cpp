#include <iostream>
#include <string.h>
using namespace std;


int main()
{
    /*
     * Size of array >= num chars in string + 1
     */
    char name[] = {'M', 'a', 't', 't'};
    cout << name << endl;
    cout << strlen(name) << endl;

    // you need to put null char at end of all strings
    char name2[] = {'M', 'a', 't', 't', '\0'};
    cout << name2 << endl;
    cout << strlen(name2) << endl;

    // quotes auto add null char at end of char array
    char name3[20] = "Matt";
    cout << name3 << endl;
    cout << strlen(name3) << endl;

    // array of array of chars
    char arg1[] = {'-', '-', 'n', 'a', 'm', 'e', '\0'};
    char arg2[] = {'m', 'a', 't', 't', '\0'};

    char* arg1Pointer = arg1;
    char* arg2Pointer = arg2;

    int argc = 2;
    char* argv[] = {arg1Pointer, arg2Pointer};

    return 0;
}