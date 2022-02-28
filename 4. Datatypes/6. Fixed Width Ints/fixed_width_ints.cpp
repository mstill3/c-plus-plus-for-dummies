#include <iostream>
#include <cstdint>
#include <iomanip>
using namespace std;

int main()
{
    int16_t num = 8;
    cout << num << "\n";

    double dec = 4.5343433;
    cout << dec << "\n";
    cout << setprecision(3);
    cout << dec << "\n";


    double zero {0.0};
    double posinf { 5.0 / zero }; // positive infinity
    cout << posinf << '\n';

    double neginf { -5.0 / zero }; // negative infinity
    cout << neginf << '\n';

    double nan { zero / zero }; // not a number (mathematically invalid)
    cout << nan << '\n';


    return 0;
}