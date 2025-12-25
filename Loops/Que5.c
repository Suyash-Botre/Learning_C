// QUE: write a program to calculate the sum of the numbers occuring in the multiplication table of 8

#include <stdio.h>

int main()
{
    int n = 8;
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        printf("%dx%d=%d\n", n, i, n * i);
        sum += (n * i);
    }
    printf("The sum of the numbers occuring in the multiplication table of 8: %d", sum);

    return 0;
}