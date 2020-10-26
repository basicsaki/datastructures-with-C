#include "bm.h"

void directed_submenu()
{
    printf("\n\n Select a directed type\n\n");
    printf("1. \tUndirected\n");
    printf("2. \tDirected\n");
    printf("3. \tCyclic\n");
    printf("0. \tBack\n");
    printf("\n\n");
}

void directed_clear_menu(char *message, int submenu_show)
{
    system("clear");
    printf("###############%s#############\n", message);
    if (submenu_show != 1)
    {
    }
    else
    {
        directed_submenu();
    }
}