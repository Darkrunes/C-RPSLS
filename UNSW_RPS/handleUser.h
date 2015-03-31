#ifndef HANDLEUSER_H

#define HANDLEUSER_H

#pragma warning (disable : 4996)

#include <stdio.h>
#include <ctype.h>

#define INVALID_USER_INPUT -1;

int getUserChoice() {
    /*
    isDigit takes in char inputs... (wish i could overload functions in C)
    The functions takes in input from the user validates usign a 
    sub function then returns to the calling function the input
    */
    int userInput;
    char charValue;

    // Scanf leaves \n in the buffer this must be accounted for when
    // using multiple scanfs, buffer is not cleared upon leaving function
    scanf("\n%c", &charValue);
    userInput = getIntValue(charValue);
    
    if (validateInput(userInput, charValue) != -1) {
        return userInput;
    } else {
        return INVALID_USER_INPUT;
    }
}

int validateInput(int userInput, char charValue) {
    /*
    Ensures that user input is a number between 1 and 5
    */

    // isDigit uses char inputs
    if (!isdigit(charValue)) {
        printf("Unknown character entered\n\n");
        return INVALID_USER_INPUT;
    }

    if (userInput > 4 || userInput < 0) {
        printf("Invalid number entered\n\n");
        return INVALID_USER_INPUT
    } else {
        return userInput;
    }
}

int getIntValue(char charValue) {
    /*
    This function gets the integer value of a number given the ASCII code
    int = ASCII Value - ASCII(0)
    */

    return (charValue - '0');
}

#endif