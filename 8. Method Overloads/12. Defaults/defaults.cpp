#include <iostream>

using namespace std;


void increment(int &num, int amount = 1) {
    num += amount;
}

int main() {
    int count = 0;
    cout << count << endl;

    increment(count);
    cout << count << endl;

    increment(count, 3);
    cout << count << endl;

    return 0;
}