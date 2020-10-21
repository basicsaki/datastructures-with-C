//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions

#include "implementation/implementation.h"
#include "traversal/traversal.h"
#include "deletion/delete.h"
#include "update/update.h"
#include "banner_menu/bm.h"

//main menu
void circularmain()
{
    int circular_option, exitsub = 0;
    int user_input, list_length = 0, index, payload, element;
    node *start = NULL;
    node *check;

    circular_banner();
    circular_submenu();
    while (exitsub == 0)
    {
        scanf("%d", &circular_option);
        while (getchar() != '\n')
        {
            continue;
        }

        switch (circular_option)
        {
        case 1:
            circular_clear_menu("circular Linked List", 1);
            // free(start);
            // node *start = NULL;
            printf("Enter the number of elements you want inside the list\n");
            scanf("%d", &list_length);
            start = circular_create_linked_list(start, list_length);
            circular_clear_menu("Single linked list created", 1);
            break;
        case 2:
            if (start != NULL)
            {
                circular_clear_menu("Enter in the beginning of the list", 1);
                printf("\nPlease enter the payload\n");
                scanf("%d", &payload);
                start = circularInsertInBeginning(start, payload);
                circular_clear_menu("Element added as the first element", 1);
                break;
            }
            else
            {
                circular_clear_menu("Create a list first", 1);
                break;
            }
        case 3:
            if (start != NULL)
            {

                circular_clear_menu("Append an element at the end!", 1);
                circular_display_linked_list(start, "Present linked list");
                printf("\nPlease enter the payload\n");
                scanf("%d", &payload);
                start = circularInsertAtEnd(start, payload);
                circular_display_linked_list(start, "Present linked list");
                circular_clear_menu("Element appended", 1);
                break;
            }
            else
            {
                circular_clear_menu("Create a list first", 1);
                break;
            }

        case 4:
            if (start != NULL)
            {
                circular_clear_menu("Enter an element at an index position!", 1);
                printf("\nPlease enter the index\n");
                scanf("%d", &index);

                printf("\nPlease enter the payload\n");
                scanf("%d", &payload);
                start = circularInsertAtPosition(start, index, payload);
                circular_clear_menu("Element added at position", 1);
                break;
            }
            else
            {
                circular_clear_menu("Create a list first", 1);
                break;
            }
        case 5:
            if (start != NULL)
            {
                circular_clear_menu("Enter an element after an element!", 1);
                printf("\nPlease enter the payload\n");
                scanf("%d", &payload);
                printf("\nPlease enter the element\n");
                scanf("%d", &element);

                start = circularInsertAfter(start, element, payload);
                circular_clear_menu("Element added at position", 1);
                break;
            }
            else
            {
                circular_clear_menu("Create a list first", 1);
                break;
            }
        case 6:
            if (start != NULL)
            {
                circular_clear_menu("Enter an element before an element!", 1);
                printf("\nPlease enter the element\n");
                scanf("%d", &element);

                printf("\nPlease enter the payload\n");
                scanf("%d", &payload);
                start = circularInsertBefore(start, element, payload);
                circular_clear_menu("Element added at position", 1);
                break;
            }
            else
            {
                circular_clear_menu("Create a list first", 1);
                break;
            }
        case 7:
            if (start != NULL)
            {
                circular_clear_menu("Update an element!", 1);
                printf("\nEnter the element to be updated\n");
                scanf("%d", &element);
                printf("\nEnter the new payload\n");
                scanf("%d", &payload);
                start = circularUpdateElement(start, element, payload);
                circular_clear_menu("Element updated", 1);
                break;
            }
            else
            {
                circular_clear_menu("Create a list first", 1);
                break;
            }
        case 8:
            if (start != NULL)
            {
                circular_clear_menu("Update an element at an index", 1);
                printf("\nEnter the index of the element to be updated\n");
                scanf("%d", &index);
                printf("\nEnter the new payload\n");
                scanf("%d", &payload);
                start = circularUpdateAtIndex(start, index, payload);
                circular_clear_menu("Element updated", 1);
                break;
            }
            else
            {
                circular_clear_menu("Create a list first", 1);
                break;
            }
        case 9:
            if (start != NULL)
            {
                circular_clear_menu("Delete an element", 1);
                printf("\nEnter the element to be deleted\n");
                scanf("%d", &element);
                start = circularDeleteElement(start, element);
                circular_clear_menu("Element Deleted", 1);
                break;
            }
            else
            {
                circular_clear_menu("Create a list first", 1);
                break;
            }
        case 10:
            if (start != NULL)
            {
                circular_clear_menu("Delete an element at an index position!", 1);
                printf("\nEnter the index of the element to be deleted\n");
                scanf("%d", &index);
                start = circularDeleteAtIndex(start, index);
                circular_clear_menu("Element deleted", 1);
                break;
            }
            else
            {
                circular_clear_menu("Create a list first", 1);
                break;
            }
        case 11:
            if (start != NULL)
            {
                circular_clear_menu("Displaying the list! Select another option!", 1);
                circular_display_linked_list(start, "Present Linked list");
                break;
            }
            else
            {
                circular_clear_menu("Create a list first", 1);
                break;
            }
        case 0:
            exitsub = 1;
            circular_clear_menu("Main menu", 0);
            break;
        default:
            system("circular_clear");
            circular_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\n Select a new option\n");
            break;
        }
    }
}
