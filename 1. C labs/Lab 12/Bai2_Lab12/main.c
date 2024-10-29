#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool compare(const char s1[], const char s2[]) {
    int i = 0;
    char *ptr1 = s1;
    char *ptr2 = s2;
    bool isEquals = false;

    // Neu moi ky tu trung nhau, tang i them 1
    while ( *(ptr1 + i) == *(ptr2 + i)
           && *(ptr1 + i) != '\0'
           && *(ptr2 + i) != '\0') {

        ++i;
    }

    // Neu + i ra ky tu cuoi cung thi 2 chuoi trung nhau
    if ( *(ptr1 + i) == '\0' && *(ptr2 + i) == '\0') {
        isEquals = true;
    } else {
        isEquals = false;
    }

    return isEquals;
}

int main()
{
    printf("\n%d\n", compare("hoang", "hoang"));
    return 0;
}
