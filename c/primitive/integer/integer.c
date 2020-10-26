//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"

// #include "./linkedlist/linked.h"

//main menu
void integermain()
{
    int integerexit = 0, integer_option;
    integer_clear_menu("", 1);
    integer_banner();
    integer_submenu();
    while (integerexit == 0)
    {
        scanf("%d", &integer_option);
        while (getchar() != '\n')
        {
            continue;
        }

        switch (integer_option)
        {
        case 1:
            integer_clear_menu("Type options", 1);
            integer_submenu();

            printf("Coming soon");
            break;
        case 2:
            integer_clear_menu("integer: Linked list", 1);
            // linkedmain();
            integer_submenu();

            // printf("inside 2");
            break;
        case 0:
            // system("clear");
            integerexit = 1;
            integer_clear_menu("Main menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            system("clear");
            integer_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\n Select a new option\n");
            break;
        }
    }
}
