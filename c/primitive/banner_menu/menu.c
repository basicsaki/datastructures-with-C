#include "bm.h"

void primitive_submenu()
{
    printf("\n\n Select a primitive type\n\n");
    printf("1. \tInteger\n");
    printf("2. \tFloat\n");
    printf("3. \tCharacter\n");
    printf("4. \tPointer\n");
    printf("0. \tBack\n");
    printf("\n\n");
}

void primitive_clear_menu(char *message, int submenu_show)
{
    system("clear");
    printf("###############%s#############\n", message);
    if (submenu_show != 1)
    {
    }
    else
    {
        primitive_submenu();
    }
}