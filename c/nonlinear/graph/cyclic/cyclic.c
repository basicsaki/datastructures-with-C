//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"

// #include "./linkedlist/linked.h"

//main menu
void cyclicmain()
{
    int cyclicexit = 0, cyclic_option;
    cyclic_clear_menu("", 1);
    cyclic_banner();
    cyclic_submenu();
    while (cyclicexit == 0)
    {
        scanf("%d", &cyclic_option);
        while (getchar() != '\n')
        {
            continue;
        }

        switch (cyclic_option)
        {
        case 1:
            cyclic_clear_menu("Type options", 1);
            cyclic_submenu();

            printf("Coming soon");
            break;
        case 2:
            cyclic_clear_menu("cyclic: Linked list", 1);
            // linkedmain();
            cyclic_submenu();

            // printf("inside 2");
            break;
        case 0:
            // system("clear");
            cyclicexit = 1;
            cyclic_clear_menu("Main menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            system("clear");
            cyclic_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\n Select a new option\n");
            break;
        }
    }
}
