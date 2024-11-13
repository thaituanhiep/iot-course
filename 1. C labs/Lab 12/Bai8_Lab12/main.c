#include <stdio.h>
#include <stdlib.h>

void findFact(int n, int *f)
{
    *f = 1;
    for (int i = 1; i <= n; i++)
        *f = *f * i;
}

int main()
{
    int a = 5;
    int factorial;
    findFact(a, &factorial);
    printf("a! = %d", factorial);
    return 0;
}
