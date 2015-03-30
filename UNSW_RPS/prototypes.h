#ifndef PROTOTYPES_H
#define PROTOTYPES_H



// Prototypes seperated into blocks for each header or c file

// Gamemanager.h
int getWinner(int playerChoice, int AIChoice);

// handleUser.h
int getUserChoice();
int validateInput(int userInput, char charValue);
int getIntValue(char charValue);

// AI.h
int generateDecision();

// Display.h
void displayChoices();
void displayWinner(int winner, int winGesture, int loseGesture);

// OSDepdendent.h
void sleepTime();

// main.c
void testWinner();
void emptyConsole();
void printTests();
void printRandom();

#endif