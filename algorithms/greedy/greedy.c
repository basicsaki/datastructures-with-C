//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions

#include "banner_menu/bm.h"
#include "../../common.h"
//main menu
void greedymain()
{
    int greedyexit = 0, greedy_option;

    greedy_banner();
    greedy_submenu();
    while (greedyexit == 0)
    {
        scanf("%d", &greedy_option);
        // while (getchar() != '\n')
        // {
        //     continue;
        // }

        switch (greedy_option)
        {
        case 1:
            greedy_clear_menu("Algorithm: Greedy: Basic Information", 1);
            printf("\n\n***COMING SOON**\n\n\n");
            press_enter_to_continue();
            greedy_clear_menu("Greedy: Menu", 1);

            break;
        case 2:
            greedy_clear_menu("Algorithm: Greedy: Implementation", 1);
            printf("\n\n***COMING SOON**\n\n\n");
            press_enter_to_continue();
            greedy_clear_menu("Greedy: Menu", 1);
            break;
        case 0:
            // clear();
            greedyexit = 1;
            greedy_clear_menu("Algorithm: Menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            clear();
            greedy_submenu();
            printf("\nPlease enter an option from the list\n");
            printf(" new option\n");
            break;
        }
    }
}
