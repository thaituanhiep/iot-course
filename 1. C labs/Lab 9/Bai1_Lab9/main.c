#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int greatestCommonDivisor(int a, int b) {
    int r;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

float absolute(float x) {
    if (x < 0) {
        return -x;
    }
    return x;
}

long factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

float distance(float Ax, float Ay, float Bx, float By) {
    return sqrt((Ax - Bx) * (Ax - Bx) + (Ay - By) * (Ay - By));
}

int main()
{
    printf("Greatest Common Divisor of 40 and 56: %d\n", greatestCommonDivisor(40, 56));
    printf("Absolute of -5: %.2f\n", absolute(-5));
    printf("Factorial of 7: %ld\n", factorial(7));
    printf("Distance from (3,6) to (2,9): %f", distance(3, 6, 2, 9));
    return 0;
}
