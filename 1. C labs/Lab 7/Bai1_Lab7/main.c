#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a;
    printf("Input a: ");
    scanf("%u", &a);

    for (int i = 2; i <= a; i++) {
        if (i % 2 == 0) {
            printf("\n%d", i);
        }
    }
    return 0;
}
