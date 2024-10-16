#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100];
    int n;

    do {
        printf("Enter the number of elements in the array (up to 100): ");
        scanf("%d", &n);
        if (n < 0 || n > 100) {
            printf("Invalid number of elements! Please enter again. \n");
        }
    } while (n < 0 || n > 100);

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }

    return 0;
}
