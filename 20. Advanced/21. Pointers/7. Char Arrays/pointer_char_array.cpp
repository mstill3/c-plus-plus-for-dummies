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

    return 0;
}