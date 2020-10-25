#include "delete.h"
#include "./../traversal/traversal.h"
#include "./../banner_menu/bm.h"

struct node *deleteAtIndex(struct node *start, int index)
{
    verboseflag == 1 ? display_linked_list(start, "Present linked list") : "";

    node *p, *temp;

    p = start;
    verboseflag == 1 ? display_node(p, "STEP (p): Initialize p node as a copy of the start node") : "";

    verboseflag == 1 ? display_node(p, "STEP (p): Check if index is 0") : "";
    if (index == 0)
    {
        p = start->pointer;
        verboseflag == 1 ? display_node(p, "STEP (p): Replace p as the node to which start was pointing") : "";

        free(start);
        verboseflag == 1 ? display_node(p, "STEP (p): Free node at position 0 i.e start element") : "";

        start = p;
        verboseflag == 1 ? display_node(p, "STEP (p): Replace new start node as node at pointer p") : "";

        verboseflag == 1 ? display_linked_list(start, "Final linked list") : "";
        press_enter_to_continue();

        return start;
    }

    for (int position = 0; position < (index - 1); position++)
    {
        if (p->pointer == NULL)
        {
            verboseflag == 1 ? display_node(p, "STEP (p): Displaying the last element. No such element") : "";
            press_enter_to_continue();
            return start;
        }

        p = p->pointer;
    }
    verboseflag == 1 ? display_node(p, "STEP (p): Enumerate to the node at index-1 position(We need the node which points at 'to be deleted node')") : "";

    temp = p->pointer->pointer;
    verboseflag == 1 ? display_node(temp, "STEP (temp): The node to which the to be deleted node is pointing is saved to a temp node") : "";

    free(p->pointer);
    verboseflag == 1 ? display_node(p, "STEP (p): Free the 'to be deleted node' from memory") : "";

    p->pointer = temp;
    verboseflag == 1 ? display_node(p, "STEP (p): Point p node pointer to the temp pointer that we saved earlier") : "";

    verboseflag == 1 ? display_linked_list(start, "Final linked list") : "";
    press_enter_to_continue();

    return start;
}

struct node *deleteElement(struct node *start, int element)
{
    verboseflag == 1 ? display_linked_list(start, "Present linked list") : "";

    node *p, *temp;
    // int position = 0;
    p = start;
    verboseflag == 1 ? display_node(p, "STEP (p): Initialize p node as a copy of the start node") : "";

    verboseflag == 1 ? display_node(p, "STEP (p): Check if the node at position 0 has the to be deleted payload") : "";
    if (element == p->payload)
    {
        p = p->pointer;
        verboseflag == 1 ? display_node(p, "STEP (p): Replace node p as the node to which p was pointing ie node at index posiion 1") : "";

        free(start);
        verboseflag == 1 ? display_node(p, "STEP (p): Free memory from the node at position 0") : "";

        start = p;
        verboseflag == 1 ? display_node(p, "STEP (p): Replace p as the start node") : "";

        verboseflag == 1 ? display_linked_list(start, "Final linked list") : "";
        press_enter_to_continue();

        return start;
    }

    verboseflag == 1 ? display_node(p, "STEP (p): Enumerate till the element is found in the list - 1 node") : "";
    while (p->pointer->payload != element)
    {
        if (p->pointer->pointer == NULL && p->pointer->payload != element)
        {
            verboseflag == 1 ? display_node(p, "STEP (p): Displaying the last element. No such element") : "";
            press_enter_to_continue();

            return start;
        }

        p = p->pointer;
    }

    // printf("%d this is the element", p->payload);
    temp = p->pointer->pointer;
    verboseflag == 1 ? display_node(temp, "STEP (temp): Initialize a temp node as the node next to the 'to be deleted node' ") : "";

    free(p->pointer);
    verboseflag == 1 ? display_node(p->pointer, "STEP (p->pointer): Free memory from the 'to be deleted node'") : "";

    p->pointer = temp;
    verboseflag == 1 ? display_node(p->pointer, "STEP (p->pointer): Point the p node pointer to the temp node") : "";

    verboseflag == 1 ? display_linked_list(start, "Final linked list") : "";
    press_enter_to_continue();

    // start = p;
    return start;
}