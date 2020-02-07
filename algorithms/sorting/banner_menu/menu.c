#include "bm.h"
#include "string.h"

void sorting_submenu()
{
    printf("Data Structure: Algorithm > Sorting\n");
    printf("\nPlease select an option from the list items mentioned below\n\n");
    // printf("\n\n Sorting options\n\n");
    printf("1. \tInitialize Array(to be sorted) \n");
    printf("2. \tDisplay Array\n");
    printf("3. \tSelection Sort(In-place)\n");
    printf("4. \tBubble sort\n");
    printf("5. \tInsertion sort\n");
    // printf("6. \tShell Sort\n");
    printf("6. \tMerge Sort\n");
    printf("7. \tQuick Sort\n");
    printf("8. \tBST Sort\n");
    printf("9.\tHeap Sort\n");
    printf("10.\tRadix Sort\n");
    printf("0. \tBack\n\n");
}

void sorting_clear_menu(char *message, int submenu_show)
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
        sorting_submenu();
    }
}