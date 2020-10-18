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

int checkIfBlank(struct node *start);
int checkIfBlank(struct node *start)
{
    if (start == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
};

//main menu
void singlymain()
{
    int singly_option, exitsub = 0;
    int user_input, list_length = 0, index, payload, element;
    node *start = NULL;
    node *check;
    check = start;
    if (check == NULL)
    {
        printf("c");
    }
    single_banner();
    singly_submenu();
    while (exitsub == 0)
    {
        scanf("%d", &singly_option);
        while (getchar() != '\n')
        {
            continue;
        }

        switch (singly_option)
        {
        case 1:
            singly_clear_menu("Singly Linked List", 1);
            // free(start);
            // node *start = NULL;
            printf("Enter the number of elements you want inside the list\n\n");
            scanf("%d", &list_length);
            start = create_linked_list(start, list_length);
            singly_clear_menu("Single linked list created", 1);
            break;
        case 2:
            if (start != NULL)
            {
                singly_clear_menu("Enter in the beginning of the list", 1);
                display_linked_list(start);
                printf("\nPlease enter the payload\n");
                scanf("%d", &payload);
                start = insertInBeginning(start, payload);
                display_linked_list(start);
                singly_clear_menu("Element added as the first element", 1);
                break;
            }
            else
            {
                singly_clear_menu("Create a list first", 1);
                break;
            }
        case 3:
            if (start != NULL)
            {

                singly_clear_menu("Append an element at the end!", 1);
                display_linked_list(start);
                printf("\nPlease enter the payload\n");
                scanf("%d", &payload);
                start = insertAtEnd(start, payload);
                display_linked_list(start);
                singly_clear_menu("Element appended", 1);
                break;
            }
            else
            {
                singly_clear_menu("Create a list first", 1);
                break;
            }

        case 4:
            if (start != NULL)
            {
                singly_clear_menu("Enter an element at an index position!", 1);
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
                singly_clear_menu("Create a list first", 1);
                break;
            }
        case 5:
            if (start != NULL)
            {
                singly_clear_menu("Enter an element after an element!", 1);
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
                singly_clear_menu("Create a list first", 1);
                break;
            }
        case 6:
            if (start != NULL)
            {
                singly_clear_menu("Enter an element before an element!", 1);
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
                singly_clear_menu("Create a list first", 1);
                break;
            }
        case 7:
            if (start != NULL)
            {
                singly_clear_menu("Update an element!", 1);
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
                singly_clear_menu("Create a list first", 1);
                break;
            }
        case 8:
            if (start != NULL)
            {
                singly_clear_menu("Update an element at an index", 1);
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
                singly_clear_menu("Create a list first", 1);
                break;
            }
        case 9:
            if (start != NULL)
            {
                singly_clear_menu("Delete an element", 1);
                printf("\nEnter the element to be deleted\n");
                scanf("%d", &element);
                start = deleteElement(start, element);
                singly_clear_menu("Element Deleted", 1);
                break;
            }
            else
            {
                singly_clear_menu("Create a list first", 1);
                break;
            }
        case 10:
            if (start != NULL)
            {
                singly_clear_menu("Delete an element at an index position!", 1);
                printf("\nEnter the index of the element to be deleted\n");
                scanf("%d", &index);
                start = deleteAtIndex(start, index);
                singly_clear_menu("Element deleted", 1);
                break;
            }
            else
            {
                singly_clear_menu("Create a list first", 1);
                break;
            }
        case 11:
            if (start != NULL)
            {
                singly_clear_menu("Displaying the list! Select another option!", 1);
                display_linked_list(start);
                break;
            }
            else
            {
                singly_clear_menu("Create a list first", 1);
                break;
            }
        case 0:
            exitsub = 1;
            singly_clear_menu("Main menu", 0);
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
