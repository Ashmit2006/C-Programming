#include <stdio.h>

int main() {
    int x = 5;
    printf("Initial value: x = %d\n", x);
    x += 3;  //x=x+3
    printf("x += 3: %d\n", x);
    x -= 3;  //x=x-3
    printf("x -= 3: %d\n", x);
    x *= 3;  //x=x*3
    printf("x *= 3: %d\n", x);
    x /= 3;  //x=x/3
    printf("x /= 3: %d\n", x);
    x %= 3;  //x=x%3
    printf("x %%= 3: %d\n", x);
    return 0;
}
