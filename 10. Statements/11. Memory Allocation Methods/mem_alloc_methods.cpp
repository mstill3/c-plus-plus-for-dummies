#include <iostream>

using namespace std;

/*
 * Only true for 1 and 2:
 *      The size of the variable / array must be known at compile time.
 *      Memory allocation and deallocation happens automatically (when the variable is instantiated / destroyed).
 */

// 1. Static memory allocation
// static and global
constexpr double PI = 3.14;

int main() {

    cout << PI << endl;


    // 2. Automatic memory allocation
    // Fn params, local vars
    int num = 8;
    int nums[] = {7, 9, 3};
    cout << num << endl;


    // 3. Dynamic allocation
    int* num2Pointer = new int;
    *num2Pointer = 3;
    cout << *num2Pointer << endl;

    delete num2Pointer; // return the memory pointed to by ptr to the operating system
    num2Pointer = nullptr; // set ptr to be a null pointer


    int* num3Pointer = new int(27);
    cout << *num3Pointer << endl;

    // assume ptr has previously been allocated with operator new
    delete num3Pointer; // return the memory pointed to by ptr to the operating system
    num3Pointer = nullptr; // set ptr to be a null pointer. remove dangling pointer

    /*
     * Memory leaks

Dynamically allocated memory stays allocated until it is explicitly deallocated or until the program ends (and the operating system cleans it up, assuming your operating system does that). However, the pointers used to hold dynamically allocated memory addresses follow the normal scoping rules for local variables. This mismatch can create interesting problems.

Consider the following function:

void doSomething()
{
    int* ptr{ new int{} };
}
This function allocates an integer dynamically, but never frees it using delete. Because pointers variables are just normal variables, when the function ends, ptr will go out of scope. And because ptr is the only variable holding the address of the dynamically allocated integer, when ptr is destroyed there are no more references to the dynamically allocated memory. This means the program has now “lost” the address of the dynamically allocated memory. As a result, this dynamically allocated integer can not be deleted.

This is called a memory leak. Memory leaks happen when your program loses the address of some bit of dynamically allocated memory before giving it back to the operating system. When this happens, your program can’t delete the dynamically allocated memory, because it no longer knows where it is. The operating system also can’t use this memory, because that memory is considered to be still in use by your program.

Memory leaks eat up free memory while the program is running, making less memory available not only to this program, but to other programs as well. Programs with severe memory leak problems can eat all the available memory, causing the entire machine to run slowly or even crash. Only after your program terminates is the operating system able to clean up and “reclaim” all leaked memory.

Although memory leaks can result from a pointer going out of scope, there are other ways that memory leaks can result. For example, a memory leak can occur if a pointer holding the address of the dynamically allocated memory is assigned another value:
     */
    return 0;
}