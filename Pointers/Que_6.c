// Write a program using a function which calculates the sum and average of two numbers.Use pointers and print the values of sum and average in main()

#include <stdio.h>
void f(int, int, int *, float *);
void f(int i, int j, int *c, float *d)
{

    *c = i + j;
    *d = (i + j) / 2.0;
}

int main()
{
    int a, b, sum;
    float average;
    printf("Enter value in a:");
    scanf("%d", &a);
    printf("Enter value in b:");
    scanf("%d", &b);
    f(a, b, &sum, &average);
    printf("The sum of two numbers is %d and the average of two numbers is %f", sum, average);

    return 0;
}