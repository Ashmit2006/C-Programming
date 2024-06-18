#include <stdio.h>

int main() {
    int a;
    float b;
    char c;

    // Reading an integer
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("You entered: %d\n\n", a);

    // Reading a floating-point number
    printf("Enter a floating-point number: ");
    scanf("%f", &b);
    printf("You entered: %.2f\n\n", b);

    // Reading a character
    printf("Enter a character: ");
    scanf(" %c", &c);  
    printf("You entered: %c\n", c);

    return 0;
}
