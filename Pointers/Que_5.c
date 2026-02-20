// Write a function and pass the value by reference

#include <stdio.h>
void f(int *);
void f(int *i)
{
    printf("address of a:%p", i);
}
int main()
{
    int a;
    f(&a);
    return 0;
}