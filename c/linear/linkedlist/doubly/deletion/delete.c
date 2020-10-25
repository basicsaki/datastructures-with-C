#include "delete.h"
#include "./../traversal/traversal.h"
#include "./../banner_menu/bm.h"

struct node *doublyDeleteAtIndex(struct node *start, int index)
{
    verboseflag == 1 ? doubly_display_linked_list(start, "Present linked list") : "";

    node *p, *temp;

    p = start;
    verboseflag == 1 ? doubly_display_node(p, "STEP 2: Initialize p node as a copy of the start node") : "";

    verboseflag == 1 ? doubly_display_node(p, "STEP 3: Check if index is 0") : "";
    if (index == 0)
    {
        p = start->nextpointer;
        verboseflag == 1 ? doubly_display_node(p, "STEP 4: Replace p as the node to which start was pointing") : "";

        free(start);
        verboseflag == 1 ? doubly_display_node(p, "STEP 5: Free node at position 0 i.e start element") : "";

        start = p;
        verboseflag == 1 ? doubly_display_node(p, "STEP 6: Replace new start node as node at nextpointer p") : "";

        verboseflag == 1 ? doubly_display_linked_list(start, "Final linked list") : "";
        press_enter_to_continue();

        return start;
    }

    for (int position = 0; position < (index); position++)
    {
        if (p->nextpointer == NULL)
        {
            printf("No such index in the list");
            return start;
        }

        p = p->nextpointer;
    }
    verboseflag == 1 ? doubly_display_node(p, "STEP 4: Enumerate to the node at index-1 position(We need the node which points at 'to be deleted node')") : "";

    if (p->nextpointer != NULL)
    {
        p->previouspointer->nextpointer = p->nextpointer;
        p->nextpointer->previouspointer = p->previouspointer;
    }
    else
    {
        p->previouspointer->nextpointer = NULL;
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
    verboseflag == 1 ? doubly_display_node(p, "STEP 2: Initialize p node as a copy of the start node") : "";

    verboseflag == 1 ? doubly_display_node(p, "STEP 3: Check if the node at position 0 has the to be deleted payload") : "";
    if (element == p->payload)
    {
        p = p->nextpointer;
        verboseflag == 1 ? doubly_display_node(p, "STEP 4: Replace node p as the node to which p was pointing ie node at index posiion 1") : "";

        free(start);
        verboseflag == 1 ? doubly_display_node(p, "STEP 5: Free memory from the node at position 0") : "";

        start = p;
        p->previouspointer = NULL;
        verboseflag == 1 ? doubly_display_node(p, "STEP 6: Replace p as the start node") : "";

        verboseflag == 1 ? doubly_display_linked_list(start, "Final linked list") : "";
        press_enter_to_continue();

        return start;
    }

    verboseflag == 1 ? doubly_display_node(p, "STEP 4: Enumerate till the element is found in the list - 1 node") : "";
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
    temp = p->nextpointer;
    verboseflag == 1 ? doubly_display_node(temp, "STEP 5: Initialize a temp node as the node next to the 'to be deleted node' ") : "";

    p->previouspointer->nextpointer = p->nextpointer;
    if (p->nextpointer != NULL)
    {
        p->nextpointer->previouspointer = p->previouspointer;
    }
    else
    {
        p->previouspointer->nextpointer = NULL;
    }

    free(p);
    verboseflag == 1 ? doubly_display_node(p, "STEP 4: Free memory from the 'to be deleted node'") : "";

    verboseflag == 1 ? doubly_display_linked_list(start, "Final linked list") : "";
    press_enter_to_continue();

    // start = p;
    return start;
}