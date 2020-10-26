#include "bm.h"

void undirected_submenu()
{
    printf("\n\n Select a undirected type\n\n");
    printf("1. \tUndirected\n");
    printf("2. \tDirected\n");
    printf("3. \tCyclic\n");
    printf("0. \tBack\n");
    printf("\n\n");
}

void undirected_clear_menu(char *message, int submenu_show)
{
    system("clear");
    printf("###############%s#############\n", message);
    if (submenu_show != 1)
    {
    }
    else
    {
        undirected_submenu();
    }
}