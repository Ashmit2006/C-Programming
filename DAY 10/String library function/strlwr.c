#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "HELLO, WORLD!";
    strlwr(str1);
    printf("Lowercase : %s\n", str1);
    return 0;
}
