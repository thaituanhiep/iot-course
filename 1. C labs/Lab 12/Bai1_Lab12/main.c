#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[] = "Hello World";
    char *ptr = str;

    int i = 0;
    while (*(ptr+i) != '\0') {
        i++;
    }
    i--;

    for (int j = i; j >= 0; j--) {
        printf("%c", *(ptr+j));
    }

    return 0;
}
