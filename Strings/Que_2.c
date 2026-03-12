// Write your own version of strlen function from <string.h>

#include <stdio.h>
#include <string.h>
int strlen2(char str[]);
int strlen2(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    fgets(str, 100, stdin);
    // We will use build in strlen function
    str[strcspn(str,"\n")]='\0';
    int total = strlen(str);
    printf("The length of the string is %d\n", total);
    // Now lets use user-defined strlen function
    printf("The length of the string using user-define strlen function is %d", strlen2(str));

    return 0;
}