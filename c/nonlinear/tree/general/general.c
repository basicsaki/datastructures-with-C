//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"

// #include "./linkedlist/linked.h"

//main menu
void generalmain()
{
    int generalexit = 0, general_option;
    general_clear_menu("", 1);
    general_banner();
    general_submenu();
    while (generalexit == 0)
    {
        scanf("%d", &general_option);
        while (getchar() != '\n')
        {
            continue;
        }

        switch (general_option)
        {
        case 1:
            general_clear_menu("Type options", 1);
            general_submenu();

            printf("Coming soon");
            break;
        case 2:
            general_clear_menu("general: Linked list", 1);
            // linkedmain();
            general_submenu();

            // printf("inside 2");
            break;
        case 0:
            // system("clear");
            generalexit = 1;
            general_clear_menu("Main menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            system("clear");
            general_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\n Select a new option\n");
            break;
        }
    }
}
