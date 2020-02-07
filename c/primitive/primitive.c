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
    // primitive_clear_menu("Primitive data types", 0);
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
            primitive_clear_menu("", 0);
            integermain();
            primitive_submenu();
            primitive_clear_menu("Primitive: Menu", 1);

            break;
        case 2:
            primitive_clear_menu("", 0);
            floatmain();
            primitive_submenu();
            primitive_clear_menu("Primitive: Menu", 1);

            break;
        case 3:
            primitive_clear_menu("", 0);
            charactermain();
            primitive_submenu();
            primitive_clear_menu("Primitive: Menu", 1);
            break;
        case 4:
            primitive_clear_menu("", 0);
            pointermain();
            primitive_submenu();
            primitive_clear_menu("Primitive: Menu", 1);
            break;

        case 0:
            primitiveexit = 1;
            primitive_clear_menu("Data Structure Types: Menu", 0);
            break;
        default:
            primitive_clear_menu("", 5);
            // clear();
            primitive_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect a new option\n");
            break;
        }
    }
}
