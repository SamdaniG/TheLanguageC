#include <stdio.h>

int main(int argc, char **argv)
{
    int num=0;
    int remainder=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    remainder=num%2;
    if (remainder==0)
        printf("The number is even!\n");
    else
        printf("The number is odd!\n");
    
    
    return 0;
}
