#include <iostream>
using namespace std;


int main()
{
    int nums[3][3] = {
            {0, 1, 2},
            {3, 4, 5},
            {6, 7, 8}
    };
    cout << nums << endl;

    cout << nums[0][2] << endl;

    return 0;
}