#include "bm.h"
#include "string.h"
#include "../../common.h"

void algorithm_submenu()
{
    printf("Data Structure: Algorithm: Menu\n");
    printf("\nPlease select an algorithm type\n\n");
    printf("1. \tSorting\n");
    // printf("2. \tBrute Force(Coming Soon)\n");
    // printf("3. \tGreedy(Coming Soon)\n");
    // printf("4. \tBacktracking(Coming Soon)\n");
    // printf("5. \tDivide and conquer(Coming Soon)\n");
    // printf("6. \tDynamic(Coming Soon)\n");
    // printf("7. \tRecursion(Coming Soon)\n");
    printf("0. \tBack\n\n");
}

void algorithm_clear_menu(char *message, int submenu_show)
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
        algorithm_submenu();
    }
}