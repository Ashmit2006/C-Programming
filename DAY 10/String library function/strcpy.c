#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "This is a new string";
    char str2[50];
    strcpy(str2, str1);
    printf("Copied string: %s\n", str2);
    return 0;
}
