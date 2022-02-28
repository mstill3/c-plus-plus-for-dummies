#include <iostream>

using namespace std;

void quiz()
{
    /*
     * A prime number is a whole number greater than 1 that can only be divided evenly by 1 and itself.
     * Write a program that asks the user to enter a number 0 through 9 (inclusive).
     * If the user enters a number within this range that is prime (2, 3, 5, or 7),
     * print “The digit is prime”. Otherwise, print “The digit is not prime”.
     */
    int num = 0;
    cout << "Enter a number (0-9): ";
    cin >> num;

    if (num < 0 || num > 9)
        cout << "Error: Please enter a number in the range";
    else if (num == 2 || num == 3 || num == 5 || num == 7)
        cout << "The digit is prime";
    else
        cout << "The digit is not prime";
}

int main()
{
    std::cout << "Enter an integer: ";
    int x {};
    std::cin >> x;

    if (x > 0)
        std::cout << "The value is positive\n";
    else if (x < 0)
        std::cout << "The value is negative\n";
    else
        std::cout << "The value is zero\n";

    quiz();
}