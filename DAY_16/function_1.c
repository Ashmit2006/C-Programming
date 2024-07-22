#include <stdio.h>
// Function prototype
int add(int, int);

int main()
{
    int result = add(5, 3); // Function call
    printf("The sum is: %d\n", result);
    return 0;
}

// Function definition
int add(int a, int b)
{
    return a + b;
}
