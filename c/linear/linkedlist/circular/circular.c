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
#include "../../../../common.h"

//main menu
void circularmain()
{
    int circular_option, exitsub = 0;
    int user_input, list_length = 0, index, payload, element;
    node *end = NULL;
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
            if (end != NULL)
            {
                circular_clear_menu("Circular: Display", 1);
                circular_display_linked_list(end, "Present Linked list");
                press_enter_to_continue();
                circular_clear_menu("Circular: Menu", 1);
                break;
            }
            else
            {
                circular_clear_menu("Circular: Message: Create a list first", 1);
                break;
            }
        case 2:
            circular_clear_menu("Circular: Initialize", 0);
            printf("Enter the number of elements you want inside the list\n");
            scanf("%d", &list_length);
            end = circular_create_linked_list(end, list_length);

            // circular_clear_menu("Circular: Menu", 1);
            circular_clear_menu("Circular linked list created", 1);
            break;
        case 3:
            if (end != NULL)
            {
                circular_clear_menu("Circular: Insert: In list beginning", 1);
                printf("\nPlease enter the payload\n");
                scanf("%d", &payload);
                end = circularInsertInBeginning(end, payload);
                circular_clear_menu("Element added as the first element", 1);
                break;
            }
            else
            {
                circular_clear_menu("Circular: Message: Create a list first", 1);
                break;
            }
        case 4:
            if (end != NULL)
            {
                circular_clear_menu("Circular: Insert: Append at end", 1);
                circular_display_linked_list(end, "Present linked list");
                printf("\nPlease enter the payload\n");
                scanf("%d", &payload);
                end = circularInsertAtEnd(end, payload);
                circular_display_linked_list(end, "Present linked list");
                circular_clear_menu("Element appended", 1);
                break;
            }
            else
            {
                circular_clear_menu("Circular: Message: Create a list first", 1);
                break;
            }

        case 5:
            if (end != NULL)
            {
                circular_clear_menu("Circular: Insert: At index position", 1);
                printf("\nPlease enter the index\n");
                scanf("%d", &index);

                printf("\nPlease enter the payload\n");
                scanf("%d", &payload);
                end = circularInsertAtPosition(end, index, payload);
                circular_clear_menu("Element added at position", 1);
                break;
            }
            else
            {
                circular_clear_menu("Circular: Message: Create a list first", 1);
                break;
            }
        case 6:
            if (end != NULL)
            {
                circular_clear_menu("Circular: Insert: After an element", 1);
                printf("\nPlease enter the payload\n");
                scanf("%d", &payload);
                printf("\nPlease enter the element\n");
                scanf("%d", &element);

                end = circularInsertAfter(end, element, payload);
                circular_clear_menu("Element added at position", 1);
                break;
            }
            else
            {
                circular_clear_menu("Circular: Message: Create a list first", 1);
                break;
            }
        case 7:
            if (end != NULL)
            {
                circular_clear_menu("Circular: Insert: Before an element", 1);
                printf("\nPlease enter the element\n");
                scanf("%d", &element);

                printf("\nPlease enter the payload\n");
                scanf("%d", &payload);
                end = circularInsertBefore(end, element, payload);
                circular_clear_menu("Element added at position", 1);
                break;
            }
            else
            {
                circular_clear_menu("Circular: Message: Create a list first", 1);
                break;
            }
        case 8:
            if (end != NULL)
            {
                circular_clear_menu("Circular: Update: Search and Update", 1);
                printf("\nEnter the element to be updated\n");
                scanf("%d", &element);
                printf("\nEnter the new payload\n");
                scanf("%d", &payload);
                end = circularUpdateElement(end, element, payload);
                circular_clear_menu("Element updated", 1);
                break;
            }
            else
            {
                circular_clear_menu("Circular: Message: Create a list first", 1);
                break;
            }
        case 9:
            if (end != NULL)
            {
                circular_clear_menu("Circular: Update: Search at index and update", 1);
                printf("\nEnter the index of the element to be updated\n");
                scanf("%d", &index);
                printf("\nEnter the new payload\n");
                scanf("%d", &payload);
                end = circularUpdateAtIndex(end, index, payload);
                circular_clear_menu("Element updated", 1);
                break;
            }
            else
            {
                circular_clear_menu("Circular: Message: Create a list first", 1);
                break;
            }
        case 10:
            if (end != NULL)
            {
                circular_clear_menu("Circular: Delete: Search and delete", 1);
                printf("\nEnter the element to be deleted\n");
                scanf("%d", &element);
                end = circularDeleteElement(end, element);
                circular_clear_menu("Element Deleted", 1);
                break;
            }
            else
            {
                circular_clear_menu("Circular: Message: Create a list first", 1);
                break;
            }
        case 11:
            if (end != NULL)
            {
                circular_clear_menu("Circular: Delete: Search at index position and delete", 1);
                printf("\nEnter the index of the element to be deleted\n");
                scanf("%d", &index);
                end = circularDeleteAtIndex(end, index);
                circular_clear_menu("Element deleted", 1);
                break;
            }
            else
            {
                circular_clear_menu("Circular: Message: Create a list first", 1);
                break;
            }
        case 0:
            exitsub = 1;

            circular_clear_menu("Linked List: Menu", 0);
            break;
        default:
            system("circular_clear");
            circular_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect a new option\n");
            break;
        }
    }
}
