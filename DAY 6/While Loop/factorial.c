#include <stdio.h>

int main()
{
    int number, factorial = 1, i = 1;

    // Input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the number is negative
    if (number < 0)
    {
        printf("Factorial of a negative number doesn't exist.\n");
    }
    else
    {
        // Calculate factorial using while loop
        while (i <= number)
        {
            factorial *= i; // factorial = factorial * i
            i++;            // Increment
        }

        // Output the result
        printf("Factorial of %d = %d\n", number, factorial);
    }

    return 0;
}
