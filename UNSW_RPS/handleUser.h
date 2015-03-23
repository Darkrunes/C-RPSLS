#ifndef HANDLEUSER_H

#define HANDLEUSER_H

#include <stdio.h>
#include <ctype.h>

#define INVALID_USER_INPUT 0;

int getUserChoice() {
    int userInput;
    char charValue;

    scanf("%c", &charValue);
    userInput = getIntValue(charValue);
    
    if (validateInput(userInput, charValue)) {
        return userInput;
    } else {
        return INVALID_USER_INPUT;
    }
}

int validateInput(int userInput, char charValue) {

    // isDigit uses char inputs
    if (!isdigit(charValue)) {
        printf("Please enter the number corresponding to the gesture\n\n");
        return INVALID_USER_INPUT;
    }

    if (userInput > 5 || userInput < 1) {
        printf("Invalid number entered\n\n");
        return INVALID_USER_INPUT
    } else {
        return userInput;
    }
}

int getIntValue(char charValue) {
    return (charValue - '0');
}

#endif