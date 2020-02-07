//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions

#include "banner_menu/bm.h"

#include "./backtracking/backtracking.h"
#include "./bruteforce/bruteforce.h"
#include "./dividenconquer/dividenconquer.h"
#include "./dynamic/dynamic.h"
#include "./greedy/greedy.h"
#include "./recursive/recursive.h"
#include "./sorting/sorting.h"

//main menu
void algorithmmain()
{
    int algorithmexit = 0, algorithm_option;

    algorithm_banner();
    algorithm_submenu();
    while (algorithmexit == 0)
    {
        scanf("%d", &algorithm_option);
        // while (getchar() != '\n')
        // {
        //     continue;
        // }

        switch (algorithm_option)
        {
        case 1:
            algorithm_clear_menu("", 0);
            sortingmain();
            // algorithm_submenu();
            algorithm_clear_menu("Algorithm: Menu", 1);
            break;
        case 2:
            algorithm_clear_menu("", 0);
            bruteforcemain();
            // algorithm_submenu();
            algorithm_clear_menu("Algorithm: Menu", 1);
            break;
        case 3:
            algorithm_clear_menu("", 0);
            greedymain();
            // algorithm_submenu();
            algorithm_clear_menu("", 1);
            // algorithm_clear_menu("Displaying the list! Select another option!", 1);
            break;
        case 4:
            // algorithm_clear_menu("algorithm options", 0);
            algorithm_clear_menu("", 0);
            backtrackingmain();
            // algorithm_submenu();
            algorithm_clear_menu("Algorithm: Menu", 1);
            // algorithm_clear_menu("Displaying the list! Select another option!", 1);
            break;

        case 5:
            algorithm_clear_menu("", 0);
            // algorithm_clear_menu("algorithm options", 0);
            dncmain();
            algorithm_clear_menu("Algorithm: Menu", 1);
            // algorithm_submenu();
            break;
        case 6:
            algorithm_clear_menu("", 0);
            dynamicmain();
            // algorithm_submenu();
            algorithm_clear_menu("Algorithm: Menu", 1);
            // algorithm_clear_menu("Displaying the list! Select another option!", 1);
            break;
        case 7:
            algorithm_clear_menu("", 0);
            recursivemain();
            // algorithm_submenu();
            algorithm_clear_menu("Algorithm: Menu", 1);
            // algorithm_clear_menu("Displaying the list! Select another option!", 1);
            break;
        case 0:
            // clear();
            algorithmexit = 1;
            algorithm_clear_menu("Main Menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            algorithm_clear_menu("", 5);
            // clear();
            algorithm_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect a new option\n");
            break;
        }
    }
}
