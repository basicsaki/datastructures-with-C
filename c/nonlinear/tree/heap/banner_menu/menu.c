#include "bm.h"
#include "string.h"
#include "../../../../../common.h"

void heap_submenu()
{
    printf("Data Structure: Types > Non Linear > Tree > Heap\n");
    printf("\nPlease select an option from the list items mentioned below\n\n");
    printf("1. \tDisplay: Tree\n");
    printf("2. \tBasic: General Information\n");
    printf("3. \tInsert: Initialize/Insert an element\n");
    printf("4. \tDelete: Search and delete\n");
    // printf("5. \tSearch\n");
    printf("5. \tDisplay: Tree Stats\n");
    printf("0. \tBack\n\n");
}

void heap_clear_menu(char *message, int submenu_show)
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
        heap_submenu();
    }
}