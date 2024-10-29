#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    int i;
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", ptr + i);
    }

    // Gan max = phan tu dau tien cua mang
    int max = *ptr;

    for (i = 1; i < n; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    printf("So lon nhat trong mang la: %d\n", max);
    return 0;
}
