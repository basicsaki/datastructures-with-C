#include "bm.h"

void singly_submenu()
{
    printf("\n\nWelcome to Singly linked list\n\n");
    printf("1. \tCreate a new list\n");
    printf("2. \tDisplay the list\n");
    printf("0. \tBack to the main menu\n");
    printf("\n\n");
}

void clear_menu(char *message, int submenu_show)
{
    system("clear");
    printf("###############%s#############\n", message);
    if (submenu_show != 1)
    {
    }
    else
    {
        singly_submenu();
    }
}