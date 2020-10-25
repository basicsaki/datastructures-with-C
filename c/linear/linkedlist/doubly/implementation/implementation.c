#include "implementation.h"
#include "./../banner_menu/bm.h"
#include "./../traversal/traversal.h"
// #include "./../../../../../common.h"

struct node *doubly_create_linked_list(struct node *start, int length)
{

    struct node *temp, *p;
    int user_input, pi;

    p = start;
    verboseflag == 1 ? doubly_display_linked_list(start, "STEP 1 : Initialize p node as a copy of the start node") : "";

    verboseflag == 1 ? doubly_display_linked_list(start, "STEP 1 : Iterate the number of elements that are to be added") : "";
    for (int i = 0; i < length; i++)
    {
        verboseflag == 1 ? doubly_display_linked_list(p, "Present linked list") : "";
        printf("Enter element to be inserted in the list\n");
        scanf("%d", &user_input);

        temp = (struct node *)malloc(sizeof(struct node));
        verboseflag == 1 ? doubly_display_linked_list(temp, "STEP : Initialize memory for a temp node (payload + nextpointer) memory") : "";

        if (i == 0)
        {
            temp->payload = user_input;
            verboseflag == 1 ? doubly_display_linked_list(temp, "STEP : Set the payload value in temp") : "";

            temp->previouspointer = NULL;
            verboseflag == 1 ? doubly_display_linked_list(temp, "STEP : Set temp previous pointer to p node") : "";

            temp->nextpointer = NULL;
            verboseflag == 1 ? doubly_display_linked_list(temp, "STEP : Set temp nextpointer to null") : "";

            p = temp;
            start = p;
            verboseflag == 1 ? doubly_display_linked_list(p, "STEP : Copy temp node to node p") : "";
        }
        else
        {
            temp->payload = user_input;
            verboseflag == 1 ? doubly_display_linked_list(temp, "STEP : Set the payload value in temp") : "";

            p->nextpointer = temp;
            verboseflag == 1 ? doubly_display_linked_list(temp, "STEP : Set temp previous pointer to p node") : "";

            temp->previouspointer = p;
            verboseflag == 1 ? doubly_display_linked_list(temp, "STEP : Set temp previous pointer to p node") : "";

            temp->nextpointer = NULL;
            verboseflag == 1 ? doubly_display_linked_list(temp, "STEP : Set temp nextpointer to null") : "";

            p = temp;
            verboseflag == 1 ? doubly_display_linked_list(p, "STEP : Copy temp node to node p") : "";
        }
        doubly_clear_menu("Added to the list, enter next element", 0);
    }

    // verboseflag == 1 ? doubly_display_linked_list(p, "STEP : Replacing start node with new start(temp node)") : "";

    verboseflag == 1 ? doubly_display_linked_list(start, "Final linked list") : "";
    press_enter_to_continue();

    return start;
}

struct node *doublyInsertInBeginning(struct node *start, int payload)
{
    node *temp, *p;
    verboseflag == 1 ? doubly_display_linked_list(start, "Present linked list") : "";

    temp = (struct node *)malloc(sizeof(struct node));
    verboseflag == 1 ? doubly_display_node(temp, "STEP 1:Initialize Temp user element") : "";

    temp->payload = payload;
    verboseflag == 1 ? doubly_display_node(temp, "\nSTEP 2: Set the payload value in temp") : "";

    temp->previouspointer = NULL;
    verboseflag == 1 ? doubly_display_node(temp, "\nSTEP 3:Set the temp nextpointer to previous start node") : "";

    temp->nextpointer = start;
    verboseflag == 1 ? doubly_display_node(temp, "\nSTEP 3:Set the temp nextpointer to previous start node") : "";

    start = temp;
    verboseflag == 1 ? doubly_display_node(start, "\nSTEP 4: Replacing start with new start(temp node)") : "";

    verboseflag == 1 ? doubly_display_linked_list(start, "Final linked list") : "";
    press_enter_to_continue();

    return start;
}

struct node *doublyInsertAtEnd(node *start, int payload)
{
    node *temp, *p;
    verboseflag == 1 ? doubly_display_linked_list(start, "Present linked list") : "";

    temp = (struct node *)malloc(sizeof(struct node));
    verboseflag == 1 ? doubly_display_node(temp, "STEP 1:Initialize Temp user element") : "";

    temp->payload = payload;
    verboseflag == 1 ? doubly_display_node(temp, "\nSTEP 2: Set the payload value in temp node") : "";

    temp->nextpointer = NULL;
    verboseflag == 1 ? doubly_display_node(temp, "\nSTEP 3:Set the temp nextpointer to null") : "";

    p = start;
    verboseflag == 1 ? doubly_display_node(p, "\nSTEP 4: Initialize p node as a copy of the start node for list traversal") : "";

    while (p->nextpointer != NULL)
    {
        p = p->nextpointer;
    }
    verboseflag == 1 ? doubly_display_node(p, "\nSTEP 5:Enumerate to the last node") : "";

    p->nextpointer = temp;
    verboseflag == 1 ? doubly_display_node(p, "\nSTEP 6:Replace the present last node nextpointer to our temp node memory address") : "";

    temp->previouspointer = p;
    verboseflag == 1 ? doubly_display_node(p, "\nSTEP 6:Replace the present last node nextpointer to our temp node memory address") : "";

    verboseflag == 1 ? doubly_display_linked_list(start, "Final linked list") : "";
    press_enter_to_continue();

    return start;
}

struct node *doublyInsertAtPosition(node *start, int index, int payload)
{
    verboseflag == 1 ? doubly_display_linked_list(start, "Present linked list") : "";

    node *temp, *p;
    int position = 0;

    p = start;
    verboseflag == 1 ? doubly_display_node(p, "\nSTEP 1: Initialize p node as a copy of the start node for list traversal") : "";

    if (index == 0)
    {
        start = doublyInsertInBeginning(start, payload);
        return start;
    }

    for (position; position < (index - 1); position++)
    {
        if (p->nextpointer == NULL)
        {
            printf("No such index in the list");
            return start;
        }
        p = p->nextpointer;
    }
    verboseflag == 1 ? doubly_display_node(p, "\nSTEP 2: Enumerate to the node at index-1 position(We need the node after which we need to add our node") : "";

    temp = (struct node *)malloc(sizeof(struct node));
    verboseflag == 1 ? doubly_display_node(temp, "STEP 3 : Initialize Temp memory") : "";

    temp->payload = payload;
    verboseflag == 1 ? doubly_display_node(temp, "\nSTEP 4: TEMP: Set the payload value in temp") : "";

    temp->previouspointer = p;
    verboseflag == 1 ? doubly_display_node(p, "\nSTEP 6: P : Set the p nextpointer to temp element") : "";

    temp->nextpointer = p->nextpointer;
    verboseflag == 1 ? doubly_display_node(temp, "\nSTEP 5: TEMP: Set the temp nextpointer to p nextpointer ie to the previous node to which p was pointing") : "";

    p->nextpointer->previouspointer = temp;
    verboseflag == 1 ? doubly_display_node(p, "\nSTEP 6: P : Set the p nextpointer to temp element") : "";

    p->nextpointer = temp;
    verboseflag == 1 ? doubly_display_node(p, "\nSTEP 6: P : Set the p nextpointer to temp element") : "";

    verboseflag == 1 ? doubly_display_linked_list(start, "Final linked list") : "";
    press_enter_to_continue();

    return start;
}

struct node *doublyInsertAfter(node *start, int element, int payload)
{
    verboseflag == 1 ? doubly_display_linked_list(start, "Present linked list") : "";
    node *temp, *p;
    int position = 0;

    p = start;
    verboseflag == 1 ? doubly_display_node(p, "\nSTEP 1 : Set start value in another node p for list traversal") : "";

    while (p->nextpointer != NULL)
    {
        if (p->payload == element)
        {
            break;
        }
        else
        {
            if (p->nextpointer->nextpointer == NULL && p->nextpointer->payload != element)
            {
                printf("No such element in the list");
                return start;
            }
            p = p->nextpointer;
        }
    };
    verboseflag == 1 ? doubly_display_node(p, "\nSTEP 2 : Enumerate to the node with payload as the input payload and  node location with p") : "";

    temp = (struct node *)malloc(sizeof(struct node));
    verboseflag == 1 ? doubly_display_node(temp, "STEP 3: Initialize Temp memory") : "";

    temp->payload = payload;
    verboseflag == 1 ? doubly_display_node(temp, "\nSTEP 4: TEMP: Set the payload value in temp") : "";

    temp->nextpointer = p->nextpointer;
    verboseflag == 1 ? doubly_display_node(temp, "\nSTEP 5: TEMP: Set the temp nextpointer to p nextpointer ie to the next node to which p was pointing") : "";

    temp->previouspointer = p;
    verboseflag == 1 ? doubly_display_node(temp, "\nSTEP 5: TEMP: Set the temp nextpointer to p nextpointer ie to the next node to which p was pointing") : "";

    if (p->nextpointer != NULL)
    {
        p->nextpointer->previouspointer = temp;
        verboseflag == 1 ? doubly_display_node(temp, "\nSTEP 5: TEMP: Set the temp nextpointer to p nextpointer ie to the next node to which p was pointing") : "";
    }

    p->nextpointer = temp;
    verboseflag == 1 ? doubly_display_node(p, "\nSTEP 6: P: Set the p nextpointer to the temp location") : "";

    verboseflag == 1 ? doubly_display_linked_list(start, "Final linked list") : "";
    press_enter_to_continue();

    return start;
}

struct node *doublyInsertBefore(node *start, int element, int payload)
{
    verboseflag == 1 ? doubly_display_linked_list(start, "Present linked list") : "";
    node *temp, *p;
    int position = 0;

    p = start;
    verboseflag == 1 ? doubly_display_node(p, "\nSTEP 1: Initialize p node as a copy of the start node for list traversal") : "";

    verboseflag == 1 ? doubly_display_node(p, "STEP 2: Check if the element is the first element") : "";
    // if (p->payload == element)
    // {
    //     doublyInsertInBeginning(start, payload);
    //     return start;
    // }

    while (p->nextpointer != NULL)
    {
        if (p->payload == element)
        {
            break;
        }
        else
        {
            if (p->nextpointer == NULL)
            {
                printf("No such element in the list");
                return start;
            }

            p = p->nextpointer;
        }
    };
    verboseflag == 1 ? doubly_display_node(p, "\nSTEP 3: Enumerate to the node position contaning the value and store node location with p") : "";

    temp = (struct node *)malloc(sizeof(struct node));
    verboseflag == 1 ? doubly_display_node(temp, "STEP 4:Initialize Temp node with memory") : "";

    temp->payload = payload;
    verboseflag == 1 ? doubly_display_node(temp, "\nSTEP 5: TEMP: Set the payload value in temp") : "";

    temp->nextpointer = p;
    verboseflag == 1 ? doubly_display_node(temp, "\nSTEP 6: TEMP: Set the temp nextpointer to p nextpointer ie to the next node to which p was pointing") : "";

    if (p->previouspointer != NULL)
    {
        p->previouspointer->nextpointer = temp;
    }
    else
    {
        start = temp;
    }

    temp->previouspointer = p->previouspointer;
    verboseflag == 1 ? doubly_display_node(temp, "\nSTEP 6: TEMP: Set the temp nextpointer to p nextpointer ie to the next node to which p was pointing") : "";

    p->previouspointer = temp;
    verboseflag == 1 ? doubly_display_node(temp, "\nSTEP 6: TEMP: Set the temp nextpointer to p nextpointer ie to the next node to which p was pointing") : "";

    verboseflag == 1 ? doubly_display_linked_list(start, "Final linked list") : "";
    press_enter_to_continue();

    return start;
}
