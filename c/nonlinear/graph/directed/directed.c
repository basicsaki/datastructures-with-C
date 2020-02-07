//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"
#include "./../../../../common.h"

// #include "./linkedlist/linked.h"

//main menu
void directedmain()
{
    int directedexit = 0, directed_option;
    directed_clear_menu("", 0);
    directed_banner();
    directed_submenu();
    while (directedexit == 0)
    {
        scanf("%d", &directed_option);
        // while (getchar() != '\n')
        // {
        //     continue;
        // }

        switch (directed_option)
        {
        case 1:
            directed_clear_menu("Graph: Directed: Basic Information", 1);
            printf("\n\n***COMING SOON**\n\n\n");
            press_enter_to_continue();
            directed_clear_menu("Directed: Menu", 1);
            break;
        case 2:
            directed_clear_menu("Graph: Directed: Implementation", 1);
            printf("\n\n***COMING SOON**\n\n\n");
            press_enter_to_continue();
            directed_clear_menu("Directed: Menu", 1);
            break;
        case 0:
            // system("clear");
            directedexit = 1;
            directed_clear_menu("Graph: Menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            system("clear");
            directed_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect a new option\n");
            break;
        }
    }
}
