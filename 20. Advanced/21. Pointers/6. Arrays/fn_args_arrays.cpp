#include <iostream>
using namespace std;

/* arrays are fn parameters are not copied by value for this method,
 * but instead is a pointer to the first element of the array
 *
 * compiler implicitly converts int nums[] into int* nums
 * arrays are always passed by reference to save memory
 */
void incrementOne(int nums[], int length)
{
    for (int index = 0; index < length; index++)
    {
        nums[index] += 1;
    }
}

void printArray(int nums[], int length)
{
    cout << "[";
    for (int index = 0; index < length; index++)
    {
        cout << nums[index];
        if (index != length-1)
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

// 6. Arrays are always passed by ref
int main()
{
    int nums[] = { 4, 9, 0, 3};
    // length of array must be passed in, as that data is unretrievable in fn scope
    int arraySize = sizeof(nums) / sizeof(nums[0]);

    printArray(nums, arraySize);
    //    equivalent to
    printArray(&nums[0], arraySize);


    incrementOne(nums, arraySize);
    printArray(nums, arraySize);

    return 0;
}