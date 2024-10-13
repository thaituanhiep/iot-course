#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Input integer a: ");
    scanf("%d", &a);
    printf("Input integer b: ");
    scanf("%d", &b);

    float result = (float) a / b;
    printf("Result of a / b: %.2f", result);

    return 0;
}
