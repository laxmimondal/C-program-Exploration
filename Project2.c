// SNAKE , WATER , GUN GAME
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate computer's choice
char generateComputerChoice() {
    srand(time(0)); // Seed for random number generator
    int randomNum = rand() % 3; // Generate a random number between 0 and 2

    // Assigning 'S', 'W', or 'G' based on the random number
    if (randomNum == 0)
        return 'S';
    else if (randomNum == 1)
        return 'W';
    else
        return 'G';
}

// Function to determine the winner
int determineWinner(char you, char comp) {
    if (you == comp) {
        printf("It's a tie!\n");
        return 0;
    }
    else if ((you == 'S' && comp == 'W') || (you == 'W' && comp == 'G') || (you == 'G' && comp == 'S')) {
        printf("You win!\n");
        return 1;
    }
    else {
        printf("You lose!\n");
        return -1;
    }
}

int main() {
    char you, comp;
   
    printf("Enter 'S' for snake, 'W' for water, 'G' for gun:\n");
    scanf(" %c", &you); // Note the space before %c to consume whitespace characters

    // Validating user input
    if (you != 'S' && you != 'W' && you != 'G') {
        printf("Invalid input! Please enter 'S', 'W', or 'G'.\n");
        return 1; // Exiting with an error code
    }

    comp = generateComputerChoice();
    printf("You chose: %c\n", you);
    printf("Computer chose: %c\n", comp);

    determineWinner(you, comp);

    return 0;
}
