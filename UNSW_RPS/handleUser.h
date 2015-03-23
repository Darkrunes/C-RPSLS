#ifndef HANDLEUSER_H

#define HANDLEUSER_H

#include <stdio.h>
#include <ctype.h>

#define INVALID_USER_INPUT -1;

int getUserChoice() {

    char userChoice;
    int validUserChoice;

    scanf("%c", &userChoice);

    if (!isdigit(userChoice)) {
        printf("Please enter the number corresponding to the gesture\n\n");
        return INVALID_USER_INPUT;
    } else {
        validUserChoice = userChoice - '0';
    }

    if (validUserChoice > 5 || validUserChoice < 1) {
        printf("Invalid number entered\n\n");
        return INVALID_USER_INPUT
    } else {
        return validUserChoice;
    }
}

#endif