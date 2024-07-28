#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("Values within swap:x=%d & y=%d\n", *x, *y);
}
int main()
{
    int a = 2, b = 3;
    printf("Before swap function call:a=%d & b=%d\n", a, b);
    swap(&a, &b);
    printf("After swap function call:a=%d & b=%d\n", a, b);
    return 0;
}