#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
    printf("Input float a: ");
    scanf("%f", &a);
    printf("Input float b: ");
    scanf("%f", &b);

    if ((a != (int) a) || (b != (int) b)) {
        printf("Input numbers are not integer.");
    } else {
        if (a > b) {
            printf("a > b");
        } else if (a < b) {
            printf("a < b");
        } else {
            printf("a = b");
        }
    }
    return 0;
}
