//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"

// #include "./linkedlist/linked.h"

//main menu
void binarytreemain()
{
    int binarytreeexit = 0, binarytree_option;
    binarytree_clear_menu("", 1);
    binarytree_banner();
    binarytree_submenu();
    while (binarytreeexit == 0)
    {
        scanf("%d", &binarytree_option);
        while (getchar() != '\n')
        {
            continue;
        }

        switch (binarytree_option)
        {
        case 1:
            binarytree_clear_menu("Type options", 1);
            binarytree_submenu();

            printf("Coming soon");
            break;
        case 2:
            binarytree_clear_menu("binarytree: Linked list", 1);
            // linkedmain();
            binarytree_submenu();

            // printf("inside 2");
            break;
        case 0:
            // system("clear");
            binarytreeexit = 1;
            binarytree_clear_menu("Main menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            system("clear");
            binarytree_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\n Select a new option\n");
            break;
        }
    }
}
