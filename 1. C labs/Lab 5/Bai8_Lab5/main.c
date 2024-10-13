#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a;
    printf("Input unsigned int a: ");
    scanf("%u", &a);

    int square = a * a;
    printf("The square of a: %d", square);

    return 0;
}
