//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions

#include "banner_menu/bm.h"
#include "linear/linear.h"
#include "nonlinear/nonlinear.h"
#include "primitive/primitive.h"
//main menu
void typemain()
{
    int typeexit = 0, type_option;

    ds_type_banner();
    ds_type_submenu();
    while (typeexit == 0)
    {
        scanf("%d", &type_option);
        while (getchar() != '\n')
        {
            continue;
        }

        switch (type_option)
        {
        case 1:
            ds_type_clear_menu("Type options", 0);
            primitivemain();
            ds_type_submenu();

            ds_type_clear_menu("Displaying the list! Select another option!", 1);
            break;

        case 2:
            ds_type_clear_menu("Type options", 0);
            linearmain();
            ds_type_submenu();
            break;
        case 3:
            ds_type_clear_menu("Type options", 0);
            nonlinearmain();
            ds_type_submenu();

            ds_type_clear_menu("Displaying the list! Select another option!", 1);
            break;

        case 0:

            // system("clear");
            typeexit = 1;
            ds_type_clear_menu("Main Menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            system("clear");
            ds_type_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\n Select a new option\n");
            break;
        }
    }
}
