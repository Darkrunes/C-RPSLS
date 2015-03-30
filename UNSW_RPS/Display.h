#ifndef DISPLAY_H

#define DISPLAY_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "Choices.h"


void displayChoices() {
    /*
    Prints out all the possible gestures the player can choose
    */


    printf("Please enter the number of the gesture you would like to make.\n");

    for (int i = Rock; i <= Lizard; i++) {
        printf("%s: %d\n", choicesNames[i], i);
    }

}

void displayWinner(int winner, int playerGesture, int AIGesture) {
    /*
    Given the winner and both players gestures they are printed to the 
    terminal,
    ~~~~~~~~~TODO: ADD ASCII ART ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    */

    switch (winner) {
        case 0: printf("It was a tie!\n"); break;
        case 1: printf("You are victorious!\n"); break;
        case 2: printf("AI Victorious!\n"); break;
        default: {
            printf("U dun goofed, Display.h, Function: displayWinner\n");
            assert(1 > 2);
        }
    }
    
    printf("Your Gesture: %-40s AI Gesture: %s\n", choicesNames[playerGesture], choicesNames[AIGesture]);
}


#endif

