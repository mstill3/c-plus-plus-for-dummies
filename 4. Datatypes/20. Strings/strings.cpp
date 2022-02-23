#include <string>
#include <iostream>

using namespace std;

int main()
{
    string name = "Matt";
    cout << name.length() << "\n";
    cout << name[0] << "\n";

    for(int i = 0; i <= name.length(); i++)
    {
        cout << name[i] << "\n";
    }
}