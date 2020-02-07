#include "bm.h"
#include "string.h"

void tree_submenu()
{
    printf("Data Structure: Types > Non Linear > Tree \n");
    printf("\nPlease select an option from the list items mentioned below\n\n");
    // printf("1. \tGeneral(Coming Soon)\n");
    printf("1. \tBinary\n");
    printf("2. \tBinary Search\n");
    printf("3. \tHeap\n");
    // printf("5. \tTrie(Coming Soon)\n");
    printf("0. \tBack\n\n");
}

void tree_clear_menu(char *message, int submenu_show)
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
        tree_submenu();
    }
}
