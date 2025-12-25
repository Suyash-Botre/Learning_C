// QUE: write a program to determine whether a student is pass or failed
#include <stdio.h>

int main()
{
    float m1, m2, m3;
    float max1, max2, max3;
    printf("The marks obtained in m1: ");
    scanf("%f", &m1);
    printf("The marks obtained in m2: ");
    scanf("%f", &m2);
    printf("The marks obtained in m3: ");
    scanf("%f", &m3);
    printf("The max marks for m1: ");
    scanf("%f", &max1);
    printf("The max marks for m2: ");
    scanf("%f", &max2);
    printf("The max marks for m3: ");
    scanf("%f", &max3);
    float p1 = m1 / max1 * 100;
    float p2 = m2 / max2 * 100;
    float p3 = m3 / max3 * 100;
    float tp = (m1 + m2 + m3) / (max1 + max2 + max3) * 100;
    if (p1 >= 33 && p2 >= 33 && p3 >= 33 && tp >= 40)
    {
        printf("you are passed!\n");
    }
    else
    {
        printf("You are failed!\n");
    }
    printf("your percentage is %.2f%%", tp);

    return 0;
}