#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int randomNumber;
    int number_of_guesses = 0;
    int guessed_number;

    // Seed the random number generator with current time
    srand(time(0));

    // Generate a random number (0 to 100)
    randomNumber = rand() % 100+1;

    do
    {
        printf("guess the number:");
        scanf("%d", &guessed_number);
    // Takes a number as input from user
        if(guessed_number>randomNumber){
            printf("lower number please \n");
        }
        else if(guessed_number<randomNumber){
            printf("higher number please \n");
        }
        else{
            printf("congrats!\n");
        }
        number_of_guesses++;
    } while (guessed_number != randomNumber);

    printf("you guessed the number in %d guesses", number_of_guesses);
   // return 0;
}
