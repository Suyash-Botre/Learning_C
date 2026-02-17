// Write a recursive function to calculate the sum of first 'n' natural numbers

#include <stdio.h>
int sum(int);
int sum(int x)
{
    if (x < 0)
    {
        return -1;
    }
    else if (x == 0)
    {
        return 0;
    }

    /*else if (x == 1)       // We can skip this base condition cause 1+sum(0)==1
    {
        return 1;
    }*/
    return x + sum(x - 1);
}
int main()
{
    int a;
    printf("Enter input: ");
    scanf("%d",&a);
    if (a<=0){
        printf("Invalid input");
    }else{
        printf("The sum of first '%d' natural numbers is %d",a,sum(a));
    }

    return 0;
}