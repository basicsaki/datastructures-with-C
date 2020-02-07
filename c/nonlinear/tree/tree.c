//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"

#include "./general/general.h"
#include "./binarytree/binarytree.h"
#include "./binarysearchtree/binarysearchtree.h"
#include "./heap/heap.h"
#include "./trie/trie.h"

//main menu
void treemain()
{
    int treeexit = 0, tree_option;
    tree_clear_menu("", 0);
    tree_banner();
    tree_submenu();
    while (treeexit == 0)
    {
        scanf("%d", &tree_option);
        while (getchar() != '\n')
        {
            continue;
        }

        switch (tree_option)
        {
        case 5:
            tree_clear_menu("Tree: General", 1);
            generalmain();
            tree_clear_menu("Tree: Menu", 1);
            break;
        case 1:
            tree_clear_menu("Tree: Binary", 1);
            binarytreemain();
            tree_clear_menu("Tree: Menu", 1);
            break;
        case 2:
            tree_clear_menu("Tree: Binary Search", 1);
            binarysearchtreemain();
            tree_clear_menu("Tree: Menu", 1);
            break;
        case 3:
            tree_clear_menu("Tree: Heap", 1);
            heapmain();
            tree_clear_menu("Tree: Menu", 1);
            break;
        case 4:
            tree_clear_menu("Tree: Trie", 1);
            triemain();
            tree_clear_menu("Tree: Menu", 1);
            break;
        case 0:
            // clear();
            treeexit = 1;
            tree_clear_menu("DS type: Menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            tree_clear_menu("", 5);
            tree_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect a new option\n");
            break;
        }
    }
}
