#include "bm.h"

void ds_type_submenu()
{
    printf("\n\n Select a DS type\n\n");
    printf("1. \tPrimitive\n");
    printf("2. \tLinear\n");
    printf("3. \tNon Linear\n");
    printf("0. \tBack to the main menu\n");
    printf("\n\n");
}

void ds_type_clear_menu(char *message, int submenu_show)
{
    system("clear");
    printf("###############%s#############\n", message);
    if (submenu_show != 1)
    {
    }
    else
    {
        ds_type_submenu();
    }
}