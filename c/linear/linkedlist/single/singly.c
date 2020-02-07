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
void singlymain()
{
    int singly_option, exitsub = 0;
    int user_input, list_length = 0, index, payload, element;
    node *start = NULL;
    node *check;

    single_banner();
    singly_submenu();
    while (exitsub == 0)
    {
        scanf("%d", &singly_option);
        // while (getchar() != '\n')
        // {
        //     continue;
        // }

        switch (singly_option)
        {
        case 1:
            if (start != NULL)
            {
                singly_clear_menu("Singly: Display", 1);
                display_linked_list(start, "Present Linked list");
                press_enter_to_continue();
                singly_clear_menu("Singly: Menu", 1);
                break;
            }
            else
            {
                singly_clear_menu("Singly: Message: Create a list first", 1);
                break;
            }
        case 2:
            singly_clear_menu("Singly: Initialize", 1);
            // free(start);
            // node *start = NULL;
            printf("Enter the number of elements you want inside the list\n");
            scanf("%d", &list_length);
            start = create_linked_list(start, list_length);
            singly_clear_menu("Single linked list created", 1);
            break;
        case 3:
            if (start != NULL)
            {
                singly_clear_menu("Singly: Insert: In list beginning", 1);
                printf("\nPlease enter the payload\n");
                scanf("%d", &payload);
                start = insertInBeginning(start, payload);
                singly_clear_menu("Element added as the first element", 1);
                break;
            }
            else
            {
                singly_clear_menu("Singly: Message: Create a list first", 1);
                break;
            }
        case 4:
            if (start != NULL)
            {

                singly_clear_menu("Singly: Insert: Append at end", 1);
                display_linked_list(start, "Present linked list");
                printf("\nPlease enter the payload\n");
                scanf("%d", &payload);
                start = insertAtEnd(start, payload);
                display_linked_list(start, "Present linked list");
                singly_clear_menu("Element appended", 1);
                break;
            }
            else
            {
                singly_clear_menu("Singly: Message: Create a list first", 1);
                break;
            }

        case 5:
            if (start != NULL)
            {
                singly_clear_menu("Singly: Insert: At index position", 1);
                printf("\nPlease enter the index\n");
                scanf("%d", &index);

                printf("\nPlease enter the payload\n");
                scanf("%d", &payload);
                start = insertAtPosition(start, index, payload);
                singly_clear_menu("Element added at position", 1);
                break;
            }
            else
            {
                singly_clear_menu("Singly: Message: Create a list first", 1);
                break;
            }
        case 6:
            if (start != NULL)
            {
                singly_clear_menu("Singly: Insert: After an element", 1);
                printf("\nPlease enter the payload\n");
                scanf("%d", &payload);
                printf("\nPlease enter the element\n");
                scanf("%d", &element);

                start = insertAfter(start, element, payload);
                singly_clear_menu("Element added at position", 1);
                break;
            }
            else
            {
                singly_clear_menu("Singly: Message: Create a list first", 1);
                break;
            }
        case 7:
            if (start != NULL)
            {
                singly_clear_menu("Singly: Insert: Before an element", 1);
                printf("\nPlease enter the element\n");
                scanf("%d", &element);

                printf("\nPlease enter the payload\n");
                scanf("%d", &payload);
                start = insertBefore(start, element, payload);
                singly_clear_menu("Element added at position", 1);
                break;
            }
            else
            {
                singly_clear_menu("Singly: Message: Create a list first", 1);
                break;
            }
        case 8:
            if (start != NULL)
            {
                singly_clear_menu("Singly: Update: Search and Update", 1);
                printf("\nEnter the element to be updated\n");
                scanf("%d", &element);
                printf("\nEnter the new payload\n");
                scanf("%d", &payload);
                start = updateElement(start, element, payload);
                singly_clear_menu("Element updated", 1);
                break;
            }
            else
            {
                singly_clear_menu("Singly: Message: Create a list first", 1);
                break;
            }
        case 9:
            if (start != NULL)
            {
                singly_clear_menu("Singly: Update: Search at index and update", 1);
                printf("\nEnter the index of the element to be updated\n");
                scanf("%d", &index);
                printf("\nEnter the new payload\n");
                scanf("%d", &payload);
                start = updateAtIndex(start, index, payload);
                singly_clear_menu("Element updated", 1);
                break;
            }
            else
            {
                singly_clear_menu("Singly: Message: Create a list first", 1);
                break;
            }
        case 10:
            if (start != NULL)
            {
                singly_clear_menu("Singly: Delete: Search and delete", 1);
                printf("\nEnter the element to be deleted\n");
                scanf("%d", &element);
                start = deleteElement(start, element);
                singly_clear_menu("Element Deleted", 1);
                break;
            }
            else
            {
                singly_clear_menu("Singly: Message: Create a list first", 1);
                break;
            }
        case 11:
            if (start != NULL)
            {
                singly_clear_menu("Singly: Delete: Search at index position and delete", 1);
                printf("\nEnter the index of the element to be deleted\n");
                scanf("%d", &index);
                start = deleteAtIndex(start, index);
                singly_clear_menu("Element deleted", 1);
                break;
            }
            else
            {
                singly_clear_menu("Singly: Message: Create a list first", 1);
                break;
            }
        case 0:
            exitsub = 1;
            singly_clear_menu("Linked List: Menu", 1);
            break;
        default:
            system("singly_clear");
            singly_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\n Select a new option\n");
            break;
        }
    }
}
