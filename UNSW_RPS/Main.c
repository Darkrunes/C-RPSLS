#pragma warning (disable : 4996)

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "Choices.h"
#include "Display.h"
#include "handleUser.h"

int main(int argc, char * argv[]) {
    int userChoice = -1;

    while (userChoice == -1) {
        displayChoices();
        userChoice = getUserChoice();
    }
    printf("User has chosen: %s, %d\n\n", choicesNames[userChoice - 1], userChoice);

    getchar();
    getchar();

    return EXIT_SUCCESS;
}

