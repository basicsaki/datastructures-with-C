//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"

// #include "./linkedlist/linked.h"

//main menu
void floatmain()
{
    int floatexit = 0, float_option;
    float_clear_menu("", 1);
    float_banner();
    float_submenu();
    while (floatexit == 0)
    {
        scanf("%d", &float_option);
        while (getchar() != '\n')
        {
            continue;
        }

        switch (float_option)
        {
        case 1:
            float_clear_menu("Type options", 1);
            float_submenu();

            printf("Coming soon");
            break;
        case 2:
            float_clear_menu("float: Linked list", 1);
            // linkedmain();
            float_submenu();

            // printf("inside 2");
            break;
        case 0:
            // system("clear");
            floatexit = 1;
            float_clear_menu("Main menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            system("clear");
            float_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\n Select a new option\n");
            break;
        }
    }
}
