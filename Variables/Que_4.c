// que4 write a program to calculate simple interest for a set of values representing principle,number,of years and rate of interest
#include <stdio.h>

int main()
{
    float p, r, t;
    printf("Input the principle= ");
    scanf("%f", &p);
    printf("Input the rate of interest = ");
    scanf("%f", &r);
    printf("Input the number of years = ");
    scanf("%f", &t);
    printf("The value of simple interest is %f", (p*r*t)/100);
    return 0;

}