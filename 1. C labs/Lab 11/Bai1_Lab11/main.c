#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x = 0;
    int y = 1;
    float z = 3.0;

    char *px = &x;
    int *py = &y;
    float *pz = &z;

    *px = 12;
    *py = 23;
    *pz = 2323.42;

    printf("Dia chi cua con tro *px la &px: %p\nDia chi cua bien x la px: %p\nGia tri cua bien x la *px: %d\n", &px, px, *px);
    printf("Dia chi cua con tro *py la &py: %p\nDia chi cua bien y la py: %p\nGia tri cua bien y la *py: %d\n", &py, py, *py);
    printf("Dia chi cua con tro *pz la &pz: %p\nDia chi cua bien z la pz: %p\nGia tri cua bien z la *pz: %d\n", &pz, pz, *pz);

    return 0;
}
