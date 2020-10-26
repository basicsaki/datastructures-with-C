#include "bm.h"

void cyclic_submenu()
{
    printf("\n\n Select a cyclic type\n\n");
    printf("1. \tUndirected\n");
    printf("2. \tDirected\n");
    printf("3. \tCyclic\n");
    printf("0. \tBack\n");
    printf("\n\n");
}

void cyclic_clear_menu(char *message, int submenu_show)
{
    system("clear");
    printf("###############%s#############\n", message);
    if (submenu_show != 1)
    {
    }
    else
    {
        cyclic_submenu();
    }
}