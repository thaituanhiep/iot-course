#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = length - 1; i >= 0; i--) {
        printf("%d\t", arr[i]);
    }
    return 0;
}
