#include "bm.h"
#include "string.h"

void bruteforce_submenu()
{
    printf("Data Structure: Algorithm > Bruteforce\n");
    printf("\nPlease select an option from the list items mentioned below\n\n");
    printf("1.\tBasic Information\n");
    printf("2.\tImplemetation\n");
    printf("0.\tBack\n\n");
}

void bruteforce_clear_menu(char *message, int submenu_show)
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
        bruteforce_submenu();
    }
}