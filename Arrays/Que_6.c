// Create an 2-D array of size of user containing multiplications tables for a custom input given by the user resp.

#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter number of rows=");
    scanf("%d", &x);
    printf("Enter number of columns=");
    scanf("%d", &y);
    int arr[x][y];
    int a[x];
    printf("Enter %d numbers whose tables you want:\n", x);
    for (int i = 0; i < x; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            arr[i][j] = a[i] * (j + 1);
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}