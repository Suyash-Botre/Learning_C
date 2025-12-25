// QUE: write a program to find whether a year entered by the user is a leap year or not . take year as an input from the user

#include <stdio.h>

int main()
{
    int year;
    printf("Enter year: ");
    scanf("%f", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("The year is a leap year\n");
    }
    else
        printf("The year is not a leap year");
    return 0;
}