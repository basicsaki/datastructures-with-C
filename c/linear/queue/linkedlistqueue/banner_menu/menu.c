#include "bm.h"
#include "string.h"

void linkedlistqueue_submenu()
{
    printf("Data Structure: Types > Linear > Queue > Using LinkedList\n");
    printf("\nPlease select an option from the list items mentioned below\n\n");
    printf("1. \tDisplay\n");
    printf("2. \tInsert:  Enqueue\n");
    printf("3. \tDelete:  Dequeue\n");
    printf("4. \tDisplay: Count\n");
    printf("5. \tDisplay: Front and rear element\n");
    printf("0. \tBack\n\n");
}

void linkedlistqueue_clear_menu(char *message, int submenu_show)
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
        linkedlistqueue_submenu();
    }
}