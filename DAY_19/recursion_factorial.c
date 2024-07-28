#include <stdio.h>
int factorial(int n)
{
    // Base case: 0! and 1! are both 1
    if (n == 0 || n == 1)
    {
        return 1;
    }
    // Recursive case: n! = n * (n-1)!
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int number;
    printf("Enter a number: ");
    int result = factorial(number);
    printf("Factorial of %d is %d\n", number, result);
    return 0;
}
