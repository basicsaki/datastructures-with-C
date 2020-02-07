#include "implementation.h"
#include "./../banner_menu/bm.h"
#include "./../traversal/traversal.h"
// #include "./../../../../../common.h"

struct node *doubly_create_linked_list(struct node *start, int length)
{
    struct node *temp, *p;
    int user_input, pi;

    p = start;
    verboseflag == 1 ? doubly_display_node(p, "STEP (P): Initialize p node as a copy of the start node") : "";

    for (int i = 0; i < length; i++)
    {
        verboseflag == 1 ? doubly_display_linked_list(start, "Present linked list") : "";

        printf("\nEnter element to be inserted in the list\n");
        scanf("%d", &user_input);

        temp = (struct node *)malloc(sizeof(struct node));
        verboseflag == 1 ? doubly_display_node(temp, "STEP (temp): Initialize memory for a temp node (previous pointer + payload + nextpointer) memory") : "";

        //first element
        verboseflag == 1 ? doubly_display_node(temp, "STEP (temp): Check if the element is the first element") : "";
        if (i == 0)
        {
            verboseflag == 1 ? doubly_display_linked_list(start, "Present linked list. Element is the first element") : "";

            temp->payload = user_input;
            verboseflag == 1 ? doubly_display_node(temp, "STEP (temp): Set the payload value in temp") : "";

            temp->previouspointer = NULL;
            verboseflag == 1 ? doubly_display_node(temp, "STEP (temp): Set temp previous pointer to NULL") : "";

            temp->nextpointer = NULL;
            verboseflag == 1 ? doubly_display_node(temp, "STEP (temp): Set temp nextpointer to NULL") : "";

            p = temp;
            start = p;
            verboseflag == 1 ? doubly_display_node(p, "STEP (P): Copy temp node to p and to the start node") : "";
            press_enter_to_continue();
        }
        else
        {
            verboseflag == 1 ? doubly_display_linked_list(start, "Present linked list") : "";

            temp->payload = user_input;
            verboseflag == 1 ? doubly_display_node(temp, "STEP (temp): Set the payload value in temp") : "";

            p->nextpointer = temp;
            verboseflag == 1 ? doubly_display_node(p->nextpointer, "STEP (P->nextpointer): Set p next pointer to temp node") : "";

            temp->previouspointer = p;
            verboseflag == 1 ? doubly_display_node(temp->previouspointer, "STEP (temp->previouspointer): Set temp previous pointer to p node") : "";

            temp->nextpointer = NULL;
            verboseflag == 1 ? doubly_display_node(temp->nextpointer, "STEP (temp->nextpointer): Set temp nextpointer to null") : "";

            p = temp;
            verboseflag == 1 ? doubly_display_node(p, "STEP (p): Set p node as the temp node for the next iteration") : "";
            press_enter_to_continue();
        }
        doubly_clear_menu("Added to the list, enter next element", 0);
    }

    // verboseflag == 1 ? doubly_display_linked_list(p, "STEP : Replacing start node with new start(temp node)") : "";

    verboseflag == 1 ? doubly_display_linked_list(start, "Final linked list") : "";
    return start;
}

struct node *doublyInsertInBeginning(struct node *start, int payload)
{
    node *temp, *p;
    verboseflag == 1 ? doubly_display_linked_list(start, "Present linked list") : "";

    temp = (struct node *)malloc(sizeof(struct node));
    verboseflag == 1 ? doubly_display_node(temp, "STEP (temp): Initialize Temp node") : "";

    temp->payload = payload;
    verboseflag == 1 ? doubly_display_node(temp, "STEP (temp): Set the payload value in temp") : "";

    temp->previouspointer = NULL;
    verboseflag == 1 ? doubly_display_node(temp, "STEP (temp): Set the temp previous pointer to NULL") : "";

    temp->nextpointer = start;
    verboseflag == 1 ? doubly_display_node(temp->nextpointer, "STEP (temp->nextpointer): Set the temp nextpointer to the start node") : "";

    start = temp;
    verboseflag == 1 ? doubly_display_node(start, "STEP (start): Replacing start with new start(temp node)") : "";

    verboseflag == 1 ? doubly_display_linked_list(start, "Final linked list") : "";
    press_enter_to_continue();

    return start;
}

struct node *doublyInsertAtEnd(node *start, int payload)
{
    node *temp, *p;
    verboseflag == 1 ? doubly_display_linked_list(start, "Present linked list") : "";

    temp = (struct node *)malloc(sizeof(struct node));
    verboseflag == 1 ? doubly_display_node(temp, "STEP (temp): Initialize Temp node") : "";

    temp->payload = payload;
    verboseflag == 1 ? doubly_display_node(temp, "STEP (temp): Set the payload value in temp node") : "";

    temp->nextpointer = NULL;
    verboseflag == 1 ? doubly_display_node(temp, "STEP (temp):Set the temp nextpointer to null") : "";

    p = start;
    verboseflag == 1 ? doubly_display_node(p, "STEP (p): Initialize p node as a copy of the start node for list traversal") : "";

    while (p->nextpointer != NULL)
    {
        p = p->nextpointer;
    }
    verboseflag == 1 ? doubly_display_node(p, "STEP (p):Enumerate to the last node") : "";

    p->nextpointer = temp;
    verboseflag == 1 ? doubly_display_node(p->nextpointer, "STEP (p->nextpointer):Replace the present last node nextpointer to our temp node memory address") : "";

    temp->previouspointer = p;
    verboseflag == 1 ? doubly_display_node(temp->previouspointer, "STEP (temp->previouspointer):Replace the temp previous pointer to node p") : "";

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
    verboseflag == 1 ? doubly_display_node(p, "STEP (p): Initialize p node as a copy of the start node for list traversal") : "";

    verboseflag == 1 ? doubly_display_node(p, "STEP (p): Check if the index is the first element") : "";
    if (index == 0)
    {
        start = doublyInsertInBeginning(start, payload);
        return start;
    }

    for (position; position < (index - 1); position++)
    {
        if (p->nextpointer == NULL)
        {
            verboseflag == 1 ? doubly_display_node(p, "STEP (p): Displaying the last element. No such element") : "";
            press_enter_to_continue();
            return start;
        }
        p = p->nextpointer;
    }
    verboseflag == 1 ? doubly_display_node(p, "STEP (p): Enumerate to the node at index-1 position(We need the node after which we need to add our node") : "";

    temp = (struct node *)malloc(sizeof(struct node));
    verboseflag == 1 ? doubly_display_node(temp, "STEP (temp): Initialize Temp memory") : "";

    temp->payload = payload;
    verboseflag == 1 ? doubly_display_node(temp, "STEP (temp): Set the payload value in temp") : "";

    temp->previouspointer = p;
    verboseflag == 1 ? doubly_display_node(temp->previouspointer, "STEP (temp->previouspointer): Set the temp previous pointer to node P") : "";

    temp->nextpointer = p->nextpointer;
    verboseflag == 1 ? doubly_display_node(temp->nextpointer, "STEP (temp->nextpointer): Set the temp nextpointer to p nextpointer ie to the previous node to which p was pointing") : "";

    p->nextpointer->previouspointer = temp;
    verboseflag == 1 ? doubly_display_node(p->nextpointer, "STEP (p->nextpointer): Set the previous pointer of the node next to p->nextpointer to temp node") : "";

    p->nextpointer = temp;
    verboseflag == 1 ? doubly_display_node(p->nextpointer, "STEP (p->nextpointer): Set the p nextpointer to temp element") : "";

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
    verboseflag == 1 ? doubly_display_node(p, "STEP (p): Set start value in another node p for list traversal") : "";

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
                verboseflag == 1 ? doubly_display_node(p, "STEP (p): Displaying the last element. No such element") : "";
                press_enter_to_continue();

                return start;
            }
            p = p->nextpointer;
        }
    };
    verboseflag == 1 ? doubly_display_node(p, "STEP (p): Enumerate to the node with payload as the input payload and replace node with p") : "";

    temp = (struct node *)malloc(sizeof(struct node));
    verboseflag == 1 ? doubly_display_node(temp, "STEP (temp): Initialize Temp memory") : "";

    temp->payload = payload;
    verboseflag == 1 ? doubly_display_node(temp, "STEP (temp): Set the payload value in temp") : "";

    temp->nextpointer = p->nextpointer;
    verboseflag == 1 ? doubly_display_node(temp->nextpointer, "STEP (temp->nextpointer): Set the temp nextpointer to p nextpointer ie to the next node to which p was pointing") : "";

    temp->previouspointer = p;
    verboseflag == 1 ? doubly_display_node(temp->previouspointer, "STEP (temp->previouspointer): Set the temp previous pointer to p") : "";

    if (p->nextpointer != NULL)
    {
        p->nextpointer->previouspointer = temp;
        verboseflag == 1 ? doubly_display_node(temp, "STEP (temp): Set the previous pointer of the p nextpointer to temp") : "";
    }

    p->nextpointer = temp;
    verboseflag == 1 ? doubly_display_node(p, "STEP (p): Set the p nextpointer to the temp node location") : "";

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
    verboseflag == 1 ? doubly_display_node(p, "STEP (p): Initialize p node as a copy of the start node for list traversal") : "";

    // verboseflag == 1 ? doubly_display_node(p, "STEP 2: Check if the element is the first element") : "";
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
                verboseflag == 1 ? doubly_display_node(p, "STEP (p): Displaying the last element. No such element") : "";
                // printf("No such element in the list");
                press_enter_to_continue();

                return start;
            }

            p = p->nextpointer;
        }
    };
    verboseflag == 1 ? doubly_display_node(p, "STEP (p): Enumerate to the node position contaning the value and store node location with p") : "";

    temp = (struct node *)malloc(sizeof(struct node));
    verboseflag == 1 ? doubly_display_node(temp, "STEP (temp):Initialize Temp node with memory") : "";

    temp->payload = payload;
    verboseflag == 1 ? doubly_display_node(temp, "STEP (temp): Set the payload value in temp") : "";

    temp->nextpointer = p;
    verboseflag == 1 ? doubly_display_node(temp->nextpointer, "STEP (temp->nextpointer): Set the temp nextpointer to p ") : "";

    verboseflag == 1 ? doubly_display_node(p, "STEP (p): Check if the p previous pointer is NULL ") : "";
    if (p->previouspointer != NULL)
    {
        p->previouspointer->nextpointer = temp;
        verboseflag == 1 ? doubly_display_node(p, "STEP (p): Set nextpointer of p previous pointer to temp") : "";
    }
    else
    {
        start = temp;
        verboseflag == 1 ? doubly_display_node(p, "STEP (p): If yes set start as temp") : "";
    }

    temp->previouspointer = p->previouspointer;
    verboseflag == 1 ? doubly_display_node(temp->previouspointer, "STEP (temp->previouspointer): Set the temp previous pointer to p previous pointer") : "";

    p->previouspointer = temp;
    verboseflag == 1 ? doubly_display_node(p->previouspointer, "STEP (p->previouspointer): Set the p previous pointer to temp") : "";

    verboseflag == 1 ? doubly_display_linked_list(start, "Final linked list") : "";
    press_enter_to_continue();

    return start;
}
