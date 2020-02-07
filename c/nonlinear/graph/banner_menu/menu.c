#include "bm.h"
#include "string.h"
#include "../../../../common.h"

void graph_submenu()
{
    printf("Data Structure: Types > Non Linear > Graph \n");
    printf("\nPlease select a graph type\n\n");
    printf("1. \tUndirected\n");
    printf("2. \tDirected\n");
    printf("3. \tCyclic\n");
    printf("0. \tBack\n\n");
}

void graph_clear_menu(char *message, int submenu_show)
{
    clear();
    if (strcmp("", message) != 0)
    {
        printf("#######     **%s**     #######\n\n", message);
    }

    if (submenu_show != 1)
    {
    }
    else
    {
        graph_submenu();
    }
}