#include <stdio.h>

int globalVar = 20; // Global variable

void myFunction()
{
    printf("Global variable in myFunction: %d\n", globalVar);
}

int main()
{
    printf("Global variable in main: %d\n", globalVar);
    myFunction();
    return 0;
}
