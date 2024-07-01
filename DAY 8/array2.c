#include <stdio.h>

int main()
{

    int myNumbers[] = {25, 50, 75, 100};

    printf("%d\n", sizeof(myNumbers));
    printf("%d\n", sizeof(myNumbers[0]));
    
    int size = sizeof(myNumbers) / sizeof(myNumbers[0]);
    printf("Size of the array: %d\n", size);

    return 0;
}
