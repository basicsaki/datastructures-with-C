#include "delete.h"
#include "./../traversal/traversal.h"
#include "./../banner_menu/bm.h"

struct node *circularDeleteAtIndex(struct node *end, int index)
{

    node *temp, *p;
    //first element

    if (index == 0)
    {
        if (end->pointer == end)
        {
            //only element
            p = NULL;
            free(end);
            return p;
        }
        else
        {
            //long list
            p = end->pointer->pointer;
            free(end->pointer);
            end->pointer = p;
            return end;
        }
    }

    //any element
    p = end->pointer;
    verboseflag == 1 ? circular_display_node(p, "p") : "";

    for (int i = 0; i < index - 1; i++)
    {
        p = p->pointer;
    }
    verboseflag == 1 ? circular_display_node(p, "p") : "";

    if (end->pointer == p->pointer->pointer)
    {
        temp = p->pointer->pointer;
        free(p->pointer);
        p->pointer = temp;
        return p;
    }

    temp = p->pointer->pointer;
    free(p->pointer);
    p->pointer = temp;
    return end;
}

struct node *circularDeleteElement(struct node *end, int element)
{
    verboseflag == 1 ? circular_display_linked_list(end, "Present linked list") : "";

    node *p, *temp;
    // int position = 0;
    p = end;
    verboseflag == 1 ? circular_display_node(p, "p") : "";

    //last element
    if (element == p->payload)
    {
        printf("lst true");
        //get node pointer which points to the last element
        while (p->pointer != end)
        {
            p = p->pointer;
        }
        verboseflag == 1 ? circular_display_node(p, "p") : "";

        if (p == end)
        {
            p = NULL;
            printf("inside here");
            free(end);
            return p;
        }
        p->pointer = end->pointer;
        free(end);
        verboseflag == 1 ? circular_display_node(p, "p") : "";

        return p;
    }
    else if (element == p->pointer->payload)
    {
        printf("first true");
        temp = p->pointer->pointer;
        verboseflag == 1 ? circular_display_node(p, "p") : "";
        verboseflag == 1 ? circular_display_node(temp, "temp") : "";
        free(p->pointer);
        p->pointer = temp;
        verboseflag == 1 ? circular_display_node(p, "p") : "";
        return p;
    }
    else
    {
        //get node pointer which points to the last element
        while (p->pointer->payload != element)
        {
            p = p->pointer;
        }
        printf("random true");
        verboseflag == 1 ? circular_display_node(p, "p") : "";
        temp = p->pointer->pointer;
        verboseflag == 1 ? circular_display_node(temp, "temp") : "";
        free(p->pointer);
        p->pointer = temp;
        verboseflag == 1 ? circular_display_node(p, "p") : "";
        return end;
    }

    return end;
}
