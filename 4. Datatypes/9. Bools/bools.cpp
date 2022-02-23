#include <iostream>
#include "bools.h"

using namespace std;

// returns true if x and y are equal, false otherwise
bool isEqual(int x, int y)
{
    return (x == y); // operator== returns true if x equals y, and false otherwise
}

int main()
{
    bool b1 = false;
    bool b2 = true;
    bool b3; // default initialize to false
    bool b4 = !true; // false
    bool b5 = 0; // false
    bool b6 = 1; // true
    bool b7 = 3; // true (not 0 is true)
    bool b8 = -2; // true

    cout << b1 << "\n" << b2 << "\n" << b3 << "\n" << b4 << "\n" << b5 << "\n" << b6 << "\n" << b7 << "\n" << b8 << endl;

    cout << "hello" << endl;

    cout << true << endl;
    cout << boolalpha;
    cout << true << endl;



    bool b;
    std::cout << "Enter a boolean value: ";

    // Allow the user to enter 'true' or 'false' for boolean values
    std::cin >> std::boolalpha;
    std::cin >> b;

    std::cout << "You entered: " << b << '\n';


    cout << "Does 8 equal 9? " << isEqual(8, 9) << endl;
}