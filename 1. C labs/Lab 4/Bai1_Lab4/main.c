#include <stdio.h>
#include <stdlib.h>

int main()
{
    double length = 10, width = 5, perimeter = 2 * (length + width), area = length * width;
    printf("Chu vi cua hinh chu nhat co chieu dai %lf va chieu rong %lf la %0.2lf\n", length, width, perimeter);
    printf("Dien tich cua hinh chu nhat co chieu dai %lf va chieu rong %lf la %0.2lf\n", length, width, area);
    return 0;
}
