#include "bm.h"
#include "string.h"
#include "../../../../../common.h"

void binarytree_submenu()
{
    printf("Data Structure: Types > Non Linear > Tree > Binary Tree\n");
    printf("\nPlease select an option from the list items mentioned below\n\n");
    printf("1. \tDisplay: Tree\n");
    printf("2. \tBasic: General Information\n");
    printf("3. \tBasic: Types\n");
    printf("4. \tInsert: Initialize/Insert an element(Enter a single Character)\n");
    printf("5. \tDisplay: Traversal: Preorder\n");
    printf("6. \tDisplay: Traversal: Inorder\n");
    printf("7. \tDisplay: Traversal: Postorder\n");
    printf("8. \tDisplay: Traversal: Levelorder\n");
    printf("9. \tSearch(Enter a single Character)\n");
    printf("10.\tDisplay: Tree stats\n");
    printf("0. \tBack\n\n");
}

void binarytree_clear_menu(char *message, int submenu_show)
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
        binarytree_submenu();
    }
}