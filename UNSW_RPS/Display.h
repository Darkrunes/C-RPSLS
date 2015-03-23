#ifndef DISPLAY_H

#define DISPLAY_H

#include <stdio.h>
#include <stdlib.h>
#include "Choices.h"


void displayChoices(void) {

    printf("Please enter the number of the gesture you would like to make.\n");

    for (int i = Rock; i <= Spock; i++) {
        printf("%s: %d\n", choicesNames[(i-1)], i);
    }

}

void displayGeneratedGesture(int gesture) {
    printf("NOT YET IMPLEMENTED");
    assert(1 > 2);
}


#endif

