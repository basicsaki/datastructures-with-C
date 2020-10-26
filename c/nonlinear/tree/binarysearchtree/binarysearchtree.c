//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"

// #include "./linkedlist/linked.h"

//main menu
void binarysearchmain()
{
    int binarysearchexit = 0, binarysearch_option;
    binarysearch_clear_menu("", 1);
    binarysearch_banner();
    binarysearch_submenu();
    while (binarysearchexit == 0)
    {
        scanf("%d", &binarysearch_option);
        while (getchar() != '\n')
        {
            continue;
        }

        switch (binarysearch_option)
        {
        case 1:
            binarysearch_clear_menu("Type options", 1);
            binarysearch_submenu();

            printf("Coming soon");
            break;
        case 2:
            binarysearch_clear_menu("binarysearch: Linked list", 1);
            // linkedmain();
            binarysearch_submenu();

            // printf("inside 2");
            break;
        case 0:
            // system("clear");
            binarysearchexit = 1;
            binarysearch_clear_menu("Main menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            system("clear");
            binarysearch_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\n Select a new option\n");
            break;
        }
    }
}
