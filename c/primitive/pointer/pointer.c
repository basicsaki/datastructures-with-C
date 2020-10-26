//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"

// #include "./linkedlist/linked.h"

//main menu
void pointermain()
{
    int pointerexit = 0, pointer_option;
    pointer_clear_menu("", 1);
    pointer_banner();
    pointer_submenu();
    while (pointerexit == 0)
    {
        scanf("%d", &pointer_option);
        while (getchar() != '\n')
        {
            continue;
        }

        switch (pointer_option)
        {
        case 1:
            pointer_clear_menu("Type options", 1);
            pointer_submenu();

            printf("Coming soon");
            break;
        case 2:
            pointer_clear_menu("pointer: Linked list", 1);
            // linkedmain();
            pointer_submenu();

            // printf("inside 2");
            break;
        case 0:
            // system("clear");
            pointerexit = 1;
            pointer_clear_menu("Main menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            system("clear");
            pointer_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\n Select a new option\n");
            break;
        }
    }
}
