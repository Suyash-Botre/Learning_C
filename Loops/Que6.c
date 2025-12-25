// QUE: Write a program to calculate the factorial of a given number using a for loop
#include <stdio.h>

int main()
{
    int n, factorial = 1;
    printf("Enter number for factorial: ");
    scanf("%d", &n);
    for (int i = n; i; i--)
    {
        factorial *= i;
    }
    printf("The factorial of %d is %d", n, factorial);

    return 0;
}