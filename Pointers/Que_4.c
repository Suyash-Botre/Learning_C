// Write a program to change the value of a variable to ten times of its current value using function.

#include <stdio.h>
void ten(int *);
void ten(int *i){
*i=10*(*i);
}
int main()
{
    int a;
    printf("Enter the value:");
    scanf("%d", &a);
    ten(&a);
    printf("a=%d\n", a);
    return 0;
}