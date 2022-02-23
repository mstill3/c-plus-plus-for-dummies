#include <iostream>
using namespace std;

int multiply(int num, int multiplier) {
    return num * multiplier;
}

int main()
{
    cout << "Enter a number:\n";
    int multiplier { 2 };
    int num { 0 };
    cin >> num;
    cout << "You entered: " << num << "\n";
    cout << multiplier << " times that value is: " << multiply(num, multiplier) << "\n";
}