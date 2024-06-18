#include <stdio.h>

int main() {
    int length, width, area;
    printf("Enter length and width of the rectangle: ");
    scanf("%d %d", &length, &width);
    area = length * width;
    printf("Area of the rectangle: %d\n", area);
    return 0;
}
