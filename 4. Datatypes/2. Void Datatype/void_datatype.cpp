#include <iostream>
using namespace std;

void writeValue(int x) // void here means no return value
{
    std::cout << "The value of x is: " << x << '\n';
}

int main()
{
    writeValue(3);
    return 0;
}