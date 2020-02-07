#include "bm.h"
#include "string.h"
#include "../../../../common.h"

void stack_submenu()
{

    printf("Data Structure: Types > Linear > Stack\n");
    printf("\nPlease select an option from the list items mentioned below\n\n");
    printf("1. \tUsing Array\n");
    printf("2. \tUsing Linked list\n");
    printf("0. \tBack\n\n");
}

void stack_clear_menu(char *message, int submenu_show)
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
        stack_submenu();
    }
}