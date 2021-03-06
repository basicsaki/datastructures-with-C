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
void doublymain()
{
    int doubly_option, exitsub = 0;
    int user_input, list_length = 0, index, payload, element;
    node *start = NULL;
    node *check;

    doubly_banner();
    doubly_submenu();
    while (exitsub == 0)
    {
        scanf("%d", &doubly_option);
        while (getchar() != '\n')
        {
            continue;
        }

        switch (doubly_option)
        {
        case 1:
            if (start != NULL)
            {
                doubly_clear_menu("Doubly: Display", 1);
                doubly_display_linked_list(start, "Present Linked list");
                press_enter_to_continue();
                doubly_clear_menu("Doubly: Menu", 1);
                break;
            }
            else
            {
                doubly_clear_menu("Doubly: Message: Create a list first", 1);
                break;
            }
        case 2:
            doubly_clear_menu("Doubly: Initialize", 1);
            // free(start);
            // node *start = NULL;
            printf("Enter the number of elements you want inside the list\n");
            scanf("%d", &list_length);
            start = doubly_create_linked_list(start, list_length);
            doubly_clear_menu("Doubly linked list created", 1);
            break;
        case 3:
            if (start != NULL)
            {
                doubly_clear_menu("Doubly: Insert: In list beginning", 1);
                printf("\nPlease enter the payload\n");
                scanf("%d", &payload);
                start = doublyInsertInBeginning(start, payload);
                doubly_clear_menu("Element added as the first element", 1);
                break;
            }
            else
            {
                doubly_clear_menu("Doubly: Message: Create a list first", 1);
                break;
            }
        case 4:
            if (start != NULL)
            {

                doubly_clear_menu("Doubly: Insert: Append at end", 1);
                doubly_display_linked_list(start, "Present linked list");
                printf("\nPlease enter the payload\n");
                scanf("%d", &payload);
                start = doublyInsertAtEnd(start, payload);
                doubly_display_linked_list(start, "Present linked list");
                doubly_clear_menu("Element appended", 1);
                break;
            }
            else
            {
                doubly_clear_menu("Doubly: Message: Create a list first", 1);
                break;
            }

        case 5:
            if (start != NULL)
            {
                doubly_clear_menu("Doubly: Insert: At index position", 1);
                printf("\nPlease enter the index\n");
                scanf("%d", &index);

                printf("\nPlease enter the payload\n");
                scanf("%d", &payload);
                start = doublyInsertAtPosition(start, index, payload);
                doubly_clear_menu("Element added at position", 1);
                break;
            }
            else
            {
                doubly_clear_menu("Doubly: Message: Create a list first", 1);
                break;
            }
        case 6:
            if (start != NULL)
            {
                doubly_clear_menu("Doubly: Insert: After an element", 1);
                printf("\nPlease enter the payload\n");
                scanf("%d", &payload);
                printf("\nPlease enter the element\n");
                scanf("%d", &element);

                start = doublyInsertAfter(start, element, payload);
                doubly_clear_menu("Element added at position", 1);
                break;
            }
            else
            {
                doubly_clear_menu("Doubly: Message: Create a list first", 1);
                break;
            }
        case 7:
            if (start != NULL)
            {
                doubly_clear_menu("Doubly: Insert: Before an element", 1);
                printf("\nPlease enter the element\n");
                scanf("%d", &element);

                printf("\nPlease enter the payload\n");
                scanf("%d", &payload);
                start = doublyInsertBefore(start, element, payload);
                doubly_clear_menu("Element added at position", 1);
                break;
            }
            else
            {
                doubly_clear_menu("Doubly: Message: Create a list first", 1);
                break;
            }
        case 8:
            if (start != NULL)
            {
                doubly_clear_menu("Doubly: Update: Search and Update", 1);
                printf("\nEnter the element to be updated\n");
                scanf("%d", &element);
                printf("\nEnter the new payload\n");
                scanf("%d", &payload);
                start = doublyUpdateElement(start, element, payload);
                doubly_clear_menu("Element updated", 1);
                break;
            }
            else
            {
                doubly_clear_menu("Doubly: Message: Create a list first", 1);
                break;
            }
        case 9:
            if (start != NULL)
            {
                doubly_clear_menu("Doubly: Update: Search at index and update", 1);
                printf("\nEnter the index of the element to be updated\n");
                scanf("%d", &index);
                printf("\nEnter the new payload\n");
                scanf("%d", &payload);
                start = doublyUpdateAtIndex(start, index, payload);
                doubly_clear_menu("Element updated", 1);
                break;
            }
            else
            {
                doubly_clear_menu("Doubly: Message: Create a list first", 1);
                break;
            }
        case 10:
            if (start != NULL)
            {
                doubly_clear_menu("Doubly: Delete: Search and delete", 1);
                printf("\nEnter the element to be deleted\n");
                scanf("%d", &element);
                start = doublyDeleteElement(start, element);
                doubly_clear_menu("Element Deleted", 1);
                break;
            }
            else
            {
                doubly_clear_menu("Doubly: Message: Create a list first", 1);
                break;
            }
        case 11:
            if (start != NULL)
            {
                doubly_clear_menu("Doubly: Delete: Search at index position and delete", 1);
                printf("\nEnter the index of the element to be deleted\n");
                scanf("%d", &index);
                start = doublyDeleteAtIndex(start, index);
                doubly_clear_menu("Element deleted", 1);
                break;
            }
            else
            {
                doubly_clear_menu("Doubly: Message: Create a list first", 1);
                break;
            }
        case 0:
            exitsub = 1;
            doubly_clear_menu("Linked List: Menu", 0);
            break;
        default:
            system("doubly_clear");
            doubly_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect a new option\n");
            break;
        }
    }
}
