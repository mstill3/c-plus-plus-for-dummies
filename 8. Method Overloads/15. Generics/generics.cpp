#include <iostream>
// One function works for all data types.
// This would work even for user defined types
// if operator '>' is overloaded
template <typename T>

T myMax(T x, T y)
{
    return (x > y) ? x : y;
}

int main()
{
    std::cout << myMax<int>(4, 7) << "\n";
    std::cout << myMax<double>(4.2, 7.4) << "\n";
    std::cout << myMax<>(4, 7) << "\n";
    std::cout << myMax<>(4.2, 7.4) << "\n";
    std::cout << myMax(4, 7) << "\n";
    std::cout << myMax(4.2, 7.4) << "\n";
}