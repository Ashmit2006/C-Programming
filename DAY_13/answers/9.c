#include <stdio.h>

int main()
{
    int num = 100;
    int *ptr;
    ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);

    printf("Value pointed pointer ptr: %d\n", *ptr);
    printf("Address stored in pointer ptr: %p\n", ptr);

    return 0;
}
