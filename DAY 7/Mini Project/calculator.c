#include <stdio.h>

int main()
{
    int choice;
    float num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    do
    {
        printf("\n\t*****Calculator Menu*****\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);


        switch (choice)
        {
        case 1:
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case 4:
            if (num2 != 0)
            {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            }
            else
            {
                printf("Error! Division by zero.\n");
            }
            break;
        case 5:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }
    } while (choice != 5);

    return 0;
}
