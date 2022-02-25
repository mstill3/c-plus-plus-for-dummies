#include <iostream>

int readNumber()
{
    std::cout << "Please enter a number:\n";
    int input { 0 };
    std::cin >> input;
    return input;
}

void writeAnswer(int num1, int num2, int sum)
{
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << "\n";
}