// Create a 2-d array by taking input from the user. Write a display function to print the content of this 2-d array on the screen.

#include <stdio.h>
void display(int a[][3]);
void display(int a[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value for arr[%d][%d]:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    display(arr);
    return 0;
}