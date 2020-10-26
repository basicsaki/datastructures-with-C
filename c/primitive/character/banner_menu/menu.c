#include "bm.h"

void character_submenu()
{
    printf("\n\n Select a character type\n\n");
    printf("1. \tArray\n");
    printf("2. \tLinked List\n");
    printf("0. \tBack\n");
    printf("\n\n");
}

void character_clear_menu(char *message, int submenu_show)
{
    system("clear");
    printf("###############%s#############\n", message);
    if (submenu_show != 1)
    {
    }
    else
    {
        character_submenu();
    }
}