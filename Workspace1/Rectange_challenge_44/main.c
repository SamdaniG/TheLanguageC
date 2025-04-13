#include <stdio.h>

int main()
{
    double width;
    double height;
    double perimeter;
    double area;
    
    width=14.172;
    height=89.909;
    perimeter=2*(width+height);
    area=width*height;
    
    printf("The width and height of the rectangle is %f and %f\n",width,height);
    printf("The perimeter and area of the rectangle is %f and %f",perimeter,area);

	return 0;
}
