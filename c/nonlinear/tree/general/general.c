//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"
#include "../../../../common.h"
#include "./traversal/traversal.h"
#include "../display/intdisplay.h"
// #include "./../searchtreenode.h"
#include "./common.h"
#include "types/types.h"
#include "implementation/implementation.h"
// #include "./linkedlist/linked.h"

//main menu
void generalmain()
{
    int generalexit = 0, general_option;
    int element;
    struct generalnode *root = NULL, *treenode = NULL, *type = NULL, *temp;

    general_clear_menu("", 0);
    general_banner();
    general_submenu();
    while (generalexit == 0)
    {
        scanf("%d", &general_option);
        // while (getchar() != '\n')
        // {
        //     continue;
        // }

        switch (general_option)
        {
        case 1:
            general_clear_menu("Tree: General: Basic Information", 1);
            printf("\n\n***COMING SOON**\n\n\n");
            press_enter_to_continue();
            general_clear_menu("General: Menu", 1);
            break;
        case 2:
            general_clear_menu("Tree: General: Implementation", 1);
            printf("\n\n***COMING SOON**\n\n\n");
            press_enter_to_continue();
            general_clear_menu("General: Menu", 1);
            break;
        case 0:
            // clear();
            generalexit = 1;
            general_clear_menu("Nonlinear: Menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            clear();
            general_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect a new option\n");
            break;
        }
    }
}
