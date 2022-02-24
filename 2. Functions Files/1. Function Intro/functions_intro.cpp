#include <iostream>
using namespace std;

// Definition of user-defined function doPrint()
void doPrint() // doPrint() is the called function in this example
{
    cout << "In doPrint()\n";
}

// Definition of function main()
int main()
{
    cout << "Starting main()\n";
    doPrint(); // Interrupt main() by making a function call to doPrint().  main() is the caller.
    cout << "Ending main()\n"; // this statement is executed after doPrint() ends

    return 0;
}