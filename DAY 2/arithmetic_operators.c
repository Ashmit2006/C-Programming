#include <stdio.h>

int main() {
    int x = 10, y = 5;
    printf("Addition: %d + %d = %d\n", x, y, x + y);
    printf("Subtraction: %d - %d = %d\n", x, y, x - y);
    printf("Multiplication: %d * %d = %d\n", x, y, x * y);
    printf("Division: %d / %d = %d\n", x, y, x / y);
    printf("Modulus: %d %% %d = %d\n", x, y, x % y);
    x++;
    printf("Increment: x++ = %d\n", x);
    x--;
    printf("Decrement: x-- = %d\n", x);
    return 0;
}
