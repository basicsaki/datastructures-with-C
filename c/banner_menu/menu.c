#include "bm.h"
#include "string.h"
#include "../../common.h"

void ds_type_submenu()
{
    printf("Data Structure: Types\n");
    printf("\nPlease select a data structure type\n\n");
    printf("1. \tPrimitive\n");
    printf("2. \tLinear\n");
    printf("3. \tNon Linear\n");
    printf("0. \tBack\n\n");
}

void ds_type_clear_menu(char *message, int submenu_show)
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
        ds_type_submenu();
    }
}