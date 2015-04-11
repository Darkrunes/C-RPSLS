/* 
Saffat Shams Akanda, z5061498
The old family favourite: ROCK PAPER SCISSORS LIZARD SPOCK!
Version 0.9fffff

Using modular arithmetic to determine winners and a random number 
generator to create a basic game
*/
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "prototypes.h"
#include "OSDependent.h"
#include "gameManager.h"
#include "Choices.h"
#include "Display.h"
#include "handleUser.h"
#include "AI.h"

void printTests();

int main(int argc, char *argv[]) {
    int userChoice;
    char loopBreak;
/*
    int gameCount = 0;
    int *totalGames[100];
    int *victories[100];
*/
    srand(time(0));

    //printTests();

    while (1)
    {
        userChoice = -1;

        while (userChoice == -1) {
            sleepTime();
            emptyConsole();
            displayChoices();
            userChoice = getUserChoice();
        }

        gameMangerMain(userChoice);

        printf("Do you want to continue? (Y/N) ");
        scanf("\n%c", &loopBreak);

        if (!(loopBreak == 'Y' || loopBreak == 'y')) {
            break;
        } 
    }

    printf("\nPress the Enter or Return key to exit\n");
    
    getchar();
    getchar();
 
    return EXIT_SUCCESS;
}


void emptyConsole() {
    /*
    Clearing console requires system specific code as such, just using 
    many newlines. Using 42 since that is about half of a terminal
    most of the time, getting the terminal height would require system
    specific code and limit portability
    */
    for (int i = 0; i < 42; i++) {
        printf("\n");
    }

}

void printRandom() {
    /* 
    Used to print 100 random digits between 1 and 5 to 
    observe the distribution of the built in rand function
    */
    
    for (int i = 0; i < 100; i++)
    {
        printf("%d\n", generateDecision());
    }
}

void testWinner() {
    /*
    Unit tests for getWinner function
    */
    assert(getWinner(Rock, Paper) == 2);
    assert(getWinner(Spock, Scissors) == 1);
    assert(getWinner(Paper, Spock) == 1);
    assert(getWinner(Lizard, Spock) == 1);
    assert(getWinner(Lizard, Rock) == 2);
    assert(getWinner(Spock, Rock) == 1);
    assert(getWinner(Paper, Scissors) == 2);
    assert(getWinner(Lizard, Paper) == 1);
    assert(getWinner(Scissors, Rock) == 2);

    assert(getWinner(Lizard, Lizard) == 0);
}

void printTests() {
    //printf("User has chosen: %s, %d\n\n", choicesNames[userChoice - 1], userChoice);
    testWinner();
    displayWinner(1, Rock, Spock);
    printRandom();
    printf("Tests Passed");
}
