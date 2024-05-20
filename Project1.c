// A simple guessing game where the user tries to guess a randomly generated number between 1 and 100.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, nguesses = 0;  // Variables to store the random number, user's guess, and the number of guesses
    
    // Initialize random number generator with the current time as the seed
    srand(time(0));
    
    // Generate a random number between 1 and 100
    number = rand() % 100 + 1;
    
    // Uncomment the next line for debugging purposes to see the generated number
    // printf("The number is %d\n", number);

    // Main game loop
    do {
        printf("Guess a number between 1 and 100: ");
        scanf("%d", &guess);
        
        // Check if the guessed number is higher, lower, or equal to the generated number
        if (guess > number) {
            printf("Lower, please!\n");
        } else if (guess < number) {
            printf("Higher, please!\n");
        } else {
            printf("You guessed it in %d attempts!\n", nguesses + 1);  // Print the number of attempts
        }
        
        nguesses++;  // Increment the number of guesses after each attempt
    } while (guess != number);  // Continue the loop until the correct number is guessed

    return 0;  // Indicate that the program ended successfully
}
