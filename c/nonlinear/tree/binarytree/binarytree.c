//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"
#include "../../../../common.h"
#include "../display/characterdisplay.h"

#include "./traversal/traversal.h"
#include "./common.h"
#include "types/types.h"
#include "implementation/implementation.h"
// #include "./linkedlist/linked.h"

//main menu
void binarytreemain()
{
    int binarytreeexit = 0, binarytree_option;
    char newpayload, element;
    struct treenode *root = NULL, *treenode = NULL, *a, *b, *c, *d, *e, *f, *type;

    binarytree_clear_menu("", 0);
    binarytree_banner();
    binarytree_submenu();
    while (binarytreeexit == 0)
    {
        scanf("%d", &binarytree_option);

        switch (binarytree_option)
        {
        case 1:
            binarytree_clear_menu("Tree: Binary Tree: Display", 1);
            displaybtree(root, 0);
            press_enter_to_continue();
            binarytree_clear_menu("Binary Tree: Menu", 1);
            // binarytree_clear_menu("Binary Tree: Menu", 1);
            break;
        case 2:
            binarytree_clear_menu("Tree: Binary Tree: Basic: General Information", 1);
            printf("A binary tree is a hierarchical data structure in which each node has at most two children generally referred as left child and right child.\n");
            printf("Each node contains three components:\n");
            printf("Pointer to left subtree\n");
            printf("Pointer to right subtree\n");
            printf("Data element            \n");
            type = (struct treenode *)malloc(sizeof(struct treenode));

            type = binarytree(type);
            displaybtree(type, 1);
            printf("Root: Topmost node in a tree.\n");
            printf("Parent: Every node (excluding a root) in a tree is connected by a directed edge from exactly one other node. This node is called a parent.\n");
            printf("Child: A node directly connected to another node when moving away from the root.\n");
            printf("Leaf/External node: Node with no children.\n");
            printf("Internal node: Node with atleast one children.\n");
            printf("Depth of a node: Number of edges from root to the node.\n");
            printf("Height of a node: Number of edges from the node to the deepest leaf. Height of the tree is the height of the root.\n");

            verboseflag == 1 ? 1 : 0;
            press_enter_to_continue();
            binarytree_clear_menu("Binary Tree: Menu", 1);
            break;
        case 3:
            binarytree_clear_menu("Tree: Binary Tree: Basic: Types", 1);
            printf("Full binary tree.\n");
            type = fullbinarytree(type);
            displaybtree(type, 1);
            printf("Complete binary tree.\n");
            type = completebinarytree(type);
            displaybtree(type, 1);
            printf("Perfect binary tree.\n");
            type = perfectbinarytree(type);
            displaybtree(type, 1);
            printf("Balanced binary tree.\n");
            type = balancedbinarytree(type);
            displaybtree(type, 1);
            printf("Right Skewed binary tree.\n");
            type = rskewedbinarytree(type);
            displaybtree(type, 1);
            printf("Left Skewed binary tree.\n");
            type = lskewedbinarytree(type);
            displaybtree(type, 1);

            press_enter_to_continue();
            binarytree_clear_menu("Binary Tree: Menu", 1);

            break;
        case 4:
            binarytree_clear_menu("Tree: Binary Tree: Insert:  Initialize/Insert an element", 1);
            while (getchar() != '\n')
            {
                continue;
            }

            if (root == NULL)
            {
                printf("Enter root payload \n");
                scanf("%c", &newpayload);
            }
            else
            {
                displaybtree(root, 0);
                printf("Select a node element from the tree\n");
                scanf(" %c", &element);

                printf("\nEnter new payload to be added\n");
                scanf(" %c", &newpayload);
            }
            root = insertTreeNode(root, element, newpayload);
            // displaybtree(root);
            press_enter_to_continue();
            binarytree_clear_menu("Binary Tree: Menu", 1);

            break;
        case 5:
            binarytree_clear_menu("Tree: Binary Tree: Display: Traversal: Preorder", 1);
            preorder(root);
            press_enter_to_continue();
            binarytree_clear_menu("Binary Tree: Menu", 1);
            // binarytree_clear_menu("Binary Tree: Menu", 1);
            break;
        case 6:
            binarytree_clear_menu("Tree: Binary Tree: Display: Traversal: Inorder", 1);
            inorder(root);
            press_enter_to_continue();
            binarytree_clear_menu("Binary Tree: Menu", 1);
            break;
        case 7:
            binarytree_clear_menu("Tree: Binary Tree: Display: Traversal: Postorder", 1);
            postorder(root);
            press_enter_to_continue();
            binarytree_clear_menu("Binary Tree: Menu", 1);
            break;
        case 8:
            binarytree_clear_menu("Tree: Binary Tree: Display: Traversal: Level Order", 1);
            levelorder(root);
            press_enter_to_continue();
            binarytree_clear_menu("Binary Tree: Menu", 1);
            break;
        case 9:
            binarytree_clear_menu("Tree: Binary Tree: Search", 1);
            while (getchar() != '\n')
            {
                continue;
            }

            printf("Select a node element from the tree for search\n");

            scanf("%c", &element);
            a = levelsearch(root, element);
            press_enter_to_continue();
            binarytree_clear_menu("Binary Tree: Menu", 1);
            break;
        case 10:
            binarytree_clear_menu("Tree: Binary Tree: Stats", 1);
            levelcount(root);
            int heighty;
            heighty = height(root);
            printf("Height: %d\n", heighty);
            press_enter_to_continue();
            binarytree_clear_menu("Binary Tree: Menu", 1);
            break;
        case 11:
            binarytree_clear_menu("binarytree: Linked list", 1);
            // linkedmain();
            binarytree_submenu();
            // printf("inside 2");
            break;
        case 12:
            binarytree_clear_menu("binarytree: Linked list", 1);
            // linkedmain();
            binarytree_submenu();

            // printf("inside 2");
            break;
        case 13:
            binarytree_clear_menu("Displaying tree", 1);
            displaybtree(root, 0);
            press_enter_to_continue();
            binarytree_clear_menu("Binary Tree: Menu", 1);
            break;
        case 0:
            // clear();
            binarytreeexit = 1;
            binarytree_clear_menu("Tree: Menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            clear();
            binarytree_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect a new option\n");
            break;
        }
    }
}
