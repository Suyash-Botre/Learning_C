// QUE: write a program to check whether a number is divisible by 97 or not?

/*#include <stdio.h>

int main(){
int a;
printf("Input the number: ");
scanf("%d", &a);
printf("The remainder when dividing with 97 is:%d\n",a%97);
if(a%97==0){
    printf("The number is divisible by 97 as remainder is 0");
}else{
    printf("The number is not divisible by 97 as the remainder is not 0");
}
return 0;
}*/

#include <stdio.h>

int main()
{
    int a;
    printf("Input the number: ");
    scanf("%d", &a);
    printf("The remainder when dividing with 97 is:%d\n", a % 97);
    (a % 97 == 0) ? printf("The number is divisible by 97") : printf("The number is not divisible by 97");
    return 0;
}
//ternary operator