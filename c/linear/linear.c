//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"

#include "./array/array.h"
#include "./linkedlist/linked.h"
#include "./queue/queue.h"
#include "./stack/stack.h"

//main menu
void linearmain()
{
    int linearexit = 0, linear_option;
    linear_clear_menu("", 0);
    linear_banner();
    linear_submenu();
    while (linearexit == 0)
    {
        scanf("%d", &linear_option);
        while (getchar() != '\n')
        {
            continue;
        }

        switch (linear_option)
        {
        case 1:
            linear_clear_menu("", 0);
            linkedmain();
            linear_submenu();
            linear_clear_menu("Linear DS: Menu", 1);
            break;
        case 2:
            linear_clear_menu("", 0);
            stackmain();
            linear_submenu();
            linear_clear_menu("Linear DS: Menu", 1);
            break;
        case 3:
            linear_clear_menu("", 0);
            queuemain();
            linear_submenu();
            linear_clear_menu("Linear DS: Menu", 1);

            break;
        case 4:
            linear_clear_menu("", 0);
            arraymain();
            linear_submenu();
            linear_clear_menu("Linear DS: Menu", 1);
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
            printf("\nSelect a new option\n");
            break;
        }
    }
}
