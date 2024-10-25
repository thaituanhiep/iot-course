#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 51;
    int *ptr = (int *) &a;
    *ptr = 28;
    printf("Gia tri cua a: %d", a);
    return 0;
}
