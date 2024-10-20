#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[80], search[20];
    int c1 = 0, c2 = 0, i, j, flg = 1;
    printf("Input full string (length up to 80): ");
    scanf("%s", str);
    printf("Input search(length up to 20): ");
    scanf("%s", search);

    while (str[c1] != '\0')
        c1++;
        c1--;

    while (search[c2] != '\0')
        c2++;
        c2--;

    if (c1 >= c2) {
        for (i = 0; i <= c1 - c2; i++) {
            for (j = i; j < i + c2; j++) {
                flg = 1;
                if (str[j] != search[j - i]) {
                    flg = 0;
                    break;
                }
            }
            if (flg == 1)
                break;
        }

        if (flg == 1)
            printf("Chuoi con xuat hien trong chuoi.\n");
        else
            printf("Chuoi con khong xuat hien trong chuoi.\n");
    } else {
        printf("Khong xet truong hop chuoi con co kich thuoc lon hon chuoi da cho.\n");
    }
    return 0;
}
