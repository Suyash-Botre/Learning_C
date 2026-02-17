//Write a function to convert celsius temperature into fahrenheit

#include <stdio.h>
float temp(float);
float temp(float x){
    return ((x*(9.0/5))+32);
}
int main(){
    float a;
    printf("Enter the temperature in celsius: ");
    scanf("%f",&a);
    printf("The temperature converted to fahrenheit will be %f",temp(a));
    return 0;
}