#include "bm.h"
#include "string.h"
#include "../../../../common.h"

void array_submenu()
{
    printf("\n\nSelect array type\n\n");
    printf("1. \tArray\n");
    printf("2. \tLinked List\n");
    printf("0. \tBack\n\n");
}

void array_clear_menu(char *message, int submenu_show)
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
        array_submenu();
    }
}