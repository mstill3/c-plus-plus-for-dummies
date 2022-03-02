#include <iostream>
using namespace std;


void printString(const char* string)
{
    int index = 0;
    while(string[index] != '\0')
    {
        cout << string[index];
        index++;
    }
    cout << endl;
}


int main()
{
    /*
     * Arrays and pointers are different types that are used similarly
     */
    char name[] = "Matt";
    char* namePointer = name;
    cout << namePointer[1] << endl;

    namePointer[0] = 'P';
    // same
    *(namePointer + 0) = 'Z';

    cout << name << endl;


    char word[] = "Hello";
    printString(word);

    return 0;
}