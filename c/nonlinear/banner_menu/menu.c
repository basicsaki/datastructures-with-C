#include "bm.h"
#include "string.h"

void nonlinear_submenu()
{

    printf("Data Structure: Types > Non Linear\n");
    printf("\nPlease select a non linear type\n\n");
    printf("1. \tTree\n");
    printf("2. \tGraph(Coming Soon)\n");
    printf("0. \tBack\n\n");
}

void nonlinear_clear_menu(char *message, int submenu_show)
{
    system("clear");
    if (strcmp("", message) != 0)
    {
        printf("#######     **%s**     #######\n\n", message);
    }

    if (submenu_show != 1)
    {
    }
    else
    {
        nonlinear_submenu();
    }
}