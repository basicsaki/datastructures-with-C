#include "implementation.h"
#include "./../banner_menu/bm.h"
#include "./../traversal/traversal.h"
// #include "./../../../../../common.h"

struct node *circular_create_linked_list(struct node *end, int length)
{
    struct node *temp, *p, *start;
    int user_input, pi;

    p = end;
    verboseflag == 1 ? circular_display_node(p, "STEP (P) : Initialize p node as a copy of the start node") : "";

    //first element
    verboseflag == 1 ? circular_display_linked_list(p, "Present linked list") : "";

    printf("Enter element to be inserted in the list\n");
    scanf("%d", &user_input);
    temp = (struct node *)malloc(sizeof(struct node));
    start = (struct node *)malloc(sizeof(struct node));
    verboseflag == 1 ? circular_display_node(temp, "STEP (temp): Initialize memory for a temp node (payload + nextpointer) memory") : "";

    temp->payload = user_input;
    verboseflag == 1 ? circular_display_node(temp, "STEP (temp): Set the payload value in temp") : "";

    end = temp;
    verboseflag == 1 ? circular_display_node(end, "STEP (end): Set the end node as the temp node") : "";

    end->pointer = end;
    verboseflag == 1 ? circular_display_node(end, "STEP (end): Set the end node pointer to itself as it is the only node(for a circular implmentation)") : "";

    verboseflag == 1 ? circular_display_linked_list(end, "Final linked list") : "";
    press_enter_to_continue();

    start = end;

    for (int i = 0; i < length - 1; i++)
    {
        circular_clear_menu("Added to the list, enter next element", 0);
        verboseflag == 1 ? circular_display_linked_list(end, "Present linked list") : "";
        printf("Enter element to be inserted in the list\n");
        scanf("%d", &user_input);

        // temp = (struct node *)malloc(sizeof(struct node));
        temp = (struct node *)malloc(sizeof(struct node));
        verboseflag == 1 ? circular_display_node(temp, "STEP (temp): Initialize memory for a temp node (payload + pointer) memory") : "";

        temp->payload = user_input;
        verboseflag == 1 ? circular_display_node(temp, "STEP (temp): Set the payload value in temp") : "";

        end->pointer = temp;
        verboseflag == 1 ? circular_display_node(end->pointer, "STEP (end->pointer): Set end pointer to temp node") : "";

        temp->pointer = start;
        verboseflag == 1 ? circular_display_node(temp->pointer, "STEP (temp->pointer): Set temp pointer to start node(added in last)") : "";

        end = temp;
        verboseflag == 1 ? circular_display_node(end, "STEP (end): Copy temp node as end node") : "";

        verboseflag == 1 ? circular_display_linked_list(end, "Final linked list") : "";
        press_enter_to_continue();
    }

    return end;
}

struct node *circularInsertInBeginning(struct node *end, int payload)
{
    node *temp, *p;

    temp = (struct node *)malloc(sizeof(struct node));
    verboseflag == 1 ? circular_display_node(temp, "STEP (temp): Initialize memory for a temp node (payload + pointer) memory") : "";

    temp->payload = payload;
    verboseflag == 1 ? circular_display_node(temp, "STEP (temp): Set the payload value in temp") : "";

    temp->pointer = end->pointer;
    verboseflag == 1 ? circular_display_node(temp->pointer, "STEP (temp->pointer): Set temp pointer as end pointer i.e pointer to the index 1 node from new first node") : "";

    end->pointer = temp;
    verboseflag == 1 ? circular_display_node(end->pointer, "STEP (end->pointer): Set end pointer as temp node i.e pointer to the first node") : "";

    verboseflag == 1 ? circular_display_linked_list(end, "Final linked list") : "";
    press_enter_to_continue();
    return end;
}

struct node *circularInsertAtEnd(node *end, int payload)
{

    node *temp;

    temp = (struct node *)malloc(sizeof(struct node));
    verboseflag == 1 ? circular_display_node(temp, "STEP (temp): Initialize memory for a temp node (payload + pointer) memory") : "";

    temp->payload = payload;
    verboseflag == 1 ? circular_display_node(temp, "STEP (temp): Set the payload value in temp") : "";

    temp->pointer = end->pointer;
    verboseflag == 1 ? circular_display_node(temp->pointer, "STEP (temp->pointer): Set temp pointer as end pointer i.e pointer to the first node from the new last node") : "";

    end->pointer = temp;
    verboseflag == 1 ? circular_display_node(end->pointer, "STEP (end->pointer): Set end pointer as temp node i.e pointer to the last node from the previous last node") : "";

    end = temp;
    verboseflag == 1 ? circular_display_node(end, "STEP (end): Set temp as the new last node") : "";

    verboseflag == 1 ? circular_display_linked_list(end, "Final linked list") : "";
    press_enter_to_continue();

    return end;
}

struct node *circularInsertAtPosition(node *end, int index, int payload)
{
    node *p, *temp;
    int i = 0;

    p = end->pointer;
    verboseflag == 1 ? circular_display_node(p, "STEP (p): Initialize p as a start node i.e end->pointer") : "";

    temp = (struct node *)malloc(sizeof(struct node));
    verboseflag == 1 ? circular_display_node(temp, "STEP (temp): Initialize memory for a temp node (payload + pointer) memory") : "";

    temp->payload = payload;
    verboseflag == 1 ? circular_display_node(temp, "STEP (temp): Set the payload value in temp") : "";

    verboseflag == 1 ? circular_display_node(temp, "STEP (temp): Check if the index value is the first element") : "";
    if (index == 0)
    {
        temp->pointer = end->pointer;
        verboseflag == 1 ? circular_display_node(temp->pointer, "STEP (temp->pointer): If yes,set the temp pointer to the previous first pointer") : "";

        end->pointer = temp;
        verboseflag == 1 ? circular_display_node(end->pointer, "STEP (end->pointer): Set the pointer from the last node to the first node  i.e circular pointer from the last node to the new first node") : "";

        verboseflag == 1 ? circular_display_linked_list(end, "Final linked list") : "";
        press_enter_to_continue();

        return end;
    }
    else
    {
        for (i = 0; i < (index - 1); i++)
        {
            printf("%d", i);
            if (p->pointer == end->pointer)
            {
                verboseflag == 1 ? circular_display_node(p, "STEP (p): Displaying the last element. No such element") : "";
                press_enter_to_continue();
                return end;
            }
            p = p->pointer;
        }
        verboseflag == 1 ? circular_display_node(p, "STEP (p): Enumerate to the node at index-1 position(We need the node after which we need to add our node") : "";

        temp->pointer = p->pointer;
        verboseflag == 1 ? circular_display_node(temp->pointer, "STEP (temp->pointer): Set temp pointer to p pointer i.e pointer to the earlier node from p") : "";

        p->pointer = temp;
        verboseflag == 1 ? circular_display_node(p->pointer, "STEP (p->pointer): Point to the temp node from the found p node") : "";
    }

    verboseflag == 1 ? circular_display_linked_list(end, "Final linked list") : "";
    press_enter_to_continue();

    return end;
}

struct node *circularInsertAfter(node *end, int element, int payload)
{
    node *temp, *start, *p;
    start = (struct node *)malloc(sizeof(struct node));

    temp = (struct node *)malloc(sizeof(struct node));
    verboseflag == 1 ? circular_display_node(temp, "STEP (temp): Initialize memory for a temp node (payload + pointer) memory") : "";

    start = end->pointer;
    verboseflag == 1 ? circular_display_node(start, "STEP (start): Initialized start as the first node i.e pointer from the last node") : "";

    p = start;
    verboseflag == 1 ? circular_display_node(p, "STEP (p): Initialize p from the start node") : "";

    temp->payload = payload;
    verboseflag == 1 ? circular_display_node(temp, "STEP (temp): Set the payload value in temp") : "";

    while (p->payload != element)
    {
        p = p->pointer;
    }
    verboseflag == 1 ? circular_display_node(p, "STEP (p): Enumerate to the node position contaning the value and store node location with p") : "";

    temp->pointer = p->pointer;
    verboseflag == 1 ? circular_display_node(temp, "STEP (temp): Set the temp pointer as the p pointer i.e to the node which p was pointing") : "";

    p->pointer = temp;
    verboseflag == 1 ? circular_display_node(p->pointer, "STEP (p->pointer): Set the p pointer to temp i.e the new element") : "";

    verboseflag == 1 ? circular_display_linked_list(end, "Final linked list") : "";
    press_enter_to_continue();

    return end;
}

struct node *circularInsertBefore(node *end, int element, int payload)
{
    node *temp, *start, *p;
    start = (struct node *)malloc(sizeof(struct node));
    temp = (struct node *)malloc(sizeof(struct node));
    verboseflag == 1 ? circular_display_node(temp, "STEP (temp): Initialize memory for a temp node (payload + pointer) memory") : "";

    start = end->pointer;
    verboseflag == 1 ? circular_display_node(start, "STEP (start): Initialized start as the first node i.e pointer from the last node") : "";

    p = start;
    verboseflag == 1 ? circular_display_node(p, "STEP (p): Initialize p from the start node") : "";

    temp->payload = payload;
    verboseflag == 1 ? circular_display_node(temp, "STEP (temp): Set the payload value in temp") : "";

    //first element
    verboseflag == 1 ? circular_display_node(p, "STEP (p): Check if the payload is at the first node") : "";
    if (p->payload == payload)
    {
        temp->pointer = p;
        verboseflag == 1 ? circular_display_node(temp, "STEP (temp): If yes, set the temp pointer to p node") : "";

        end->pointer = temp;
        verboseflag == 1 ? circular_display_node(p, "STEP (p): set the end pointer to the new first node i.e temp") : "";
        // p->pointer = temp;
        verboseflag == 1 ? circular_display_linked_list(end, "Final linked list") : "";
        press_enter_to_continue();
        return end;
    }
    else
    {
        while (p->pointer->payload != element)
        {
            p = p->pointer;
        }
        verboseflag == 1 ? circular_display_node(p, "STEP (p): Enumerate to the node position contaning the value -1 index and store node location with p") : "";
    }

    temp->pointer = p->pointer;
    verboseflag == 1 ? circular_display_node(temp, "STEP (temp): Set the temp pointer as the p pointer i.e to the node which p was pointing") : "";

    p->pointer = temp;
    verboseflag == 1 ? circular_display_node(p, "STEP (p): Set the p pointer to temp i.e the new element") : "";

    verboseflag == 1 ? circular_display_linked_list(end, "Final linked list") : "";
    press_enter_to_continue();
    return end;
}
