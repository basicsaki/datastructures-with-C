#include "bm.h"
#include "string.h"
#include "../../../../common.h"

void pointer_submenu()
{

    printf("Data Structure Types > Primitive > Pointer \n");
    printf("\nPlease select an option from the list items mentioned below\n\n");
    printf("1. \tCreate an integer\n");
    printf("2. \tCreate a string\n");
    printf("3. \tInit/Display Integer Pointer\n");
    printf("4. \tInit/Display String Pointer\n");
    printf("5. \tChange integer\n");
    printf("6. \tChange String value\n");
    printf("0. \tBack\n\n");
}

void pointer_clear_menu(char *message, int submenu_show)
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
        pointer_submenu();
    }
}