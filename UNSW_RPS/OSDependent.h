#ifndef OSDEPENDENT_H
#define OSDEPENDENT_H

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

void sleepTime() {
#ifdef _WIN32
    Sleep(1000);
#else
    usleep(1);
#endif 
}

#endif