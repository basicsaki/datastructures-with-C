#include "bm.h"
#include "string.h"
#include "../../../../../common.h"

void directed_submenu()
{
    printf("Data Structure: Types > Non Linear > Graph > Directed\n");
    printf("\nPlease select an option from the list items mentioned below\n\n");
    printf("1. \tBasic Information\n");
    printf("2. \tImplementation\n");
    printf("0. \tBack\n\n");
}

void directed_clear_menu(char *message, int submenu_show)
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
        directed_submenu();
    }
}