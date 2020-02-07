#include "delete.h"
#include "./../traversal/traversal.h"
#include "./../banner_menu/bm.h"

struct node *circularDeleteAtIndex(struct node *end, int index)
{
    node *temp, *p;
    //first element
    verboseflag == 1 ? circular_display_node(end->pointer, "STEP (end->pointer): Check if the node is the first element") : "";
    if (index == 0)
    {
        verboseflag == 1 ? circular_display_node(end->pointer, "STEP (end->pointer): If yes, check if the node is the only element") : "";
        if (end->pointer == end)
        {
            //only element
            p = NULL;
            verboseflag == 1 ? circular_display_node(p, "STEP (p): If yes, set p as NULL i.e the new node") : "";

            free(end);
            verboseflag == 1 ? circular_display_node(end, "STEP (end): Free memory at the end element") : "";

            verboseflag == 1 ? circular_display_linked_list(end, "Final linked list") : "";
            press_enter_to_continue();

            return p;
        }
        else
        {
            //long list
            p = end->pointer->pointer;
            verboseflag == 1 ? circular_display_node(p, "STEP (p): If no, set p as the node on end pointer-> pointer next to next node i.e  we need to delete the next node") : "";

            free(end->pointer);
            verboseflag == 1 ? circular_display_node(p, "STEP (p): Free the new node from end pointer i.e to be deleted node") : "";

            end->pointer = p;
            verboseflag == 1 ? circular_display_node(p, "STEP (p): Set p as the new first node") : "";

            verboseflag == 1 ? circular_display_linked_list(end, "Final linked list") : "";
            press_enter_to_continue();

            return end;
        }
    }

    //any element

    p = end->pointer;
    verboseflag == 1 ? circular_display_node(p, "STEP (p): If no, set P as the start node i.e end->pointer") : "";

    for (int i = 0; i < index - 1; i++)
    {
        p = p->pointer;
    }
    verboseflag == 1 ? circular_display_node(p, "STEP (p): Enumerate p to the index-1 of the node whose payload is to be deleted") : "";

    verboseflag == 1 ? circular_display_node(p, "STEP (p): Check if it is the last node of the linked list") : "";
    if (end->pointer == p->pointer->pointer)
    {

        temp = p->pointer->pointer;
        verboseflag == 1 ? circular_display_node(temp, "STEP (temp): If yes, set temp as the start element") : "";

        free(p->pointer);
        verboseflag == 1 ? circular_display_node(p->pointer, "STEP (p->pointer): Free space at p pointer") : "";

        p->pointer = temp;
        verboseflag == 1 ? circular_display_node(p->pointer, "STEP (p->pointer): Set p pointer as temp") : "";

        verboseflag == 1 ? circular_display_linked_list(p, "Final linked list") : "";
        press_enter_to_continue();

        return p;
    }

    temp = p->pointer->pointer;
    verboseflag == 1 ? circular_display_node(temp, "STEP (temp): If no, set temp as the next to next element of p") : "";

    free(p->pointer);
    verboseflag == 1 ? circular_display_node(p->pointer, "STEP (p->pointer): If no, free value at p->pointer") : "";

    p->pointer = temp;
    verboseflag == 1 ? circular_display_node(p->pointer, "STEP (p->pointer): Point p->pointer to temp node") : "";

    verboseflag == 1 ? circular_display_linked_list(end, "Final linked list") : "";
    press_enter_to_continue();

    return end;
}

struct node *circularDeleteElement(struct node *end, int element)
{
    verboseflag == 1 ? circular_display_linked_list(end, "Present linked list") : "";

    node *p, *temp;
    // int position = 0;
    p = end;
    verboseflag == 1 ? circular_display_linked_list(p, "STEP (p): Set p as the end node") : "";

    //last element
    verboseflag == 1 ? circular_display_node(end, "STEP (end): Check if the node is the last element") : "";
    if (element == p->payload)
    {

        //get node pointer which points to the last element
        while (p->pointer != end)
        {
            p = p->pointer;
        }
        verboseflag == 1 ? circular_display_node(p, "STEP (p): If yes,get node pointer which points to the last element ") : "";

        verboseflag == 1 ? circular_display_node(p, "STEP (p): Check if P is the only element in the list") : "";
        if (p == end)
        {

            p = NULL;
            verboseflag == 1 ? circular_display_node(p, "STEP (p): If yes, set P as NULL") : "";

            free(end);
            verboseflag == 1 ? circular_display_node(end, "STEP (end): Free memory at the end node") : "";

            verboseflag == 1 ? circular_display_linked_list(p, "Final linked list") : "";
            press_enter_to_continue();

            return p;
        }

        p->pointer = end->pointer;
        verboseflag == 1 ? circular_display_node(p, "STEP (p): If no, set P pointer as end pointer i.e to the first element") : "";

        free(end);
        verboseflag == 1 ? circular_display_node(p, "STEP (p): Free the node last node") : "";

        verboseflag == 1 ? circular_display_linked_list(p, "Final linked list") : "";
        press_enter_to_continue();

        return p;
    }
    else if (element == p->pointer->payload)
    {
        verboseflag == 1 ? circular_display_node(p, "STEP (p): If no, Check it is the first element in the list") : "";

        temp = p->pointer->pointer;
        verboseflag == 1 ? circular_display_node(temp, "STEP (temp): Set temp as the node next to the next node to p node") : "";

        free(p->pointer);
        verboseflag == 1 ? circular_display_node(p->pointer, "STEP (p->pointer): Free space at p->pointer") : "";

        p->pointer = temp;
        verboseflag == 1 ? circular_display_node(p->pointer, "STEP (p->pointer): Set new p->pointer as the temp element") : "";

        verboseflag == 1 ? circular_display_linked_list(p, "Final linked list") : "";
        press_enter_to_continue();

        return p;
    }
    else
    {

        while (p->pointer->payload != element)
        {
            p = p->pointer;
        }
        verboseflag == 1 ? circular_display_node(p, "STEP (p): If the node is not at the start or at the end, enumerate to the node at index-1 position(We need the node after which we need to delete our node") : "";

        temp = p->pointer->pointer;
        verboseflag == 1 ? circular_display_node(temp, "STEP (temp): Set temp as the next to next node from p") : "";

        free(p->pointer);
        verboseflag == 1 ? circular_display_node(p->pointer, "STEP (p->pointer): Free space at p->pointer") : "";

        p->pointer = temp;
        verboseflag == 1 ? circular_display_node(p->pointer, "STEP (p->pointer): Set new p->pointer to the temp element") : "";

        verboseflag == 1 ? circular_display_linked_list(end, "Final linked list") : "";
        press_enter_to_continue();

        return end;
    }

    verboseflag == 1 ? circular_display_linked_list(end, "Final linked list") : "";
    press_enter_to_continue();

    return end;
}
