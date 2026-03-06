// Create an array of 10 numbers.
// Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.

#include <stdio.h>

int main()
{
    int arr[10] = {12, 34, 54, 23, 4, 5, 55, 67, 32, 45};
    int *ptr = arr;
    printf("First element of the array is %d\n", *ptr);
    printf("The third element of the array is %d\n", arr[2]);
    printf("The third element of the array calculated using pointer arithmetic is %d\n", *(ptr + 2));

    return 0;
}