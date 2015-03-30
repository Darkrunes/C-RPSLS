#ifndef OSDEPENDENT_H
#define OSDEPENDENT_H

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

void sleepTime() {
#ifdef _WIN32
    Sleep(500);
#else
    usleep(1);
#endif 
}
/* Really dont want to do OS specific screen clears... too much work 
to get it to work with windows :|

void clearConsole() {
#ifdef _WIN32
#else
    const char* CLEARSCREEN = "\e[1;1H\e[2J";
    write(STDOUT_FILENO, CLEARSCREEN, 12);
#endif
}
*/



#endif