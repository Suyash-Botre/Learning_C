// Write a program to take string as an input from the user using %c and %s confirm that the strings are equal.

#include <stdio.h>
#include <string.h>

int main()
{
    char st[10];
    char st2[10];
    printf("Input using %%c \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the string in st[%d]= ", i);
        scanf(" %c", &st[i]);
    }
    // When we take input character by character we have to terminate string with null char
    st[5]='\0';
    printf("Input using %%s \n");
    printf("Enter the string in st2=");
    scanf("%s", st2);

    if ((strcmp(st, st2)) == 0)
    {
        printf("both the strings are equal");
    }
    else
    printf("both are not equal");

    return 0;
}