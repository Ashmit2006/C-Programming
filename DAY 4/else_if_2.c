#include <stdio.h>

int main()
{
    int day;

    printf("Enter a number (1-7) for the day of the week: ");
    scanf("%d", &day);
    if (day == 1)
    {
        printf("The day is Sunday.\n");
    }
    else if (day == 2)
    {
        printf("The day is Monday.\n");
    }
    else if (day == 3)
    {
        printf("The day is Tuesday.\n");
    }
    else if (day == 4)
    {
        printf("The day is Wednesday.\n");
    }
    else if (day == 5)
    {
        printf("The day is Thursday.\n");
    }
    else if (day == 6)
    {
        printf("The day is Friday.\n");
    }
    else if (day == 7)
    {
        printf("The day is Saturday.\n");
    }
    else
    {
        printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}
