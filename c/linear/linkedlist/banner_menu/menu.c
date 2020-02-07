#include "bm.h"
#include "string.h"

void linked_submenu()
{
    printf("Data Structure: Types > Linear > LinkedList\n");
    printf("\nPlease select a linked list type\n\n");
    printf("1. \tSingly Linked list\n");
    printf("2. \tDoubly Linked list\n");
    printf("3. \tCircular Linked List\n");
    printf("0. \tBack\n\n");
}

void linked_clear_menu(char *message, int submenu_show)
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
        linked_submenu();
    }
}