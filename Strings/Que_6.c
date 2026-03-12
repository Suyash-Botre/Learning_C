// Write a program to count the occurrence of a given character in a string.
// Write a program to check whether a given character is present in a string or not.

#include <stdio.h>
#include <string.h>

int count(char str[100], char);
int count(char str[100], char occ)
{
    int total = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == occ)
        {
            total++;
        }
    }

    return total;
}
int main()
{
    char str[100];
    char occ;
    printf("Enter the string:");
    fgets(str, 100, stdin);
    str[strcspn(str,"\n")]='\0';
    printf("Enter the character to count its occurrence in string:");
    scanf(" %c", &occ);
    int a = count(str, occ);
    printf("Occurrence of %c in the string is %d\n", occ, a);
    if (a == 0)
    {
        printf("%c is not present in the string\n", occ);
    }
    else
    {
        printf("%c is present in the string\n", occ);
    }

    return 0;
}