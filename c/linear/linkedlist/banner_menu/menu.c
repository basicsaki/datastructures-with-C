#include "bm.h"

void linked_submenu()
{
    printf("\n\n\nPlease select an option from the list items below\n\n\a");
    printf("1. \tSingly Linked list\n");
    printf("2. \tDoubly Linked list\n");
    printf("3. \tCircular Linked List\n");
    printf("0. \tExit\n");
    printf("\n\n");
}

void linked_clear_menu(char *message, int submenu_show)
{
    system("clear");
    printf("###############%s#############\n", message);
    if (submenu_show != 1)
    {
    }
    else
    {
        linked_submenu();
    }
}