//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"

// #include "./linkedlist/linked.h"

//main menu
void stackmain()
{
    int stackexit = 0, stack_option;
    stack_clear_menu("", 1);
    stack_banner();
    stack_submenu();
    while (stackexit == 0)
    {
        scanf("%d", &stack_option);
        while (getchar() != '\n')
        {
            continue;
        }

        switch (stack_option)
        {
        case 1:
            stack_clear_menu("Type options", 1);
            stack_submenu();

            printf("Coming soon");
            break;
        case 2:
            stack_clear_menu("stack: Linked list", 1);
            // linkedmain();
            stack_submenu();

            // printf("inside 2");
            break;
        case 0:
            // system("clear");
            stackexit = 1;
            stack_clear_menu("Main menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            system("clear");
            stack_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\n Select a new option\n");
            break;
        }
    }
}
