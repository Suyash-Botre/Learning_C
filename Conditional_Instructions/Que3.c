// QUE: calculate income tax paid by employee

#include <stdio.h>

int main()
{
    float income;
    printf("Income amount: ");
    scanf("%f", &income);
    float tax = 0;

    if (income > 1000000)
    {
        printf("Have to pay 30%% tax\n");
        tax = (0.05 * (500000 - 250000)) + (0.2 * (1000000 - 500000)) + (0.3 * (income - 1000000));
    }
    else if (income > 500000 && income <= 1000000)
    {
        printf("Have to pay 20%% tax\n");
        tax = (0.05 * (500000 - 250000)) + (0.2 * (income - 500000));
    }
    else if (income >= 250000 && income <= 500000)
    {
        printf("Have to pay 5%% tax\n");
        tax = (0.05 * (income - 250000));
    }
    else
    {
        printf("Have to pay No tax");
    }
    printf("The amount is %f", tax);
    return 0;
}