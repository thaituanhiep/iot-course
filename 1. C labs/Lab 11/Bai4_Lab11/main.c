#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 5, num2 = 13;

    int *pnum1 = &num1;
    int *pnum2 = &num2;

    printf("Nhap so thu nhat: ");
    scanf("%d", pnum1);
    printf("Nhap so thu hai: ");
    scanf("%d", pnum2);

    printf("Tong cua hai so %d va %d la %d\n", *pnum1, *pnum2, (*pnum1 + *pnum2));
    return 0;
}
