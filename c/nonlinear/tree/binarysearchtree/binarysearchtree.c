//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"
#include "../../../../common.h"
#include "./traversal/traversal.h"
#include "../display/intdisplay.h"
#include "./common.h"
#include "types/types.h"
#include "./../searchtreenode.h"
#include "implementation/implementation.h"
// #include "./linkedlist/linked.h"

//main menu
void binarysearchtreemain()
{
    int binarysearchtreeexit = 0, binarysearchtree_option;
    int element, height = 0;
    struct searchtreenode *root = NULL, *treenode = NULL, *type = NULL, *temp;

    binarysearchtree_clear_menu("", 0);
    binarysearchtree_banner();
    binarysearchtree_submenu();
    while (binarysearchtreeexit == 0)
    {
        scanf("%d", &binarysearchtree_option);
        // while (getchar() != '\n')
        // {
        //     continue;
        // }

        switch (binarysearchtree_option)
        {
        case 1:
            binarysearchtree_clear_menu("Binary Search Tree: Display", 1);
            displaybsttree(root, 0);
            press_enter_to_continue();
            binarysearchtree_clear_menu("Binary Search Tree: Menu", 1);
            break;
        case 2:
            binarysearchtree_clear_menu("Tree: Binary Search Tree: General Information", 1);
            printf("Binary Search Tree is a node-based binary tree data structure which has the following properties:\n");
            printf("The left subtree of a node contains only nodes with keys lesser than the node’s key.\n");
            printf("The right subtree of a node contains only nodes with keys greater than the node’s key.\n");
            printf("The left and right subtree each must also be a binary search tree.\n");
            type = (struct searchtreenode *)malloc(sizeof(struct searchtreenode));
            type = binarysearchtreeg(type);
            displaybsttree(type, 1);
            verboseflag == 1 ? 1 : 0;
            press_enter_to_continue();
            binarysearchtree_clear_menu("Binary Search Tree: Menu", 1);
            break;
        case 3:
            binarysearchtree_clear_menu("Tree: Binary Search Tree: Initialize", 1);
            printf("Enter a root element\n");
            scanf("%d", &element);
            root = NULL;
            root = initbstnode(root, element);
            displaybsttree(root, 0);
            // verboseflag == 1 ? 1 : 0;
            press_enter_to_continue();
            binarysearchtree_clear_menu("Binary Search Tree: Menu", 1);
            break;
        case 4:
            binarysearchtree_clear_menu("Binary Search Tree: Insert", 1);
            if (root == NULL)
            {
                printf("Enter root payload \n");
                scanf("%d", &element);
                root = initbstnode(root, element);
            }
            else
            {
                printf("\nEnter new payload to be added\n");
                scanf(" %d", &element);
                root = insertBSTreeNodeRecursion(root, element);
            }
            displaybsttree(root, 0);

            press_enter_to_continue();
            binarysearchtree_clear_menu("Binary Search Tree: Menu", 1);
            break;
        case 5:
            binarysearchtree_clear_menu("Binary Search Tree: Delete", 1);
            printf("\nEnter payload to be deleted\n");
            scanf(" %d", &element);
            root = deleteBSTreeNode(root, element);
            // printf("\n Deleted node value %d\n", root->payload);
            press_enter_to_continue();
            binarysearchtree_clear_menu("Binary Search Tree: Menu", 1);
            break;
        case 6:
            binarysearchtree_clear_menu("Binary Search Tree: Search", 1);
            printf("Select a node element from the tree for search\n");
            scanf("%d", &element);
            temp = bstsearch(root, element);
            if (temp == NULL)
            {
                printf("\nElement not found\n");
            }
            else
            {
                displaybsttree(root, 0);
                printf("\nElement found %d", temp->payload);
            }

            press_enter_to_continue();
            binarysearchtree_clear_menu("Binary Search Tree: Menu", 1);
            break;
        case 7:
            binarysearchtree_clear_menu("Binary Search Tree: Display: Traversal: Preorder", 1);
            if (root == NULL)
            {
                printf("BST empty\n");
            }
            else
            {
                bstpreorder(root);
            }
            press_enter_to_continue();
            binarysearchtree_clear_menu("Binary Search Tree: Menu", 1);
            break;
        case 8:
            binarysearchtree_clear_menu("Binary Search Tree: Display: Traversal: Inorder", 1);
            if (root == NULL)
            {
                printf("BST empty\n");
            }
            else
            {
                bstinorder(root);
            }

            press_enter_to_continue();
            binarysearchtree_clear_menu("Binary Search Tree: Menu", 1);
            break;
        case 9:
            binarysearchtree_clear_menu("Binary Search Tree: Display: Traversal: Postorder", 1);
            if (root == NULL)
            {
                printf("BST empty\n");
            }
            else
            {
                bstpostorder(root);
            }

            press_enter_to_continue();
            binarysearchtree_clear_menu("Binary Search Tree: Menu", 1);
            break;
        case 10:
            binarysearchtree_clear_menu("Binary Search Tree: Display: Traversal: Levelorder", 1);
            if (root == NULL)
            {
                printf("BST empty\n");
            }
            else
            {
                bstlevelorder(root);
            }

            press_enter_to_continue();
            binarysearchtree_clear_menu("Binary Search Tree: Menu", 1);

            break;
        case 11:
            binarysearchtree_clear_menu("Binary Search Tree: Stats", 1);
            if (root == NULL)
            {
                printf("BST empty\n");
            }
            else
            {
                bstmaxminstats(root);
            }

            press_enter_to_continue();
            binarysearchtree_clear_menu("Binary Search Tree: Menu", 1);

            break;
        case 12:
            binarysearchtree_clear_menu("Binary Search Tree: Height", 1);
            if (root == NULL)
            {
                printf("BST empty\n");
            }
            else
            {
                height = bstheight(root);
                printf("Height : %d", height);
            }

            press_enter_to_continue();
            binarysearchtree_clear_menu("Binary Search Tree: Menu", 1);
            break;
        case 13:
            binarysearchtree_clear_menu("Displaying tree", 1);
            height = bstmaxrightheight(root, 0);
            printf("Max height is %d", height);
            press_enter_to_continue();
            binarysearchtree_clear_menu("Binary Search Tree: Menu", 1);

            break;
        case 0:
            // clear();
            binarysearchtreeexit = 1;
            binarysearchtree_clear_menu("Tree: Menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            clear();
            binarysearchtree_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect a new option\n");
            break;
        }
    }
}
