// Que3. write a program to convert celsius
#include <stdio.h>

int main()
{
    float Celsius;
    printf("Input the value of celsius= ");
    scanf("%f", &Celsius);
    printf("The value in fahrenhiet is= %f", (Celsius * (9.0 / 5.0)) + 32);
    return 0;
}