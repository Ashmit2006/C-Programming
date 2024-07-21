#include <stdio.h>
#include <string.h>

int main()
{
    // char str[] = "Texas International College";
    char str[20];
    printf("Enter a string:");
    gets(str);
    int length = strlen(str);

    printf("The length of the string \"%s\" is %d\n", str, length);

    return 0;
}
