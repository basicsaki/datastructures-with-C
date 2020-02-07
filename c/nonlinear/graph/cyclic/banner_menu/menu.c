#include "bm.h"
#include "string.h"
#include "../../../../../common.h"

void cyclic_submenu()
{
    printf("Data Structure: Types > Non Linear > Graph > Cyclic\n");
    printf("\nPlease select an option from the list items mentioned below\n\n");
    printf("1. \tBasic Information\n");
    printf("2. \tImplementation\n");
    printf("0. \tBack\n\n");
}

void cyclic_clear_menu(char *message, int submenu_show)
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
        cyclic_submenu();
    }
}