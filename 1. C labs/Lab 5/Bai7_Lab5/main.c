#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, d;
    printf("Input float a: ");
    scanf("%f", &a);
    printf("Input float b: ");
    scanf("%f", &b);
    printf("Input float c: ");
    scanf("%f", &c);
    printf("Input float d: ");
    scanf("%f", &d);

    float average = (a + b + c + d) / 4;
    printf("Average of a, b, c, d: %.2f", average);


    return 0;
}
