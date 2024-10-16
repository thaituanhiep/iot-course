#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    unsigned int primes[100] = {0};
    unsigned int primeIndex = 2;

    bool isPrime;
    primes[0] = 2;
    primes[1] = 3;

    for (int p = 4; p <= 100; p++) {
        isPrime = true;
        for (int i = 0; i < primeIndex; i++) {
            if (p % primes[i] == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime == true) {
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }

    for (int i = 0; i < primeIndex; ++i) {
        printf("%i  ", primes[i]);
    }
    printf("\n");
    return 0;
}
