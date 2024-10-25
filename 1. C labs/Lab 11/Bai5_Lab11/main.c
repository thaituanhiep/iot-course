#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 31;
    int num2 = 45;

    int *pnum1 = &num1;
    int *pnum2 = &num2;

    int temp = *pnum1;
    *pnum1 = *pnum2;
    *pnum2 = temp;

    printf("Gia tri cua num1: %d\n", *pnum1);
    printf("Gia tri cua num2: %d\n", num2);
    return 0;
}
