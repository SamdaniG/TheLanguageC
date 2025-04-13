/* This program is a basic program, it calculates the number of years and days when the minutes are scanned in
 * */
#include <stdio.h>

int main(int argc, char **argv)
{
    double min=0, mins_in_year,years,days;
    printf("Enter the minutes: ");
    scanf("%le",&min);
    printf("This is the minutes entered %le\n",min);
    mins_in_year=60*24*365;
    years=min/mins_in_year;
    days=min/(60*24);
    printf("The number of years is: %f\n",years);
    printf("The number of days is: %0.3f\n",days);
    
	return 0;

}
