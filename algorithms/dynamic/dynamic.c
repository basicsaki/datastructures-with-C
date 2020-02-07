//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions

#include "banner_menu/bm.h"
#include "../../common.h"
//main menu
void dynamicmain()
{
    int dynamicexit = 0, dynamic_option;

    dynamic_banner();
    dynamic_submenu();
    while (dynamicexit == 0)
    {
        scanf("%d", &dynamic_option);
        // while (getchar() != '\n')
        // {
        //     continue;
        // }

        switch (dynamic_option)
        {
        case 1:
            dynamic_clear_menu("Algorithm: Dynamic Programming: Basic Information", 1);
            printf("\n\n***COMING SOON**\n\n\n");
            press_enter_to_continue();
            dynamic_clear_menu("Dynamic Programming: Menu", 1);
            break;
        case 2:
            dynamic_clear_menu("Algorithm: Dynamic Programming: Implementation", 1);
            printf("\n\n***COMING SOON**\n\n\n");
            press_enter_to_continue();
            dynamic_clear_menu("Dynamic Programming: Menu", 1);
            break;
        case 0:
            // clear();
            dynamicexit = 1;
            dynamic_clear_menu("Algorithm: Menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            clear();
            dynamic_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect a new option\n");
            break;
        }
    }
}
