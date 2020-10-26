#include "bm.h"

void tree_submenu()
{
    printf("\n\n Select a tree type\n\n");
    printf("1. \tGeneral\n");
    printf("2. \tBinary\n");
    printf("3. \tBinary Search\n");
    printf("0. \tBack\n");
    printf("\n\n");
}

void tree_clear_menu(char *message, int submenu_show)
{
    system("clear");
    printf("###############%s#############\n", message);
    if (submenu_show != 1)
    {
    }
    else
    {
        tree_submenu();
    }
}