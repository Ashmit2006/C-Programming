#include <stdio.h>
#include <conio.h>

#define PI 3.1428
int add(int, int);   //function decleration
float areaOfCircle(float);   //function decleration

void main()
{
    int a, b, mySum;
    float myArea;

    // Get user input for two numbers
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    // Compute the sum
    mySum = add(a, b);
    printf("The sum is %d\n", mySum);

    // Compute the area of the circle with the sum as the radius
    myArea = areaOfCircle(mySum);
    printf("Area of circle is %f\n", myArea);

    getch(); // Wait for user input before closing
}

int add(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}

float areaOfCircle(float radius)
{
    return PI * radius * radius;
}
