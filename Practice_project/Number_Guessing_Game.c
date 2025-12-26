/* Write a program that generates a random number and asks the player to guess it. If the player's guess is higher than the
actual number , the program displays "Lower number please". Similarly , if the user's guess is too low, the program prints
"Higher number please".
When the user guesses the correct number, the program displays the number of guesses the player used to arrive at the number */

// using random number generator

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));                      // seed the random number generator
    int randomNumber = rand() % 100 + 1; // 1 to 100
    printf("Guess a random number between 1 to 100 \n");
    int guessed_no = 0;
    int no_of_guesses = 0;
    while (guessed_no != randomNumber)
    {
        printf("Enter the guessed no: ");
        scanf("%d", &guessed_no);
        no_of_guesses++;
        if (guessed_no < 1 || guessed_no > 100)
        {
            printf("Guess the number between 1 to 100 please\n");

            continue;
        }

        if (guessed_no > randomNumber)
        {
            printf("Your guess is higher, guess lower number please\n");
        }
        else if (guessed_no < randomNumber)
        {
            printf("Your guess is lower, guess higher number please\n");
        }
    }
    if (guessed_no == randomNumber)
    {
        printf("Your guess is correct, Congratulations!\n");
    }
    printf("The number of guesses were:%d", no_of_guesses);

    return 0;
}
