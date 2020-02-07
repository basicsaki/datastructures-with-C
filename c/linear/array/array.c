//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"

// #include "./linkedlist/linked.h"

//main menu
void arraymain()
{
    int arrayexit = 0, array_option;
    array_clear_menu("", 1);
    array_banner();
    array_submenu();
    while (arrayexit == 0)
    {
        scanf("%d", &array_option);
        while (getchar() != '\n')
        {
            continue;
        }

        switch (array_option)
        {
        case 1:
            array_clear_menu("Type options", 1);
            array_submenu();

            printf("Coming soon");
            break;
        case 2:
            array_clear_menu("array: Linked list", 1);
            // linkedmain();
            array_submenu();

            // printf("inside 2");
            break;
        case 0:
            // clear();
            arrayexit = 1;
            array_clear_menu("Main menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            array_clear_menu("", 5);
            // clear();
            array_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect a new option\n");
            break;
        }
    }
}
