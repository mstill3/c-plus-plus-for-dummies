#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "3^2: " << pow(3, 2) << "\n";
    cout << "ceil of 3.9: " << ceil(3.9) << "\n";
    cout << "floor of 3.9: " << floor(3.9) << "\n";
    cout << "smaller of 3.9 and 10.4: " << fmin(3.9, 10.4) << "\n";
    cout << "larger of 3.9 and 10.4: " << fmax(3.9, 10.4) << "\n";
    cout << "absolute value of -3: " << abs(-3) << "\n";

    int num = 3;
    num++;
    num-=8;
}