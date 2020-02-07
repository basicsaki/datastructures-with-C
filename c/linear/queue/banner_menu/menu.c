#include "bm.h"
#include "string.h"

void queue_submenu()
{
    printf("Data Structure: Types > Linear > Queue\n");
    printf("\nPlease select an option from the list items mentioned below\n\n");
    printf("1. \tUsing Array\n");
    printf("2. \tUsing linked list\n");
    printf("0. \tBack\n\n");
}

void queue_clear_menu(char *message, int submenu_show)
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
        queue_submenu();
    }
}