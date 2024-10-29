#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tr1[6] = {5, 1, 7, 3, 4, 10};
    int tr2[3] = {4, 2, 9};

    int *ptr1 = tr1;
    int *ptr2 = tr2;

    int temp;
    for (int i = 0; i < 3; i++)
    {
        temp = *(ptr2 + i);
        *(ptr2 + i) = *(ptr1 + i);
        *(ptr1 + i) = temp;
    }

    printf("\ntr1:");
    for (int i = 0; i < 6; i++)
    {
        printf(" %d ", *(ptr1 + i));
    }

    printf("\ntr2:");
    for (int i = 0; i < 3; i++)
    {
        printf(" %d ", *(ptr2 + i));
    }

    return 0;
}
