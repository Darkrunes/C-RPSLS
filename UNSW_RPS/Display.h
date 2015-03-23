#ifndef DISPLAY_H
#define DISPLAY_H

#include <stdlib.h>
#include "Choices.h"


void displayChoices(void) {

    for (int i = Rock; i <= Lizard; i++) {
        printf("%d", i);
    }
}


#endif

