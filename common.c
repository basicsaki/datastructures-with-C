#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include "common.h"

void press_enter_to_continue()
{
    //To stop the terminal - barely working for linux
    char ch = 0;
    printf("\nPress [Enter] to Continue\n");
    while (ch != '\n' && ch != '\r')
    {
        ch = getchar();
    }
    ch = 0;
    getchar();
}

void clear()
{
#if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
    system("clear");
#endif

#if defined(_WIN32) || defined(_WIN64)
    system("cls");
#endif
}