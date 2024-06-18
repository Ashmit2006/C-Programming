#include <stdio.h>

int main()
{
    int x = 10, y = 5;
    printf(" %d\n", x < 5 && y < 10);
    printf(" %d\n", x < 15 || y < 3);
    printf(" %d\n", !(x < 15 && y < 10));
    return 0;
}
