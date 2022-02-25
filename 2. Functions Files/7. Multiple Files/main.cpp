#include <iostream>
// Avoid using-directives (such as using namespace std;) at the top of your program or in header files.
// They violate the reason why namespaces were added in the first place.

int add(int x, int y);

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; // this works because we forward declared add() above
    return 0;
}