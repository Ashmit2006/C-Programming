#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello, world!";
    char str2[] = "Hello, World!";
    int compare_result = strcmp(str1, str2);

    if (compare_result == 0)
    {
        printf("'%s' and '%s' are equal\n", str1, str2);
    }
    else
    {
        printf("'%s' and '%s' are not equal\n", str1, str2);
    }
    return 0;
}
