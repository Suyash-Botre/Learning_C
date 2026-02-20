// Write a program to print the address of a variable . use this address to get the value of the variable 

#include <stdio.h>

int main(){
    int a=8; //variable
    int* b=&a;// pointer that stores the address of variable a
    int** c=&b;// pointer to pointer 
    printf("%p\n",b); //prints the address of variable a 
    printf("%u\n",b); //prints the address of variable a 
    printf("%u\n",*c); //prints the address of variable a 
    printf("%d\n",*b); //prints the value at of the variable 
    printf("%d\n",*&a);
    printf("%d\n",**c);
    return 0;
}