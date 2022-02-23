#include "io.h"
#include "math.h"

int main()
{
    int num1 = readNumber();
    int num2 = readNumber();
    int sum = add(num1, num2);
    writeAnswer(num1, num2, sum);
    hello();
}