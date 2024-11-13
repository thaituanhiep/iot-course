#include <stdio.h>
#include <stdlib.h>

int add(int *pnum1, int *pnum2) {
    return (*pnum1 + *pnum2);
}

int main()
{
    int a = 5, b = 6, c = add(&a, &b);
    printf("c = %d", c);
    return 0;
}
