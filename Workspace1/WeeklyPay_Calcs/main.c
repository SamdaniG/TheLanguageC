#include <stdio.h>

int main(int argc, char **argv)
{
	float basic_pay_rate=0.0;
    float hours_worked=0.0;
    float pre_tax_income=0.0;
    float a,b,c;
    float tax=0.0;
    float final_income=0.0;
    
    printf("Enter the basic pay rate: ");
    scanf("%f",&basic_pay_rate);
    printf("The basic pay rate is %f\n",basic_pay_rate);
    
    printf("Enter the number of hours worked: ");
    scanf("%f",&hours_worked);
    printf("The number of hours worked is %f\n",hours_worked);
    
    if (hours_worked>40)
    {
        pre_tax_income=(40*basic_pay_rate)+((hours_worked-40)*basic_pay_rate*1.5);
    }
    else
    {
        pre_tax_income=basic_pay_rate*hours_worked;
    }
     //tax=a+b+c
     // where a is the first 300 taxed at 15%
     // where b is the next 150 taxed at 20%
     // where c is the rest taxed at 25%
     // 
     if (pre_tax_income<=300)
     {
         a=pre_tax_income;
         b=0;
         c=0;
     }
     else if ((300<pre_tax_income) & (pre_tax_income<=450))
     {
         a=300;
         b=pre_tax_income-300;
         c=0;
     }
     else
    {
        a=300;
        b=150;
        c=pre_tax_income-450;
    }
    
    tax=(a*0.15)+(b*0.2)+(c*0.25);
    final_income=pre_tax_income-tax;
    printf("The gross pay is %f\n",pre_tax_income);
    printf("The taxes are %f\n",tax);
    printf("The income is %f",final_income);
	return 0;
}

