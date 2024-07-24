#include <stdio.h>

int main()
{
    int var = 10;
    int *ptr1;
    int **ptr2; // Pointer to a pointer or double pointer

    ptr1 = &var;
    ptr2 = &ptr1;

    printf("Value of var: %d\n", var);
    printf("Value pointed to by ptr: %d\n", *ptr1);
    printf("Value pointed to by pptr: %d\n", **ptr2);

    return 0;
}
