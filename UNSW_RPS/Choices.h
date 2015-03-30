#ifndef CHOICES_H

#define CHOICES_H

enum Choices
{
    Rock,
    Paper,
    Scissors,
    Spock,
    Lizard,
};

// Used to display names of selected gestures
const char *choicesNames[] = { "Rock", "Paper", "Scissors", "Spock", "Lizard" };

/*
Used to store victories and decisions over 100 games.
~~~~~~~~~~~~~~~~~~~~~~ TODO: STORE INTO FILE FOR LATER USE ~~~~~~~~~~~~
*/
char *playerOneChoices[100];
char *AIChoices[100];
int victories[100];

#endif