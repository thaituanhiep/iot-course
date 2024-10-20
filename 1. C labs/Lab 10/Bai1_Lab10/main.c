#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int countString(char words[]) {
    int count = 0;
    while (true) {
        if (words[count] != '\0') {
            count++;
        } else {
            break;
        }
    }
    return count;
}

void concatenate(char result[], char str1[], char str2[]) {
    int i, j;

    for (i = 0; str1[i] != '\0'; i++) {
        result[i] = str1[i];
    }

    for (j = 0; str2[j] != '\0'; j++) {
        result[i + j] = str2[j];
    }

    result[i + j] = '\0';
}

bool compareStrings(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i]) {
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0') {
        return true;
    } else {
        return false;
    }
}


int main()
{
    char str1[] = "Hello";
    printf("Hello includes %d charracters.", countString(str1));
    char str2[] = "World";
    char helloWorldStr[20];
    concatenate(helloWorldStr, str1, str2);
    printf("\n%s", helloWorldStr);
    char str3[] = "Hello";
    if (compareStrings(str1, str3)) {
        printf("\n%s is equals %s", str1, str3);
    }
    return 0;
}
