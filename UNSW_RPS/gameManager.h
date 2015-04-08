#ifndef GAME_MANAGER_H
#define GAME_MANAGER_H

#include "prototypes.h"

void gameMangerMain(int playerChoice) {
    int AIChoice = generateDecision();
    int winner = getWinner(playerChoice, AIChoice);

    displayWinner(winner, playerChoice, AIChoice);
}


int getWinner(int playerChoice, int AIChoice) {
    /*
    Uses modular arithmetic to to determine the winner off any 
    particular game
    Reference: http://en.wikipedia.org/wiki/Rock-paper-scissors#Additional_weapons
    */

    int difference = (5 + playerChoice - AIChoice);
    int remainder = difference % 5;

    switch (remainder) {
        case 1:
        case 3:     return 1;      // Human Victorious
        case 2:
        case 4:     return 2;      // AI Victorious
        default:    return 0;      // Tie :(
    }
}

#endif