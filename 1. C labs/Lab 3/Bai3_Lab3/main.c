#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[32];
    printf("What is your name: ");
    scanf("%s", name);
    printf("Hello %s. How are you?\n", name);
    return 0;
}
