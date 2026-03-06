// Write a program containing functions which counts the number of positive integers in an array.

#include <stdio.h>
int f(int arr[], int);
int f(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    printf("Enter the number of elements in an array:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the elements in arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    int result = f(arr, n);

    printf("Number of positive integers = %d\n", result);

    return 0;
}
