//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"

// #include "./linkedlist/linked.h"

//main menu
void charactermain()
{
    int characterexit = 0, character_option;
    character_clear_menu("", 1);
    character_banner();
    character_submenu();
    while (characterexit == 0)
    {
        scanf("%d", &character_option);
        while (getchar() != '\n')
        {
            continue;
        }

        switch (character_option)
        {
        case 1:
            character_clear_menu("Type options", 1);
            character_submenu();

            printf("Coming soon");
            break;
        case 2:
            character_clear_menu("character: Linked list", 1);
            // linkedmain();
            character_submenu();

            // printf("inside 2");
            break;
        case 0:
            // system("clear");
            characterexit = 1;
            character_clear_menu("Main menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            system("clear");
            character_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\n Select a new option\n");
            break;
        }
    }
}
