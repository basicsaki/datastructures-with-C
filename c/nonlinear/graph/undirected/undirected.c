//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"
#include "./../../../../common.h"

// #include "./linkedlist/linked.h"

//main menu
void undirectedmain()
{
    int undirectedexit = 0, undirected_option;
    undirected_clear_menu("", 0);
    undirected_banner();
    undirected_submenu();
    while (undirectedexit == 0)
    {
        scanf("%d", &undirected_option);
        // while (getchar() != '\n')
        // {
        //     continue;
        // }

        switch (undirected_option)
        {
        case 1:
            undirected_clear_menu("Graph: Undirected: Basic Information", 1);
            printf("\n\n***COMING SOON**\n\n\n");
            press_enter_to_continue();
            undirected_clear_menu("Undirected: Menu", 1);
            break;
        case 2:
            undirected_clear_menu("Graph: Undirected: Implementation", 1);
            printf("\n\n***COMING SOON**\n\n\n");
            press_enter_to_continue();
            undirected_clear_menu("Undirected: Menu", 1);
            break;
        case 0:
            // system("clear");
            undirectedexit = 1;
            undirected_clear_menu("Graph: Menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            system("clear");
            undirected_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect a new option\n");
            break;
        }
    }
}
