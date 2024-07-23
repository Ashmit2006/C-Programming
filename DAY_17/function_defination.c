#include <stdio.h>

// Inline function declarations and definitions
inline int add(int a, int b)
{
    return a + b;
}

inline float areaOfCircle(float radius)
{
    return 3.1428 * radius * radius;
}

// Main function
int main()
{
    int a, b, mySum;
    float myArea;

    // Prompt user to enter two numbers
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    // Compute the sum of the two numbers
    mySum = add(a, b);
    printf("The sum is %d\n", mySum);

    // Compute the area of the circle with the sum as the radius
    myArea = areaOfCircle(mySum);
    printf("Area of circle is %f\n", myArea);

    return 0; // Return success
}
