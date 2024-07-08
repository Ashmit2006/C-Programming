#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = " How are you?";
    char str2[50] = "Hello, world!";
    strcat(str2, str1);
    printf("Concatenated string: %s\n", str2);
    return 0;
}
