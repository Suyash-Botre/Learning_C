// Write a program using function to find average of three numbers

#include <stdio.h>
float average(float,float,float);
float average(float x,float y,float z){
return ((x+y+z)/3.0);
}
int main(){
    float a,b,c;
    printf("Enter the number a: ");
    scanf("%f",&a);
    printf("Enter the number b: ");
    scanf("%f",&b);
    printf("Enter the number c: ");
    scanf("%f",&c);
    printf("The average of %f,%f,%f is: %f",a,b,c,average(a,b,c));
    return 0;
}