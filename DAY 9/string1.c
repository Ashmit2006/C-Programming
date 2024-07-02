#include <stdio.h>

int main()
{
    char greeting[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("Greeting message is %s\n", greeting);

    char greetings[] = "Hello";
    printf("Greeting message is %s\n", greetings);
    return 0;
}
