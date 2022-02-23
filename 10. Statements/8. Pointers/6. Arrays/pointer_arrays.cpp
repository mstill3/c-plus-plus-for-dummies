#include <iostream>
using namespace std;

int main()
{
    int nums[] = { 4, 9, 0, 3};

    cout << nums[0] << endl;
    cout << *(nums + 0) << endl;

    cout << nums[1] << endl;
    cout << *(nums + 1) << endl;

    return 0;
}