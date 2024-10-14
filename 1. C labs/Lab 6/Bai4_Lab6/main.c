#include <stdio.h>
#include <stdlib.h>

#define PAYRATE         12.00   // 12$ / hour
#define TAXRATE_300     0.15    // 15%
#define TAXRATE_450     0.20    // 20%
#define TAXRATE_REST    0.25    // 25%
#define OVERTIME        40      // hour

int main()
{
    unsigned int hours;
    double grossPay, taxes, netPay;

    printf("Input hours: ");
    scanf("%u", &hours);

    // calculate gross pay
    if (hours <= 40) {
        grossPay = hours * PAYRATE;
    } else {
        grossPay = 40 * PAYRATE;
        double overTimePay = (hours - 40) * (PAYRATE * 1.5);
        grossPay += overTimePay;
    }

    // calculate taxes
    if (grossPay <= 300) {
        taxes = grossPay * TAXRATE_300;
    } else if (grossPay > 300 && grossPay <= 450) {
        taxes = 300 * TAXRATE_300;
        taxes += (grossPay - 300) * TAXRATE_450;
    } else if (grossPay > 450) {
        taxes = 300 * TAXRATE_300;
        taxes += 150 * TAXRATE_450;
        taxes += (grossPay - 450) * TAXRATE_REST;
    }

    // calculate the netpay
    netPay = grossPay - taxes;

    // display output
    printf("Your gross pay this week is: %.2f\n", grossPay);
    printf("Your taxes this week is: %.2f\n", taxes);
    printf("Your net pay this week is: %.2f\n", netPay);

    return 0;
}
