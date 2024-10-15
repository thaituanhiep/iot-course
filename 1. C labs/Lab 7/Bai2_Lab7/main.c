#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define GUEST_NUMBER 123
#define HINT "My birthday"

int main()
{
    printf(HINT);
    while(true) {
        int guess;
        printf("\nGuess number: ");
        scanf("%d", &guess);

        if (guess == GUEST_NUMBER) {
            printf("\nCongratulation. You guess correct.");
            break;
        } else {
            printf("\nWRONG");
        }
    }

    return 0;
}
