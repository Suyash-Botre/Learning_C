// Write a program to print the value of a variable i by using "pointer to pointer" type of variable.

#include <stdio.h>

int main(){
    int i=7;
    int* a=&i;
    int** b=&a;
    printf("The value of i is %d",**b);
    
    return 0;
}