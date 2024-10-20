#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j;
    char name[25][50], temp[50];


    printf("Nhap so luong chuoi: ");
    scanf("%d", &n);
    getchar();


    for (i = 0; i < n; i++) {
        printf("Nhap chuoi %d: ", i + 1);
        fgets(name[i], sizeof(name[i]), stdin);
        name[i][strcspn(name[i], "\n")] = 0;
    }


    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(name[j], name[j + 1]) > 0) {
                strcpy(temp, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], temp);
            }
        }
    }


    printf("\nCac chuoi sau khi sap xep:\n");
    for (i = 0; i < n; i++) {
        puts(name[i]);
    }

    return 0;
}
