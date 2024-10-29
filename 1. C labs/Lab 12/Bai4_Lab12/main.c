#include <stdio.h>
#include <stdlib.h>

void search(int *x, int *y) {
    int i, f = 0;
    for (i = 0; i < 5; i++) {
        if ( *(x + i) == *y) {
            f = 1;
            break;
        } else {
            continue;
        }
    }

    if (f == 1) {
        printf("Da tim thay.\n");
    } else {
        printf("Khong tim thay.\n");
    }
}

int main()
{
    int arr[5];
    int *pArr = arr;

    int i;
    for (i = 0; i < 5; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", pArr + i);
    }

    int bienCanTim;
    int *pBienCanTim = &bienCanTim;
    printf("Nhap vao bien can tim: ");
    scanf("%d", pBienCanTim);

    search(pArr, pBienCanTim);

    return 0;
}
