#include <stdio.h>

int main()
{
    enum company {GOOGLE,FACEBOOK,XEROX,YAHOO,EBAY,MICROSOFT};
    enum company xerox=XEROX;
    enum company google=GOOGLE;
    enum company ebay=EBAY;
    printf("The value of xerox is %d\n",xerox);
    printf("The value of google is %d\n",google);
    printf("The value of ebay is %d\n",ebay);
}
