#include <iostream>
#include "foo.h"
#include "goo.h"

/*
 * One way to resolve this would be to rename one of the functions, so the names no longer collide.
 * But this would also require changing the names of all the function calls, which can be a pain,
 * and is subject to error. A better way to avoid collisions is to put your functions into your own namespaces.
 * For this reason the standard library was moved into the std namespace.
 *
 * C++ allows us to define our own namespaces via the namespace keyword.
 * Namespaces that you create for your own declarations are called user-defined namespaces.
 * Namespaces provided by C++ (such as the global namespace) or by libraries (such as namespace std) are not
 * considered user-defined namespaces.
 *
 * Namespace identifiers are typically non-capitalized.
 */
int main() {

    int x = 4;
    int y = 2;

    std::cout << foo::doSomething(x, y) << std::endl;
    std::cout << goo::doSomething(x, y) << std::endl;

    return 0;
}