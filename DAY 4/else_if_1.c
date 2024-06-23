#include <stdio.h>

int main()
{
    int number = 10;
    if (number > 15)
    {
        printf("The number is greater than 15.\n");
    }
    else if (number > 5)
    {
        printf("The number is greater than 5 but less than 15.\n");
    }
    else
    {
        printf("The number is 5 or less.\n");
    }
    return 0;
}
