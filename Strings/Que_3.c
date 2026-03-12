// Write your own version of strcpy function from <string.h>

#include <stdio.h>
#include <string.h>
void copy(char str3[100], char str1[100]);
void copy(char str3[100], char str1[100])
{
    for (int i = 0; i<=strlen(str1); i++)
    {
        str3[i] = str1[i];
    }
}
int main()
{
    char str1[100] = "Hello there";
    char str2[100] = "hii";
    char str3[100] = "hahaha";
    str1[strcspn(str1, "\n")] = '\0'; // if str1 is defined using fgets or %c or if it has \n

    printf("Str1 is %s\n", str1);
    printf("Str2 is %s\n", str2);
    printf("Str3 is %s\n", str3);
    printf("After using build in strcpy function, copying str1 into str2\n");

    strcpy(str2, str1);
    printf("Str1 is %s\n", str1);
    printf("Str2 is %s\n", str2);
    printf("Str3 is %s\n", str3);
    copy(str3, str1);
    printf("After using user-defined strcpy function, copying str1 into str3\n");
    printf("Str1 is %s\n", str1);
    printf("Str2 is %s\n", str2);
    printf("Str3 is %s\n", str3);

    return 0;
}