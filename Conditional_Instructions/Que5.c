// QUE: write a program to determine whether a character entered by the user is lowercase or not
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);
    // Here we are using ascii values
    if (ch >= 97 && ch <= 122)
    {
        printf("The character is in the lowercase\n");
    }
    else
    {
        printf("The character is not in lowercase\n");
    }
    printf("The ascii value of the character is %d", ch);

    return 0;
}