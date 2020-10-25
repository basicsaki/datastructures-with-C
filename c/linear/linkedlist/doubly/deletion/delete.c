#include "delete.h"
#include "./../traversal/traversal.h"
#include "./../banner_menu/bm.h"

struct node *doublyDeleteAtIndex(struct node *start, int index)
{
    verboseflag == 1 ? doubly_display_linked_list(start, "Present linked list") : "";

    node *p, *temp;

    p = start;
    verboseflag == 1 ? doubly_display_node(p, "STEP (p): Initialize p node as a copy of the start node") : "";

    verboseflag == 1 ? doubly_display_node(p, "STEP (p): Check if index is 0") : "";
    if (index == 0)
    {
        p = start->nextpointer;
        verboseflag == 1 ? doubly_display_node(p, "STEP (p): Replace p as the node to which start was pointing") : "";

        free(start);
        verboseflag == 1 ? doubly_display_node(p, "STEP 5: Free node at position 0 i.e start element") : "";

        start = p;
        verboseflag == 1 ? doubly_display_node(p, "STEP 6: Replace new start node as node at p") : "";

        verboseflag == 1 ? doubly_display_linked_list(start, "Final linked list") : "";

        press_enter_to_continue();
        return start;
    }

    for (int position = 0; position < (index); position++)
    {
        if (p->nextpointer == NULL)
        {
            verboseflag == 1 ? doubly_display_node(p, "STEP (p): Displaying the last element. No such element") : "";
            return start;
        }

        p = p->nextpointer;
    }
    verboseflag == 1 ? doubly_display_node(p, "STEP (p): Enumerate to the node at index position(We need the node which points at 'to be deleted node')") : "";

    verboseflag == 1 ? doubly_display_node(p->nextpointer, "STEP (p): Check if the node is the last node") : "";
    if (p->nextpointer != NULL)
    {
        p->previouspointer->nextpointer = p->nextpointer;
        verboseflag == 1 ? doubly_display_node(p->previouspointer, "STEP (p): Set the next pointer of the P previous pointer to P next pointer") : "";

        p->nextpointer->previouspointer = p->previouspointer;
        verboseflag == 1 ? doubly_display_node(p->nextpointer, "STEP (p): Set the previous pointer of the P next pointer to P previous pointer") : "";
    }
    else
    {
        p->previouspointer->nextpointer = NULL;
        verboseflag == 1 ? doubly_display_node(p->nextpointer, "STEP (p): If yes, Set the previous pointer of the P next pointer to NULL") : "";
    }

    free(p);
    verboseflag == 1 ? doubly_display_node(p, "STEP 6: Free the 'to be deleted node' from memory") : "";

    // p->nextpointer = temp;
    // verboseflag == 1 ? doubly_display_node(p, "STEP 7: Point p node nextpointer to the temp nextpointer that we saved earlier") : "";

    verboseflag == 1 ? doubly_display_linked_list(start, "Final linked list") : "";
    press_enter_to_continue();

    return start;
}

struct node *doublyDeleteElement(struct node *start, int element)
{
    verboseflag == 1 ? doubly_display_linked_list(start, "Present linked list") : "";
    node *p, *temp;
    // int position = 0;
    p = start;
    verboseflag == 1 ? doubly_display_node(p, "STEP (p): Initialize p node as a copy of the start node") : "";

    verboseflag == 1 ? doubly_display_node(p, "STEP (p): Check if the node at position 0 has the 'to be deleted' payload") : "";
    if (element == p->payload)
    {
        p = p->nextpointer;
        verboseflag == 1 ? doubly_display_node(p, "STEP (p): If yes, replace node p as the node to which p was pointing ie node at index posiion 1") : "";

        free(start);
        verboseflag == 1 ? doubly_display_node(start, "STEP (start): Free memory from the node at position 0") : "";

        start = p;
        verboseflag == 1 ? doubly_display_node(p, "STEP (p): Replace p as the start node") : "";

        p->previouspointer = NULL;
        verboseflag == 1 ? doubly_display_node(p, "STEP (p): Replace p previous pointer as NULL") : "";

        verboseflag == 1 ? doubly_display_linked_list(start, "Final linked list") : "";
        press_enter_to_continue();

        return start;
    }

    verboseflag == 1 ? doubly_display_node(p, "STEP (p): Enumerate till the element is found in the list - 1 node") : "";
    while (p->payload != element)
    {
        if (p->nextpointer == NULL && p->payload != element)
        {
            printf("No such element in the list");
            return start;
        }

        p = p->nextpointer;
    }

    // printf("%d this is the element", p->payload);
    verboseflag == 1 ? doubly_display_node(p, "STEP (p): This is the element") : "";

    temp = p->nextpointer;
    verboseflag == 1 ? doubly_display_node(temp, "STEP (temp): Initialize temp node as the node 'to be deleted' ") : "";

    p->previouspointer->nextpointer = p->nextpointer;
    verboseflag == 1 ? doubly_display_node(temp, "STEP (temp): Set the next pointer of the node previos to p as the p next pointer") : "";

    verboseflag == 1 ? doubly_display_node(p, "STEP (p): Check if p is the last node") : "";
    if (p->nextpointer != NULL)
    {
        p->nextpointer->previouspointer = p->previouspointer;
        verboseflag == 1 ? doubly_display_node(p, "STEP (p): If no, set the previous pointer of the next pointer to p previous node") : "";
    }
    else
    {
        verboseflag == 1 ? doubly_display_node(p, "STEP (p): If yes set the next pointer of the previous pointer as NULL") : "";
        p->previouspointer->nextpointer = NULL;
    }

    free(p);
    verboseflag == 1 ? doubly_display_node(p, "STEP (p): Free memory from the 'to be deleted node'") : "";

    verboseflag == 1 ? doubly_display_linked_list(start, "Final linked list") : "";
    press_enter_to_continue();

    // start = p;
    return start;
}