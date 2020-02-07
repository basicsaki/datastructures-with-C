#include "bm.h"
#include "string.h"

void doubly_submenu()
{
    printf("Data Structure: Types > Linear > LinkedList > Doubly\n");
    printf("\nPlease select an option from the list items mentioned below\n\n");
    printf("1. \tDisplay\n");
    printf("2. \tInitialize\n");
    printf("3. \tInsert: In list beginning\n");
    printf("4. \tInsert: Append at end\n");
    printf("5. \tInsert: At index position\n");
    printf("6. \tInsert: After an element\n");
    printf("7. \tInsert: Before an element\n");
    printf("8. \tUpdate: Search and Update\n");
    printf("9. \tUpdate: Search at index and update\n");
    printf("10. \tDelete: Search and delete\n");
    printf("11. \tDelete: Search at index position and delete\n");
    printf("0. \tBack\n\n");
}

void doubly_clear_menu(char *message, int submenu_show)
{
    system("clear");
    printf("#######     **%s**     #######\n\n", message);
    if (submenu_show != 1)
    {
    }
    else
    {
        doubly_submenu();
    }
}
