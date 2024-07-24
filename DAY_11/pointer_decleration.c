#include <stdio.h>

int main()
{
    int var = 10;
    int *ptr; // Pointer declaration

    ptr = &var; // Pointer initialization with the address of var

    printf("Value of var: %d\n", var);
    printf("Address of var: %p\n", &var);
    printf("Value of ptr: %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    return 0;
}
