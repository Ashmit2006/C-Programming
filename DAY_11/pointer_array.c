#include <stdio.h>

int main()
{
    int arr[3] = {10, 20, 30};
    int *ptr;

    ptr = arr; // Points to the first element of the array  and equivalent to ptr = &arr[0];

    for (int i = 0; i < 3; i++)
    {
        printf("Value at arr[%d]: %d\n", i, *(ptr + i));
    }

    return 0;
}
