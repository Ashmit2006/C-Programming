
#include <stdio.h>

int main()
{
    int *p;
    int age = 17;
    p = &age;
    printf("\nValue of age is %d", age);
    printf("\n Increment on age is %d", ++age);
    printf("\n Address of age is %p", p);
    printf("\n Increment in pointer is %p", ++p);
}