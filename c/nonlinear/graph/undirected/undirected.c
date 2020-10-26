//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"

// #include "./linkedlist/linked.h"

//main menu
void undirectedmain()
{
    int undirectedexit = 0, undirected_option;
    undirected_clear_menu("", 1);
    undirected_banner();
    undirected_submenu();
    while (undirectedexit == 0)
    {
        scanf("%d", &undirected_option);
        while (getchar() != '\n')
        {
            continue;
        }

        switch (undirected_option)
        {
        case 1:
            undirected_clear_menu("Type options", 1);
            undirected_submenu();

            printf("Coming soon");
            break;
        case 2:
            undirected_clear_menu("undirected: Linked list", 1);
            // linkedmain();
            undirected_submenu();

            // printf("inside 2");
            break;
        case 0:
            // system("clear");
            undirectedexit = 1;
            undirected_clear_menu("Main menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            system("clear");
            undirected_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\n Select a new option\n");
            break;
        }
    }
}
