#include <stdio.h>
// Function prototype or function decleration
int add(int a, int b);

int main()
{
    int num1 = 5, num2 = 3;
    int add_result = add(num1, num2); // Function call
    printf("The sum is: %d\n", add_result);
    int sub_result = sub(num1, num2); //Function call
    printf("The difference is: %d\n", sub_result);
    multiply(num1, num2); // Function call
    return 0;
}

// Function definition
int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    int res = a - b;
    return res;
}

void multiply(int a, int b)

{
    int res = a * b;
    printf("The product is %d", res);
}