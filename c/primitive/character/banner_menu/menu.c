#include "bm.h"
#include "string.h"
#include "../../../../common.h"

void character_submenu()
{
    printf("Data Structure Types > Primitive > Character\n");
    printf("\nPlease select an option from the list items mentioned below\n\n");
    printf("1. \tBasic info\n");
    printf("2. \tEnter a character\n");
    printf("3. \tDisplay the character(memory address)\n");
    printf("4. \tEnter a string(mx length 10)\n");
    printf("5. \tDisplay the string(memory address) with size\n");
    printf("0. \tBack\n\n");
}

void character_clear_menu(char *message, int submenu_show)
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
        character_submenu();
    }
}