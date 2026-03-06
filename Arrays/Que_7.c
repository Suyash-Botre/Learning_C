// Create a three-D array and print the address of its elements in increasing order.

#include <stdio.h>

int main()
{
    int arr[2][2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("Enter in arr[%d][%d][%d]=", i, j, k);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }
    int *ptr = &arr[0][0][0];
    for (int i = 0; i < 8; i++)
    {
        printf("The address of element on index %d of array is %p\n", i, (ptr + i));
    }

    return 0;
}