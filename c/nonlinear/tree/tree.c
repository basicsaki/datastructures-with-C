//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"

#include "./general/general.h"
#include "./binarytree/binarytree.h"
#include "./binarysearchtree/binarysearchtree.h"

//main menu
void treemain()
{
    int treeexit = 0, tree_option;
    tree_clear_menu("", 1);
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
        case 1:
            tree_clear_menu("General", 1);
            generalmain();
            tree_submenu();

            printf("Coming soon");
            break;
        case 2:
            tree_clear_menu("Binary", 1);
            binarytreemain();
            tree_submenu();

            // printf("inside 2");
            break;
        case 3:
            tree_clear_menu("Binary Search", 1);
            binarysearchmain();
            tree_submenu();

            break;

        case 0:
            // system("clear");
            treeexit = 1;
            tree_clear_menu("Main menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            system("clear");
            tree_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\n Select a new option\n");
            break;
        }
    }
}
