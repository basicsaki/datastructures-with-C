#include "delete.h"
#include "./../traversal/traversal.h"
#include "./../banner_menu/bm.h"

struct node *deleteAtIndex(struct node *start, int index)
{
    verboseflag == 1 ? display_linked_list(start, "Present linked list") : "";

    node *p, *temp;

    p = start;
    verboseflag == 1 ? display_node(p, "STEP 2: Initialize p node as a copy of the start node") : "";

    verboseflag == 1 ? display_node(p, "STEP 3: Check if index is 0") : "";
    if (index == 0)
    {
        p = start->pointer;
        verboseflag == 1 ? display_node(p, "STEP 4: Replace p as the node to which start was pointing") : "";

        free(start);
        verboseflag == 1 ? display_node(p, "STEP 5: Free node at position 0 i.e start element") : "";

        start = p;
        verboseflag == 1 ? display_node(p, "STEP 6: Replace new start node as node at pointer p") : "";

        verboseflag == 1 ? display_linked_list(start, "Final linked list") : "";
        press_enter_to_continue();

        return start;
    }

    for (int position = 0; position < (index - 1); position++)
    {
        if (p->pointer == NULL)
        {
            printf("No such index in the list");
            return start;
        }

        p = p->pointer;
    }
    verboseflag == 1 ? display_node(p, "STEP 4: Enumerate to the node at index-1 position(We need the node which points at 'to be deleted node')") : "";

    temp = p->pointer->pointer;
    verboseflag == 1 ? display_node(temp, "STEP 5: TEMP : The node to which the to be deleted node is pointing is saved to a temp node") : "";

    free(p->pointer);
    verboseflag == 1 ? display_node(p, "STEP 6: Free the 'to be deleted node' from memory") : "";

    p->pointer = temp;
    verboseflag == 1 ? display_node(p, "STEP 7: Point p node pointer to the temp pointer that we saved earlier") : "";

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
    verboseflag == 1 ? display_node(p, "STEP 2: Initialize p node as a copy of the start node") : "";

    verboseflag == 1 ? display_node(p, "STEP 3: Check if the node at position 0 has the to be deleted payload") : "";
    if (element == p->payload)
    {
        p = p->pointer;
        verboseflag == 1 ? display_node(p, "STEP 4: Replace node p as the node to which p was pointing ie node at index posiion 1") : "";

        free(start);
        verboseflag == 1 ? display_node(p, "STEP 5: Free memory from the node at position 0") : "";

        start = p;
        verboseflag == 1 ? display_node(p, "STEP 6: Replace p as the start node") : "";

        verboseflag == 1 ? display_linked_list(start, "Final linked list") : "";
        press_enter_to_continue();

        return start;
    }

    verboseflag == 1 ? display_node(p, "STEP 4: Enumerate till the element is found in the list - 1 node") : "";
    while (p->pointer->payload != element)
    {
        if (p->pointer->pointer == NULL && p->pointer->payload != element)
        {
            printf("No such element in the list");
            return start;
        }

        p = p->pointer;
    }

    // printf("%d this is the element", p->payload);
    temp = p->pointer->pointer;
    verboseflag == 1 ? display_node(temp, "STEP 5: Initialize a temp node as the node next to the 'to be deleted node' ") : "";

    free(p->pointer);
    verboseflag == 1 ? display_node(p, "STEP 4: Free memory from the 'to be deleted node'") : "";

    p->pointer = temp;
    verboseflag == 1 ? display_node(p, "STEP 5: Point the p node pointer to the temp node") : "";

    verboseflag == 1 ? display_linked_list(start, "Final linked list") : "";
    press_enter_to_continue();

    // start = p;
    return start;
}