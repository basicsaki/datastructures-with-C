//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"
#include "./single/singly.h"
#include "./doubly/doubly.h"
#include "./circular/circular.h"

//main menu
void linkedmain()
{
    int linkedexit = 0, linked_option;
    linked_clear_menu("", 1);
    linked_banner();
    linked_submenu();
    while (linkedexit == 0)
    {
        scanf("%d", &linked_option);
        while (getchar() != '\n')
        {
            continue;
        }

        switch (linked_option)
        {
        case 1:
            linked_clear_menu("Type options", 0);
            singlymain();
            linked_clear_menu("Type options", 1);
            break;
        case 2:
            linked_clear_menu("Type options", 0);
            doublymain();
            linked_clear_menu("Type options", 1);
            break;
        case 3:
            linked_clear_menu("Type options", 0);
            circularmain();
            linked_clear_menu("Type options", 1);
            break;
        case 0:
            // system("clear");
            linkedexit = 1;
            linked_clear_menu("Menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            system("clear");
            linked_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\n Select a new option\n");
            break;
        }
    }
}
