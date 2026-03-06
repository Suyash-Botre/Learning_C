// Write a program containing function which reverses the array passed to it. BOth 1-d,2-d

#include <stdio.h>
void rev(int a[], int);
void rev2(int p, int q, int a[p][q]);
void rev(int a[], int n) // function 1
{                        // to reverse the array we have to multi-swap elements using loop
    for (int i = 0; i < n / 2; i++)
    {
        int temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
    printf("\n");
    printf("The 1-D array is reversed\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
void rev2(int p, int q, int a[p][q]) // function 2
{
    for (int i = 0; i < p / 2; i++)
    {
        for (int j = 0; j < q; j++) // Here the mid row is not reversed , if we have to make it happen we have to treat whole 2-d array as 1-d using ptr
        {

            int temp = a[i][j];
            a[i][j] = a[p - i - 1][q - j - 1];
            a[p - i - 1][q - j - 1] = temp;
        }
    }
    printf("\n");
    printf("The 2-D array is reversed\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    int x, y;
    printf("1-D Array\n");
    printf("Enter the no of elements in the array: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter arr[%d]:", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    rev(arr, n);
    printf("2-D Array\n");
    printf("Enter the no of elements in a row: ");
    scanf("%d", &x);
    printf("Enter the no of elements in a column: ");
    scanf("%d", &y);
    int arr2[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("Enter arr2[%d][%d]:", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }
    rev2(x, y, arr2);

    return 0;
}