#include <iostream>

using namespace std;


int main() {

    int nums[] = {3, 6, 9, 6, 4 };

    for (int num : nums)
        cout << num << " ";
    cout << endl;

    for (auto num : nums)
        cout << num << " ";
    cout << endl;

    return 0;
}