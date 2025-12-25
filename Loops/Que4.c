// QUE: write a program to sum first ten natural numbers using while loop
#include <stdio.h>

int main()
{
    int i = 1;
    int n;
    while (i <= 10)
    {
        n = n + i;
        printf("Sum of first 10 natural numbers is %d\n", n);
        i++;
    }

    return 0;
}