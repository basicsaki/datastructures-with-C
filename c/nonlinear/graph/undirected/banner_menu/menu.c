#include "bm.h"
#include "string.h"

void undirected_submenu()
{
    printf("Data Structure: Types > Non Linear > Graph > Undirected\n");
    printf("\nPlease select an option from the list items mentioned below\n\n");
    printf("1. \tBasic Information\n");
    printf("2. \tImplementation\n");
    printf("0. \tBack\n\n");
}

void undirected_clear_menu(char *message, int submenu_show)
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
        undirected_submenu();
    }
}