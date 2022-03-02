#include <iostream>
using namespace std;


int main()
{
    int num = 1025;
    int *pointer = &num;
    int **pointer_to_pointer = &pointer;
    int ***pointer_to_pointer_to_pointer = &pointer_to_pointer;

    cout << num << endl;
    cout << *pointer << endl;
    cout << **pointer_to_pointer << endl;
    cout << ***pointer_to_pointer_to_pointer << endl;

    ***pointer_to_pointer_to_pointer = 9;
    cout << num << endl;

    return 0;
}