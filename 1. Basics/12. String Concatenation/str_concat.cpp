#include <iostream>
using namespace std;

int main()
{
    string name = "Matt";
    int age = 20;
    string me = name + " " + to_string(age);
    cout << me;
    return 0;
}