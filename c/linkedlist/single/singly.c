//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions

#include "implementation/implementation.h"
#include "traversal/traversal.h"
#include "banner_menu/bm.h"

//main menu
void funcmain()
{
    int singly_option, exitsub = 0;
    int user_input, list_length = 0; //, exit = 0;
    node *start = NULL;

    single_banner();
    singly_submenu();
    while (exitsub == 0)
    {
        scanf("%d", &singly_option);

        switch (singly_option)
        {
        case 1:
            clear_menu("Menu options", 1);
            free(start);
            node *start = NULL;
            printf("Enter the number of elements you want inside the list\n\n");
            scanf("%d", &list_length);
            start = create_linked_list(start, list_length);
            clear_menu("Single linked list created", 1);
            break;
        case 2:
            clear_menu("Displaying the list! Select another option!", 1);
            display_linked_list(start);
            break;
        case 0:
            // system("clear");
            exitsub = 1;
            clear_menu("Main menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            system("clear");
            singly_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\n Select a new option\n");
            break;
        }
    }
}
