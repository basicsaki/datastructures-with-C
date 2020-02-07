#include "bm.h"
#include "string.h"

void linear_submenu()
{
    printf("Data Structure: Types > Linear\n");
    printf("\nPlease select a linear type\n\n");
    printf("1. \tLinked List\n");
    printf("2. \tStack\n");
    printf("3. \tQueue\n");
    // printf("4. \tArray\n");
    printf("0. \tBack\n\n");
}

void linear_clear_menu(char *message, int submenu_show)
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
        linear_submenu();
    }
}