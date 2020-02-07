#include <stdio.h>
#include <stdlib.h>
#include "update.h"
#include "./../traversal/traversal.h"
#include "./../banner_menu/bm.h"

struct node *circularUpdateAtIndex(struct node *end, int index, int payload)
{
    verboseflag == 1 ? circular_display_linked_list(end, "Present linked list") : "";

    struct node *p;
    int position = 0;

    p = end->pointer;
    verboseflag == 1 ? circular_display_node(p, "STEP (p): Initialize p node as a copy of the start node i.e end->pointer") : "";

    verboseflag == 1 ? circular_display_node(p, "STEP (p): Check if the index to be updated is the start node") : "";
    if (index == 0)
    {
        p->payload = payload;
        verboseflag == 1 ? circular_display_node(p, "STEP (P): Update p with the new payload value") : "";
    }
    else
    {
        for (position; position < (index); position++)
        {
            if (p->pointer == NULL)
            {
                verboseflag == 1 ? circular_display_node(p, "STEP (p): Displaying the last element. No such element") : "";
                return end;
            }
            p = p->pointer;
        }
        verboseflag == 1 ? circular_display_node(p, "STEP (p): Enumerate p to the element whose value is to be updated") : "";

        p->payload = payload;
        verboseflag == 1 ? circular_display_node(p, "STEP (p): Update p with the new payload value") : "";
    }

    verboseflag == 1 ? circular_display_linked_list(end, "Final linked list") : "";
    press_enter_to_continue();

    return end;
}

struct node *circularUpdateElement(struct node *end, int element, int payload)
{
    verboseflag == 1 ? circular_display_linked_list(end, "Present linked list") : "";

    struct node *p;
    int position;

    p = end->pointer;
    verboseflag == 1 ? circular_display_node(p, "STEP (p): Initialize p node as a copy of the start node i.e end->pointer") : "";

    while (p->pointer != NULL)
    {
        if (p->payload == element)
        {
            break;
        }
        else
        {
            if (p->pointer->pointer == NULL && p->pointer->payload != element)
            {
                verboseflag == 1 ? circular_display_node(p, "STEP (p): Displaying the last element. No such element") : "";
                return end;
            }
            p = p->pointer;
        }
    }
    verboseflag == 1 ? circular_display_node(p, "STEP (p): Enumerate p to the index of the node whose payload is to be updated") : "";

    p->payload = payload;
    verboseflag == 1 ? circular_display_node(p, "STEP (p): Update p with the new payload value") : "";

    verboseflag == 1 ? circular_display_linked_list(end, "Final linked list") : "";
    press_enter_to_continue();
    return end;
}
