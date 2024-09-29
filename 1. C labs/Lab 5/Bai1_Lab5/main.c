#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Input number: ");
    scanf("%d", &number);

    // 4 in binary is 00000100 = pow(2, 2) = 1 << 2 (left shift)
    if (number & 4 != 0) {
        printf("Third bit from right is 1");
    } else {
        printf("Third bit from right is 0");
    }

    return 0;
}
