// Write a program to encrypt a string by adding 1 to the ascii valur of its characters and decrypt it (make function).

#include <stdio.h>
#include <string.h>

void encrypt(char str[100]);
void decrypt(char str[100]);
void encrypt(char str[100])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = str[i] + 1;
    }
}
void decrypt(char str[100])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = str[i] - 1;
    }
}
int main()
{
    char str[100];
    printf("Enter the string:");
    fgets(str, 100, stdin);
    str[strcspn(str,"\n")]='\0';
    printf("The entered string is:%s\n", str);
    printf("We will encrypt the string \n");
    encrypt(str);
    printf("The encrypted string is: %s\n", str);
    printf("We will decrypt the string \n");
    decrypt(str);
    printf("The decrypted string is: %s\n", str);

    return 0;
}



// If you want to keep spaces unchanged
/*void encrypt(char str[])
{
    for(int i=0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ')
            str[i] = str[i] + 1;
    }
}
    */