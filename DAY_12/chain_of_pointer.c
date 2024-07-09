
#include <stdio.h>
#include <conio.h>
void main()
{
    int i = 100;
    int *pi;
    int **pii;
    pi = &i;
    pii = &pi;
    printf("Address of i = %p \n", &i);
    printf("Address of i = %p \n", pi);
    printf("Address of i = %p \n", *pii);
    printf("Address of pi = %p \n", &pi);
    printf("Address of pi = %p \n", pii);
    printf("Address of pii = %p \n", &pii);
    printf("Value of i = %d \n", i);
    printf("Value of i = %d \n", *(&i));
    printf("Value of i = %d \n", *pi);
    printf("Value of i = %d", **pii);
    getch();
}