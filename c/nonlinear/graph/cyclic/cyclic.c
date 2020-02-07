//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"
#include "./../../../../common.h"

// #include "./linkedlist/linked.h"

//main menu
void cyclicmain()
{
    int cyclicexit = 0, cyclic_option;
    cyclic_clear_menu("", 0);
    cyclic_banner();
    cyclic_submenu();
    while (cyclicexit == 0)
    {
        scanf("%d", &cyclic_option);
        // while (getchar() != '\n')
        // {
        //     continue;
        // }

        switch (cyclic_option)
        {
        case 1:
            cyclic_clear_menu("Graph: Cyclic: Basic Information", 1);
            printf("\n\n***COMING SOON**\n\n\n");
            press_enter_to_continue();
            cyclic_clear_menu("Cyclic: Menu", 1);
            break;
        case 2:
            cyclic_clear_menu("Graph: Cyclic: Implementation", 1);
            printf("\n\n***COMING SOON**\n\n\n");
            press_enter_to_continue();
            cyclic_clear_menu("Cyclic: Menu", 1);
            break;
        case 0:
            // clear();
            cyclicexit = 1;
            cyclic_clear_menu("Graph: Menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            clear();
            cyclic_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect a new option\n");
            break;
        }
    }
}
