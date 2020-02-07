#include "bm.h"
#include "string.h"

void float_submenu()
{
    printf("Data Structure Types > Primitive > Float\n");
    printf("\nPlease select an option from the list items mentioned below\n\n");
    printf("1. \tBasic info\n");
    printf("2. \tEnter a float\n");
    printf("3. \tDisplay the float(memory address)\n");
    printf("0. \tBack\n\n");
}

void float_clear_menu(char *message, int submenu_show)
{
    system("clear");
    if (strcmp("", message) != 0)
    {
        printf("#######     **%s**     #######\n\n", message);
    }

    if (submenu_show != 1)
    {
    }
    else
    {
        float_submenu();
    }
}