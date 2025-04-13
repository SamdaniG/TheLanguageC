/*In this program we will learn about the usage of sizeof operators */
#include <stdio.h>

int main(int argc, char **argv)
{
    printf("The size of char is %zd\n",sizeof(char));
    printf("The size of int is %zd\n",sizeof(int));
    printf("The size of unsigned int is %zd\n",sizeof(unsigned int));
    printf("The size of long int is %zd\n",sizeof(long int));
    printf("The size of short int is %zd\n",sizeof(short int));    
    printf("The size of unsigned long int is %zd\n",sizeof(unsigned long int));
    printf("The size of long long int is %zd\n",sizeof(long long int));
    printf("The size of float is %zd\n",sizeof(float));
    printf("The size of double is %zd\n",sizeof(double));
    printf("The size of long double is %zd\n",sizeof(long double));


    int x = 1, y = 0, z = 5;

    int a = x && y && z++;

    printf("%d", z);

    
	return 0;
}
