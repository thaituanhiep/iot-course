#include <stdio.h>
#include <stdlib.h>

void swap(int *pnum1, int *pnum2) {
    *pnum1 = *pnum1 + *pnum2;
    *pnum2 = *pnum1 - *pnum2;
    *pnum1 = *pnum1 - *pnum2;
}


int main()
{
    int x = 5, y = 10;
    swap(&x, &y);
    printf("x = %d\ny = %d", x, y);
    return 0;
}
