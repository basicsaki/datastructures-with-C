#include "bm.h"

void nonlinear_submenu()
{
    printf("\n\n Select a Non Linear type\n\n");
    printf("1. \tTree\n");
    printf("2. \tGraph\n");
    printf("0. \tBack\n");
    printf("\n\n");
}

void nonlinear_clear_menu(char *message, int submenu_show)
{
    system("clear");
    printf("###############%s#############\n", message);
    if (submenu_show != 1)
    {
    }
    else
    {
        nonlinear_submenu();
    }
}