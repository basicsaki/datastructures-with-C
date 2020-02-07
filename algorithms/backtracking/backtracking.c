//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "banner_menu/bm.h"
#include "../../common.h"

//main menu
void backtrackingmain()
{
    int backtrackingexit = 0, backtracking_option;

    backtracking_banner();
    backtracking_submenu();
    while (backtrackingexit == 0)
    {
        scanf("%d", &backtracking_option);
        // while (getchar() != '\n')
        // {
        //     continue;
        // }

        switch (backtracking_option)
        {
        case 1:
            backtracking_clear_menu("Algorithm: Backtracking: Basic Information", 1);
            printf("\n\n***COMING SOON**\n\n\n");
            press_enter_to_continue();
            backtracking_clear_menu("Backtracking: Menu", 1);
            break;

        case 2:
            backtracking_clear_menu("Algorithm: Backtracking: Implemetation", 1);
            printf("\n\n***COMING SOON**\n\n\n");
            press_enter_to_continue();

            backtracking_clear_menu("Backtracking: Menu", 1);
            break;
        case 0:
            // system("clear");
            backtrackingexit = 1;
            backtracking_clear_menu("Main Menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            system("clear");
            backtracking_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect a new option\n");
            break;
        }
    }
}
