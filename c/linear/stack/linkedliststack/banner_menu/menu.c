#include "bm.h"
#include "string.h"
#include "../../../../../common.h"

void linkedliststack_submenu()
{
    printf("Data Structure: Types > Linear > Stack > Using LinkedList\n");
    printf("\nPlease select an option from the list items mentioned below\n\n");
    printf("1. \tDisplay\n");
    printf("2. \tInsert:  Push\n");
    printf("3. \tDelete:  Pop\n");
    printf("4. \tDisplay: Count\n");
    printf("5. \tDisplay: Top element\n");
    printf("0. \tBack\n\n");
}

void linkedliststack_clear_menu(char *message, int submenu_show)
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
        linkedliststack_submenu();
    }
}