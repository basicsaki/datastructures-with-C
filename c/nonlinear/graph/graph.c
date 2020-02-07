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
    graph_clear_menu("", 0);
    graph_banner();
    graph_submenu();
    while (graphexit == 0)
    {
        scanf("%d", &graph_option);
        // while (getchar() != '\n')
        // {
        //     continue;
        // }

        switch (graph_option)
        {
        case 1:
            graph_clear_menu("Graph: Undirected", 1);
            undirectedmain();
            graph_clear_menu("Graph: Menu", 1);
            break;
        case 2:
            graph_clear_menu("Graph: Directed", 1);
            directedmain();
            graph_clear_menu("Graph: Menu", 1);
            break;
        case 3:
            graph_clear_menu("Graph: Cyclic", 1);
            cyclicmain();
            graph_clear_menu("Graph: Menu", 1);
            break;
        case 0:
            graphexit = 1;
            graph_clear_menu("DS type: Menu", 0);
            break;
        default:
            system("clear");
            graph_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect a new option\n");
            break;
        }
    }
}
