#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int idStaff, monthWorkedHours, hourSalary, monthSalary;
    printf("Input idStaff: ");
    scanf("%u", &idStaff);
    printf("Input monthWorkedHours: ");
    scanf("%u", &monthWorkedHours);
    printf("Input hourSalary: ");
    scanf("%u", &hourSalary);

    monthSalary = monthWorkedHours * hourSalary;

    printf("Month salary of staff %u: %u", idStaff, monthSalary);
    return 0;
}
