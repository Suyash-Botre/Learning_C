// Write a program having a variable 'i'. Print the address of 'i'.
// Pass this variable to a function and print its address. 

#include <stdio.h>
void address(int *);
void address(int *a)
{
    printf("The value:%d\n", *a);
    printf("%p", a);
}
int main()
{
    int i=5;
    printf("%p\n", &i);
    address(&i);
    return 0;
}

