#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 5, num2 = 10;
    int *pnum1 = &num1;
    int *pnum2 = &num2;

    if (*pnum1 > *pnum2) {
        printf("So %d lon hon so %d\n", *pnum1, *pnum2);
    } else if (*pnum1 < *pnum2) {
        printf("So %d nho hon so %d\n", *pnum1, *pnum2);
    } else {
        printf("Hai so bang nhau");
    }
    return 0;
}
