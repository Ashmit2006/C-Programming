#include <stdio.h>
#include<string.h>

int main()
{
    // char str1[] = "Nishan ";
    // char str2[] = "Dhakal";
    char str1[20];
    char str2[20];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    strcat(str1 , str2);
    printf("Concatenated String: %s\n", str1);

    return 0;
}
