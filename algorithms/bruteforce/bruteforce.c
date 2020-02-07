//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions

#include "banner_menu/bm.h"
#include "../../common.h"

//main menu
void bruteforcemain()
{
    int bruteforceexit = 0, bruteforce_option;

    bruteforce_banner();
    bruteforce_submenu();
    while (bruteforceexit == 0)
    {
        scanf("%d", &bruteforce_option);
        // while (getchar() != '\n')
        // {
        //     continue;
        // }

        switch (bruteforce_option)
        {
        case 1:
            bruteforce_clear_menu("Algorithm: BruteForce: Basic Information", 1);
            printf("\n\n***COMING SOON**\n\n\n");
            press_enter_to_continue();
            bruteforce_clear_menu("BruteForce: Menu", 1);
            break;
        case 2:
            bruteforce_clear_menu("Algorithm: BruteForce: Implementation", 1);
            printf("\n\n***COMING SOON**\n\n\n");
            press_enter_to_continue();
            bruteforce_clear_menu("BruteForce: Menu", 1);
            break;
        case 0:
            // system("clear");
            bruteforceexit = 1;
            bruteforce_clear_menu("Main Menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            system("clear");
            bruteforce_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect a new option\n");
            break;
        }
    }
}
