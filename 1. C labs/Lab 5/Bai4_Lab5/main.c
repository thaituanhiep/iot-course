#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minutes;
    printf("Input minutes number: ");
    scanf("%d", &minutes);

    int songay = minutes / 60 / 24;
    int sonam = songay / 365;

    printf("songay: %d\n", songay);
    printf("sonam: %d\n", sonam);


    return 0;
}
