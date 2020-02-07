//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions

#include "banner_menu/bm.h"
#include "../../common.h"
//main menu
void dncmain()
{
    int dncexit = 0, dnc_option;

    dnc_banner();
    dnc_submenu();
    while (dncexit == 0)
    {
        scanf("%d", &dnc_option);
        // while (getchar() != '\n')
        // {
        //     continue;
        // }

        switch (dnc_option)
        {
        case 1:
            dnc_clear_menu("Algorithm: Divide and Conquer: Basic Information", 1);
            printf("\n\n***COMING SOON**\n\n\n");
            press_enter_to_continue();
            dnc_clear_menu("Divide and Conquer: Menu", 1);
            break;
        case 2:
            dnc_clear_menu("Algorithm: Divide and Conquer: Implementation", 1);
            printf("\n\n***COMING SOON**\n\n\n");
            press_enter_to_continue();
            dnc_clear_menu("Divide and Conquer: Menu", 1);

            break;
        case 0:
            // clear();
            dncexit = 1;
            dnc_clear_menu("Main Menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            clear();
            dnc_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect a new option\n");
            break;
        }
    }
}
