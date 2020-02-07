#include "bm.h"
#include "string.h"
#include "../../../../../common.h"

void general_submenu()
{
    printf("Data Structure: Types > Non Linear > Tree > General Tree\n");
    printf("\nPlease select an option from the list items mentioned below\n\n");
    printf("1. \tBasic Information\n");
    printf("2. \tImplementation\n");
    // printf("3. \tInsert an element\n");
    // printf("4. \tDelete an element\n");
    // printf("5. \tSearch an element\n");
    // printf("6. \tPreorder traversal\n");
    // printf("7. \tInorder traversal\n");
    // printf("8. \tPostorder traversal\n");
    // printf("9. \tLevelorder traversal\n");
    // printf("10. \tDisplay tree\n");
    // printf("11. \tDisplay left most minimum node and right most maximum node\n");
    // printf("11. \tTree stats\n");
    printf("0. \tBack\n\n");
}

void general_clear_menu(char *message, int submenu_show)
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
        general_submenu();
    }
}