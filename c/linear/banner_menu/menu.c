#include "bm.h"

void linear_submenu()
{
    printf("\n\n Select a Linear type\n\n");
    printf("1. \tArray\n");
    printf("2. \tLinked List\n");
    printf("0. \tBack to the DS type\n");
    printf("\n\n");
}

void linear_clear_menu(char *message, int submenu_show)
{
    system("clear");
    printf("###############%s#############\n", message);
    if (submenu_show != 1)
    {
    }
    else
    {
        linear_submenu();
    }
}