// Write a function slice() to slice a string. It should change the original string such that it is now the sliced string.
// Take 'm' and 'n' as the start and ending position for slice.

#include <stdio.h>
#include <string.h>

void slice(char c[100], int, int);
void slice(char c[100], int m, int n)
{
    int move = 0;
    for (int i = m; i < n; i++)
    {
        c[move] = c[i];
        move++;
    }
    c[move] = '\0';
    
}

int main()
{
    char c[100];
    int m, n;
    printf("Enter the string:");
    fgets(c, 100, stdin);
    c[strcspn(c, "\n")] = '\0';
    printf("Enter start(m) and end(n) position resp : ");
    scanf("%d %d", &m, &n);
    slice(c, m, n);
    printf("The string after the slice %d,%d is : %s", m, n, c);

    return 0;
}