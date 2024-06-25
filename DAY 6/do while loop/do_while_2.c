#include <stdio.h>

int main()
{
    int i = 1; // Initialize the loop counter

    // do...while loop
    do
    {
        printf("%d\n", i); // Print the current value of i
        i++;               // Increment the loop counter
    } while (i <= 5); // Condition to continue the loop

    return 0;
}
