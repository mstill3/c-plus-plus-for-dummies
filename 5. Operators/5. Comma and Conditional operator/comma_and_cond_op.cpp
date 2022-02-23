#include <iostream>

using namespace std;

int main()
{
    int num = 4;
    cout << (num > 5 ? "greater" : "not greater") << endl;
    cout << (num += 3, num) << endl;

    return 0;
}