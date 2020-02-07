//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"

#include "./tree/tree.h"
#include "./graph/graph.h"

//main menu
void nonlinearmain()
{
    int nonlinearexit = 0, nonlinear_option;
    nonlinear_clear_menu("", 0);
    nonlinear_banner();
    nonlinear_submenu();
    while (nonlinearexit == 0)
    {
        scanf("%d", &nonlinear_option);
        while (getchar() != '\n')
        {
            continue;
        }

        switch (nonlinear_option)
        {
        case 1:
            nonlinear_clear_menu("", 0);
            treemain();
            nonlinear_submenu();
            nonlinear_clear_menu("Nonlinear: Menu", 1);
            // printf("Coming soon");
            break;
        case 2:
            nonlinear_clear_menu("", 0);
            graphmain();
            nonlinear_submenu();
            nonlinear_clear_menu("Nonlinear: Menu", 1);
            // printf("inside 2");
            break;
        case 0:
            // clear();
            nonlinearexit = 1;
            nonlinear_clear_menu("Datastructure Type: Menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            nonlinear_clear_menu("", 5);
            // clear();
            nonlinear_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect a new option\n");
            break;
        }
    }
}
