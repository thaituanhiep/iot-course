#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temperature;
    printf("Input temperature: ");
    scanf("%d", &temperature);

    printf("The weather is ");
    if (temperature < 0) {
        printf("freezing");
    } else if (temperature >= 0 && temperature < 10) {
        printf("very cold");
    } else if (temperature >= 10 && temperature < 20) {
        printf("cold");
    } else if (temperature >= 20 && temperature <= 30) {
        printf("warm");
    } else if (temperature > 30 && temperature <= 40) {
        printf("hot");
    } else {
        printf("extremely hot");
    }

    return 0;
}
