#ifndef AI

#define AI

#include <stdlib.h>
#include <time.h>


// Will add analysis to make smarter decision later (probably)
int generateDecision() {
    /*
    A random number generator to pick the opponents moves
    */

    int randomDigit;

    randomDigit = (rand() % 5) + 1;

    return randomDigit;
}

#endif