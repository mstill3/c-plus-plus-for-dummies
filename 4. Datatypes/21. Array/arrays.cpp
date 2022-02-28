#include <iostream>

using namespace std;


int main()
{
    double grades[] = { 90.00, 97.30, 95.55, 82.45, 69.30 };

    int numGrades = sizeof(grades) / sizeof(double);
    for (int index = 0; index < numGrades; index++)
        cout << grades[index] << "\n";
    cout << "\n";

    //    or
    for(const double &grade : grades)
        cout << grade << "\n";
    cout << "\n";


    grades[0] = 34.33;

    for(const double &grade : grades)
        cout << grade << "\n";
    cout << "\n";


    int dozenCookies[12];

    for(const int &dozenCookie : dozenCookies)
        cout << dozenCookie << '\n';
    cout << "\n";

}