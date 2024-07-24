#include <stdio.h>

int globalVar = 30; // Global variable

void myFunction()
{
    int globalVar = 10; // Local variable with the same name
    printf("Local variable in myFunction: %d\n", globalVar);
}

int main()
{
    printf("Global variable in main: %d\n", globalVar);
    myFunction();
    return 0;
}
