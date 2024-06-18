#include <stdio.h>

int main()
{
    int x = 5;
    int y;

    printf("Original value of x: %d\n", x);

    // Pre-increment example
    y = ++x; // Increment x first, then assign the new value to y

    printf("After pre-increment (y = ++x):\n");
    printf("   Value of x: %d\n", x);
    printf("  Value of y: %d\n", y);

    x = 5; // Reset x to 5 for post-increment example

    // Post-increment example
    y = x++; // Use the current value of x, then increment x

    printf("After post-increment (y = x++):\n");
    printf("   Value of x: %d\n", x);
    printf("  Value of y: %d\n", y);

    return 0;
}
