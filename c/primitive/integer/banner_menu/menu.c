#include "bm.h"
#include "string.h"
#include "../../../../common.h"

void integer_submenu()
{
    printf("Data Structure: Types > Primitive > Integer\n");
    printf("\nPlease select an option from the list items mentioned below\n\n");
    printf("1. \tBasic info\n");
    printf("2. \tEnter an integer\n");
    printf("3. \tDisplay the integer(memory address)\n");
    printf("0. \tBack\n\n");
}

void integer_clear_menu(char *message, int submenu_show)
{
    clear();
    if (strcmp("", message) != 0)
    {
        printf("#######     **%s**     #######\n\n", message);
    }

    if (submenu_show != 1)
    {
    }
    else
    {
        integer_submenu();
    }
}