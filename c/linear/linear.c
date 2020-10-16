//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"

#include "./linkedlist/linked.h"

//main menu
void linearmain()
{
    int linearexit = 0, linear_option;
    linear_clear_menu("", 1);
    linear_banner();
    linear_submenu();
    while (linearexit == 0)
    {
        scanf("%d", &linear_option);

        switch (linear_option)
        {
        case 1:
            linear_clear_menu("Type options", 1);
            linear_submenu();

            printf("Coming soon");
            break;
        case 2:
            linear_clear_menu("Linear: Linked list", 1);
            linkedmain();
            linear_submenu();

            // printf("inside 2");
            break;
        case 0:
            // system("clear");
            linearexit = 1;
            linear_clear_menu("Main menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            system("clear");
            linear_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\n Select a new option\n");
            break;
        }
    }
}