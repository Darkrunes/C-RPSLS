// Saffat Shams Akanda, z5061498
// The old family favourite: ROCK PAPER SCISSORS LIZARD SPOCK!
// Version 0.2a

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "Choices.h"
#include "Display.h"
#include "handleUser.h"
#include "AI.h"

void printRandom();

int main(int argc, char *argv[]) {
    int userChoice = 0;

    srand(time(0));

    while (userChoice == 0) {
        displayChoices();
        userChoice = getUserChoice();
    }

    printf("User has chosen: %s, %d\n\n", choicesNames[userChoice - 1], userChoice);

    printRandom();

    getchar();
    getchar();

    return EXIT_SUCCESS;
}

void printRandom() {
    for (int i = 0; i < 100; i++)
    {
        printf("%d\n", generateDecision());
    }
}

