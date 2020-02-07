#include "bm.h"
#include "string.h"
#include "../../../../../common.h"

void binarysearchtree_submenu()
{
    printf("Data Structure: Types > Non Linear > Tree > Binary Search Tree\n");
    printf("\nPlease select an option from the list items mentioned below\n\n");
    printf("1. \tDisplay: Tree\n");
    printf("2. \tBasic: General Information\n");
    printf("3. \tInitialize\n");
    printf("4. \tInsert\n");
    printf("5. \tDelete\n");
    printf("6. \tSearch\n");
    printf("7. \tDisplay: Traversal: Preorder\n");
    printf("8. \tDisplay: Traversal: Inorder\n");
    printf("9. \tDisplay: Traversal: Postorder\n");
    printf("10.\tDisplay: Traversal: Levelorder\n");
    printf("11.\tDisplay: Tree: Stats\n");
    printf("12.\tDisplay: Tree: Height\n");
    printf("0. \tBack\n\n");
}

void binarysearchtree_clear_menu(char *message, int submenu_show)
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
        binarysearchtree_submenu();
    }
}