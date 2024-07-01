#include <stdio.h>

int main()
{
    int a = 10;
    int b = 3;
    float result;

    // Explicit type casting: 'a' and 'b' are explicitly converted to float
    result = (float)a / (float)b;

    printf("Result: %f\n", result); // Output: Result: 3.333333
    return 0;
}
