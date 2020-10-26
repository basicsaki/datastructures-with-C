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
    nonlinear_clear_menu("", 1);
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
            nonlinear_clear_menu("Type options", 1);
            treemain();
            nonlinear_submenu();
            // printf("Coming soon");
            break;
        case 2:
            nonlinear_clear_menu("Linear: Linked list", 1);
            graphmain();
            nonlinear_submenu();

            // printf("inside 2");
            break;
        case 0:
            // system("clear");
            nonlinearexit = 1;
            nonlinear_clear_menu("Main menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            system("clear");
            nonlinear_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\n Select a new option\n");
            break;
        }
    }
}
