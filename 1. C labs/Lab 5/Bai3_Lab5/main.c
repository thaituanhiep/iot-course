#include <stdio.h>
#include <stdlib.h>

int main()
{
    int days;
    printf("Input day number: ");
    scanf("%d", &days);

    int sonam = days / 365;
    int sotuan = (days - sonam * 365) / 7;
    int songay = days - sonam * 365 - sotuan * 7;

    printf("sonam: %d\n", sonam);
    printf("sotuan: %d\n", sotuan);
    printf("songay: %d\n", songay);

    return 0;
}
