#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Input integer a: ");
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf("a is even");
    } else {
        printf("a is odd");
    }
    return 0;
}
