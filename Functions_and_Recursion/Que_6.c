/* Write a program using function to print the following pattern (first n lines)
 *
 ***
 *****
 */

#include <stdio.h>
void pattern(int);
void pattern(int a)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int a;
    printf("Enter input:");
    scanf("%d", &a);
    pattern(a);

    return 0;
}