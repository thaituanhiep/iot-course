#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Input number: ");
    scanf("%d", &number);

    // 32 in binary is 00010000 = pow(2, 5) = 1 << 5 (left shift)
    number = number | 32;
    printf("\nAfter set 5th bit = 1 from right: %d", number);

    return 0;
}
