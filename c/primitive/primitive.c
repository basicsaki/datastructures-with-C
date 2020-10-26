//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"

#include "./pointer/pointer.h"
#include "./integer/integer.h"
#include "./character/character.h"
#include "./float/float.h"

//main menu
void primitivemain()
{
    int primitiveexit = 0, primitive_option;
    primitive_clear_menu("", 1);
    primitive_banner();
    primitive_submenu();
    while (primitiveexit == 0)
    {
        scanf("%d", &primitive_option);
        while (getchar() != '\n')
        {
            continue;
        }

        switch (primitive_option)
        {
        case 1:
            primitive_clear_menu("Integer", 1);
            integermain();
            primitive_submenu();
            break;
        case 2:
            primitive_clear_menu("Float ", 1);
            floatmain();
            primitive_submenu();

            break;
        case 3:
            primitive_clear_menu("Character", 1);
            charactermain();
            primitive_submenu();
            break;
        case 4:
            primitive_clear_menu("Pointer", 1);
            pointermain();
            primitive_submenu();
            break;

        case 0:
            primitiveexit = 1;
            primitive_clear_menu("Main menu", 0);
            break;
        default:
            system("clear");
            primitive_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\n Select a new option\n");
            break;
        }
    }
}
