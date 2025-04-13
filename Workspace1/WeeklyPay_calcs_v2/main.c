#include <stdlib.h>
#include <stdio.h>

#define PAYRATE 12.00
#define TAXRATE_300 0.15
#define TAXRATE_150 0.20
#define TAXRATE_REST 0.25
#define OVERTIME 40

int main()
{
    // declare variables
    double hours=0;
    double grossPay=0.0;
    double taxes=0.0;
    double netPay=0.0;
    
    printf("Enter the number of hours worked: ");
    scanf("%lf",&hours);
    
    if (hours<=40)
        grossPay=hours*PAYRATE;
    else{
        grossPay=40*PAYRATE;
        double overTimePay=(hours-40)*(PAYRATE*1.5);
        grossPay+=overTimePay;
    }

    if (grossPay<=300)
    {
        taxes=grossPay*TAXRATE_300;
    }
    else if (grossPay>300 && grossPay<=450)
    {
        taxes=300*TAXRATE_300;
        taxes+=(grossPay-300)*TAXRATE_150;
    }
    else if (grossPay>450)
    {
        taxes=300*TAXRATE_300;
        taxes=150*TAXRATE_150;
        taxes+=(grossPay-450)*TAXRATE_REST;
    }
    
    netPay=grossPay-taxes;
    printf("The gross pay is %f\n",grossPay);
    printf("The taxes are %f\n",taxes);
    printf("The income is %f",netPay);
    
    return 0;
}  