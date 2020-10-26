//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"

#include "./directed/directed.h"
#include "./cyclic/cyclic.h"
#include "./undirected/undirected.h"

//main menu
void graphmain()
{
    int graphexit = 0, graph_option;
    graph_clear_menu("", 1);
    graph_banner();
    graph_submenu();
    while (graphexit == 0)
    {
        scanf("%d", &graph_option);
        while (getchar() != '\n')
        {
            continue;
        }

        switch (graph_option)
        {
        case 1:
            graph_clear_menu("Type options", 1);
            undirectedmain();
            graph_submenu();

            printf("Coming soon");
            break;
        case 2:
            graph_clear_menu("graph: Linked list", 1);
            // linkedmain();
            directedmain();
            graph_submenu();

            // printf("inside 2");
            break;
        case 3:
            graph_clear_menu("graph: Linked list", 1);
            // linkedmain();
            cyclicmain();
            graph_submenu();

            // printf("inside 2");
            break;
        case 0:
            // system("clear");
            graphexit = 1;
            graph_clear_menu("Main menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            system("clear");
            graph_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\n Select a new option\n");
            break;
        }
    }
}
