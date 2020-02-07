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
#include "implementation/implementation.h"
// #include "./linkedlist/linked.h"

//main menu
void triemain()
{
    int trieexit = 0, trie_option;
    int element;
    struct searchtreenode *root = NULL, *treenode = NULL, *type = NULL, *temp;

    trie_clear_menu("", 0);
    trie_banner();
    trie_submenu();
    while (trieexit == 0)
    {
        scanf("%d", &trie_option);
        // while (getchar() != '\n')
        // {
        //     continue;
        // }

        switch (trie_option)
        {
        case 1:
            trie_clear_menu("Tree: Trie: Basic Information", 1);
            printf("\n\n***COMING SOON**\n\n\n");
            press_enter_to_continue();
            trie_clear_menu("Trie: Menu", 1);
            break;
        case 2:
            trie_clear_menu("Tree: Trie: Implementation", 1);
            printf("\n\n***COMING SOON**\n\n\n");
            press_enter_to_continue();
            trie_clear_menu("Trie: Menu", 1);
            break;
        case 0:
            // system("clear");
            trieexit = 1;
            trie_clear_menu("Main menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            system("clear");
            trie_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect a new option\n");
            break;
        }
    }
}
