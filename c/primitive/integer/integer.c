//Preprocessor commands
#include <stdio.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"
#include "./implementation/implementation.h"
#include "./../../../common.h"

// #include "./linkedlist/linked.h"

//main menu
void integermain()
{
    int integerexit = 0, integer_option, integer;
    // integer_clear_menu("", 1);
    integer_banner();

    integer_submenu();
    while (integerexit == 0)
    {
        scanf("%d", &integer_option);
        // while (getchar() != '\n')
        // {
        //     continue;
        // }

        switch (integer_option)
        {
        case 1:
            integer_clear_menu("Integer: Basic Information", 1);
            integerInfo();
            press_enter_to_continue();
            integer_clear_menu("Integer: Menu", 1);
            // integer_clear_menu("Integer data type options", 1);
            break;
        case 2:
            integer_clear_menu("Integer: Insert", 1);
            printf("Please enter the integer\n");
            scanf("%d", &integer);
            press_enter_to_continue();
            integer_clear_menu("Integer: Menu", 1);
            break;
        case 3:
            integer_clear_menu("Integer: Display", 1);
            printf("Integer value: %d(MemLocation: %p Size Of: %zu)\n", integer, &integer, sizeof(integer));
            press_enter_to_continue();
            integer_clear_menu("Integer: Menu", 1);
            // integer_clear_menu("Integer data type options", 1);
            break;
        case 0:
            integerexit = 1;
            integer_clear_menu("Primitive: Menu", 0);
            break;
        default:
            clear();
            integer_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect a new option\n");
            break;
        }
    }
}
