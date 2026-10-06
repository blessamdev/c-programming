/*
  Author: Blessam
  Date: October 6, 2026
  Description: An interactive number guessing game that generates a random secret 
               number between 1 and 20. It prompts the user for guesses using a 
               loop, provides "Too high" or "Too low" feedback with input validation, 
               and tracks the total number of valid attempts until the correct guess is made.
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;

    srand(time(NULL));            // Seed the random number generator
    secret = rand() % 20 + 1;     // Random number from 1 to 20

    printf("Number Guessing Game\n");
    printf("I am thinking of a number between 1 and 20.\n\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        // 1. Input Validation Check
        if (guess < 1 || guess > 20) {
            printf("Invalid input! Please enter a number between 1 and 20.\n\n");
            continue;
        }

        attempts++;

        // 2. High / Low / Correct Decision Logic
        if (guess > secret) {
            printf("Too high!\n\n");
        } else if (guess < secret) {
            printf("Too low!\n\n");
        } else {
            printf("Congratulations!\n");
        }

    } while (guess != secret);

    printf("You guessed the number in %d valid attempt(s).\n", attempts);
    return 0;
}
