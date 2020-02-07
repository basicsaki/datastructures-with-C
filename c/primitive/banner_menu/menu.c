#include "bm.h"
#include "string.h"
#include "../../../common.h"

void primitive_submenu()
{
    printf("Data Structure Types > Primitive\n");
    printf("\nPlease select a primitive type\n\n");
    printf("1. \tInteger\n");
    printf("2. \tFloat\n");
    printf("3. \tCharacter\n");
    printf("4. \tPointer\n");
    printf("0. \tBack\n\n");
}

void primitive_clear_menu(char *message, int submenu_show)
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
        primitive_submenu();
    }
}