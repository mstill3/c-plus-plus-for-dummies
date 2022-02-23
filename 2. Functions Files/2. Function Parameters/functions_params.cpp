#include <iostream>
using namespace std;

int getValueFromUser()
{
    cout << "Enter an integer: ";
    int input{};
    cin >> input;
    return input;
}

// This function takes no parameters
// It does not rely on the caller for anything
void doPrint()
{
    cout << "In doPrint()\n";
}

// This function takes one integer parameter named x
// The caller will supply the value of x
void printValue(int x)
{
    cout << x  << '\n';
}

// This function has two integer parameters, one named x, and one named y
// The caller will supply the value of both x and y
int add(int x, int y)
{
    return x + y;
}

int main()
{
    doPrint();
    int num = getValueFromUser();
    printValue(num);
    int sum = add(7, 9);
    printValue(sum);
    return 0;
}
