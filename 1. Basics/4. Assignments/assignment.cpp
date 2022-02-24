#include <iostream>
using namespace std;

int main() 
{
    int a; // no initializer
    int b = 5; // initializer after equals sign
    int c( 6 ); // initializer in parentheses
    int d { 7 }; // initializer in braces

    // Best practice: Favor initialization using braces whenever possible.
    // Best practice: Initialize your variables upon creation.

    int x { 0 }; // value initialization
    std::cin >> x; // we're immediately replacing that value

    cout << a;
    cout << b;
    cout << c;
    cout << d;
    cout << x;
    return 0;
}
