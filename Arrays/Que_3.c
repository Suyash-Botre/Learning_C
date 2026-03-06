// write a program to create an array of 10 integers and store multiplication table for a general input provided by the user.

#include <stdio.h>

int main()
{
    int arr[10];
    int n;
    int j = 0;
    printf("Enter the number:");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
         //int j = 0;
        int t = n * i;
        arr[j] = t;  // here we could have used i instead of j, using arr[i-1]
        j++;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value pf arr[%d]is %d\n", i, arr[i]);
    }

    return 0;
}