// swap the values of variables a and b using function

#include <stdio.h>

void swap(int *, int *);
void swap(int *i, int *j)
{int temp;
    temp=*i;
    *i=*j;
    *j=temp;
    
}
int main()
{
    int a = 3;
    int b = 4;
    swap(&a, &b);
    printf("a=%d,b=%d", a, b);
    return 0;
}