#include <stdio.h>

int main()
{
    int a = 10;
    float b = 5.5;
    float result;

    // Implicit type casting: 'a' is automatically converted to float
    result = a + b;

    printf("Result: %f\n", result); // Output: Result: 15.500000
    return 0;
}

