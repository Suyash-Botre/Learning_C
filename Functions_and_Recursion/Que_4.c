// Write a program using recursion to calculate nth element of fibonacci series

#include <stdio.h>
int fibo(int);
int fibo(int x)
{
    if (x < 0)
    {
        return -1;
    }

    else if (x == 0)
    {
        return 0;
    }
    else if (x == 1)
    {
        return 1;
    }

    return fibo(x - 1) + fibo(x - 2);
}
int main()
{
    int a;
    printf("Enter the n-th term of Fibonacci series: ");
    scanf("%d", &a);
    if (a < 0)
    {
        printf("invalid input");
    }
    else
    {
        printf("The %d element of fibonacci series is %d", a, fibo(a));
    }
    return 0;
}