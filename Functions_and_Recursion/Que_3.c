// Write a function to calculate force of attraction on a body of mass 'm' exerted by earth.Consider g=9.8m/s2.

#include <stdio.h>
float force(float);
float force(float x){
    return x*9.8;
}
int main(){
    float a;
    printf("Enter the mass of the body: ");
    scanf("%f",&a);
    printf("Force of attraction on a body of mass %f exerted by earth is %f",a,force(a));
    return 0;
}