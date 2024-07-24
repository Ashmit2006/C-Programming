#include <stdio.h>

void myFunction()
{
    int localVar = 10; // Local variable
    printf("Local variable in myFunction: %d\n", localVar);
}

int main()
{
    myFunction();
    // printf("Trying to access localVar: %d\n", localVar); // This will cause an error
    return 0;
}
