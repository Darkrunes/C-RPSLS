#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

enum Choices
{
    Rock = 1,
    Paper,
    Scissors,
    Spock,
    Lizard,
};

int main(int argc, char * argv[]) {

    enum Choices choice;

    for (int i = Rock; i <= Lizard; i++) {
        printf("%d", i);
    }

    getchar();
}