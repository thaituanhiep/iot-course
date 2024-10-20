#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[80];
    int i, j;
    printf("Input string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; ++i) {
        while ( !((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] == '\0')) ) {
            for (j = i; str[j] != '\0'; ++j) {
                str[j] = str[j+i];
            }
            str[j] = '\0';
        }
    }
    printf("\n%s", str);
    return 0;
}
