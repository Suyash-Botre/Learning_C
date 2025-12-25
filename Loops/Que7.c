// QUE: write a program to check whether a given number is prime or not using loops
#include <stdio.h>

int main()
{
    int n, not_prime=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            not_prime = 1;
            break;
        }
    }
    if (not_prime == 1||n<=1)
    {
        printf("The number is not prime");
    }
    else
    {
        printf("The number is prime");
    }

    return 0;
}