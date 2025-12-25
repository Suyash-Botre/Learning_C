// QUE: write a program to find the greatest of four numbers entered by the user
#include <stdio.h>

int main()
{
    float a, b, c, d;
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);
    printf("Enter d: ");
    scanf("%f", &d);
    if (a >= b && a >= c && a >= d)
    {
        printf("The number  greatest among four numbers is %f", a);
    }
    else if (b >= a && b >= c && b >= d)
    {
        printf("The number  greatest among four numbers is %f", b);
    }
    else if (c >= b && c >= a && c >= d)
    {
        printf("The number  greatest among four numbers is %f", c);
    }
    else
    {
        printf("The number  greatest among four numbers is %f", d);
    }

    return 0;
}

// same code but better approach

/*#include <stdio.h>

int main()
{
    float a, b, c, d, max;

    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);
    printf("Enter d: ");
    scanf("%f", &d);

    max = a;

    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;

    printf("The greatest number is %f", max);

    return 0;
}*/
