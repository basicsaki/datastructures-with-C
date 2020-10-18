#include "bm.h"

void singly_submenu()
{
    printf("\n\nWelcome to Singly linked list\n\n");
    printf("1. \tCreate a new list\n");
    printf("2. \tEnter an element in the beginning\n");
    printf("3. \tEnter an element at the end\n");
    printf("4. \tEnter an element at index position\n");
    printf("5. \tEnter an element after an element\n");
    printf("6. \tEnter an element before an element\n");
    printf("7. \tUpdate an element\n");
    printf("8. \tUpdate an element at an index\n");
    printf("9. \tDelete an element\n");
    printf("10. \tDelete an element at an index\n");
    printf("11. \tDisplay the list\n");
    printf("0. \tBack\n");
    printf("\n\n");
}

void singly_clear_menu(char *message, int submenu_show)
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