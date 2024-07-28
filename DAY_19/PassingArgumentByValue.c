#include <stdio.h>

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("\nValues within swap: a = %d & b = %d", a, b);
}

int main()
{
    int x = 2, y = 3;
    printf("Before swap function call: x = %d & y = %d", x, y);
    swap(x, y);
    printf("\nAfter swap function call: x = %d & y = %d", x, y);
    return 0;
}
