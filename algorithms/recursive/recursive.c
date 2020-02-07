//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions

#include "banner_menu/bm.h"
#include "../../common.h"
//main menu
void recursivemain()
{
    int recursiveexit = 0, recursive_option;

    recursive_banner();
    recursive_submenu();
    while (recursiveexit == 0)
    {
        scanf("%d", &recursive_option);
        // while (getchar() != '\n')
        // {
        //     continue;
        // }

        switch (recursive_option)
        {
        case 1:
            recursive_clear_menu("Algorithm: Recursive: Basic Information", 1);
            printf("\n\n***COMING SOON**\n\n\n");
            press_enter_to_continue();
            recursive_clear_menu("Recursive: Menu", 1);
            break;
        case 2:
            recursive_clear_menu("Algorithm: Recursive: Implementation", 1);
            printf("\n\n***COMING SOON**\n\n\n");
            press_enter_to_continue();
            recursive_clear_menu("Recursive: Menu", 1);
            break;
        case 0:
            // system("clear");
            recursiveexit = 1;
            recursive_clear_menu("Algorithm: Menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            system("clear");
            recursive_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect a new option\n");
            break;
        }
    }
}
