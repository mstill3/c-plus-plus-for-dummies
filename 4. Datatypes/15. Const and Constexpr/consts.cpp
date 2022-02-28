#include <iostream>

using namespace std;

int main()
{
    /*
     * constant is a fixed value that may not be changed.
     * C++ has two kinds of constants: literal constants,
     * and symbolic constants.
     *
     * Literal constants (usually just called literals) are
     * unnamed values inserted directly into the code
     */
//    return 5; // 5 is an integer literal
    bool myNameIsAlex = true; // true is a boolean literal
    std::cout << 3.4; // 3.4 is a double literal
    string name = "goose";


    // Compile-time constants are constants whose initialization
    // values can be determined at compile-time (when your program
    // is compiling). The following are examples of compile-time
    // constants
    const double gravity = 9.8;  // the compiler knows at compile-time that gravity will have value 9.8
    const int something = 1 + 2; // the compiler can resolve this at compiler time


    // which ensures that a constant must be a compile-time constant
    constexpr double gravity2 = 9.8; // ok, the value of 9.8 can be resolved at compile-time
    constexpr int sum = 4 + 5; // ok, the value of 4 + 5 can be resolved at compile-time
    std::cout << "Enter your age: ";
    int age;
    std::cin >> age;
    constexpr int myAge = age; // compile error: age is a runtime constant, not a compile-time constant

    return 0;
}