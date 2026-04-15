#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int randomNumber;
    int number_of_guesses = 0;
    int guessed_number;

    srand(time(0));

    // generate random number between 1 to 100
    randomNumber = rand() % 100 + 1;

    // loop will run until user guesses correctly or runs out of attempts
    do
    {
        printf("guess the number: ");
        scanf("%d", &guessed_number);   // taking input from user

        number_of_guesses++;  // counting number of attempts

        // giving hints based on guess
        if (guessed_number > randomNumber)
        {
            printf("lower number please\n");
        }
        else if (guessed_number < randomNumber)
        {
            printf("higher number please\n");
        }
        else
        {
            printf("congrats!\n");
        }

        // if user exceeds 10 attempts and still wrong
        if (number_of_guesses >= 10 && guessed_number != randomNumber)
        {
            printf("you lose\n");
            break;  // exit the loop
        }

    } while (guessed_number != randomNumber);

    // printing result only if user wins
    if (guessed_number == randomNumber)
    {
        printf("you guessed the number in %d guesses\n", number_of_guesses);
    }

    return 0;
}