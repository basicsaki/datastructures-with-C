#include "implementation.h"
#include "./../banner_menu/bm.h"
#include "./../traversal/traversal.h"
// #include "./../../../../../common.h"

struct node *create_linked_list(struct node *start, int length)
{

    struct node *temp, *p;
    int user_input, pi;

    p = start;
    verboseflag == 1 ? display_linked_list(start, "STEP (start): Initialize p node as a copy of the start node") : "";

    verboseflag == 1 ? display_node(start, "STEP (start): Iterate the number of elements that are to be added") : "";
    for (int i = 0; i < length; i++)
    {
        verboseflag == 1 ? display_linked_list(p, "Present linked list") : "";
        printf("\nEnter element to be inserted in the list\n");
        scanf("%d", &user_input);

        temp = (struct node *)malloc(sizeof(struct node));
        verboseflag == 1 ? display_node(temp, "STEP (temp): Initialize memory for a temp node (payload + pointer) memory") : "";

        temp->payload = user_input;
        verboseflag == 1 ? display_node(temp, "STEP (temp): Set the payload value in temp") : "";

        temp->pointer = p;
        verboseflag == 1 ? display_node(temp->pointer, "STEP (temp->pointer): Set temp pointer to p node") : "";

        p = temp;
        verboseflag == 1 ? display_node(p, "STEP (p): Copy temp node to node p") : "";

        singly_clear_menu("Added to the list, enter next element", 0);
    }

    start = temp;
    verboseflag == 1 ? display_node(start, "STEP (start): Replacing start node with new start(temp node)") : "";

    verboseflag == 1 ? display_linked_list(start, "Final linked list") : "";
    press_enter_to_continue();

    return start;
}

struct node *insertInBeginning(struct node *start, int payload)
{
    node *temp, *p;
    verboseflag == 1 ? display_linked_list(start, "Present linked list") : "";

    temp = (struct node *)malloc(sizeof(struct node));
    verboseflag == 1 ? display_node(temp, "STEP (temp):Initialize Temp user element") : "";

    temp->payload = payload;
    verboseflag == 1 ? display_node(temp, "STEP (temp): Set the payload value in temp") : "";

    temp->pointer = start;
    verboseflag == 1 ? display_node(temp->pointer, "STEP (temp->pointer):Set the temp pointer to previous start node") : "";

    start = temp;
    verboseflag == 1 ? display_node(start, "STEP (start): Replacing start with new start(temp node)") : "";

    verboseflag == 1 ? display_linked_list(start, "Final linked list") : "";
    press_enter_to_continue();

    return start;
}

struct node *insertAtEnd(node *start, int payload)
{
    node *temp, *p;
    verboseflag == 1 ? display_linked_list(start, "Present linked list") : "";

    temp = (struct node *)malloc(sizeof(struct node));
    verboseflag == 1 ? display_node(temp, "STEP (temp):Initialize Temp user element") : "";

    temp->payload = payload;
    verboseflag == 1 ? display_node(temp, "STEP (temp): Set the payload value in temp node") : "";

    temp->pointer = NULL;
    verboseflag == 1 ? display_node(temp->pointer, "STEP (temp->pointer): Set the temp pointer to null") : "";

    p = start;
    verboseflag == 1 ? display_node(p, "STEP (p): Initialize p node as a copy of the start node for list traversal") : "";

    while (p->pointer != NULL)
    {
        p = p->pointer;
    }
    verboseflag == 1 ? display_node(p, "STEP (p):Enumerate to the last node") : "";

    p->pointer = temp;
    verboseflag == 1 ? display_node(p->pointer, "STEP (p->pointer):Replace the present last node pointer to our temp node memory address") : "";

    verboseflag == 1 ? display_linked_list(start, "Final linked list") : "";
    press_enter_to_continue();

    return start;
}

struct node *insertAtPosition(node *start, int index, int payload)
{
    verboseflag == 1 ? display_linked_list(start, "Present linked list") : "";

    node *temp, *p;
    int position = 0;

    p = start;
    verboseflag == 1 ? display_node(p, "STEP (p): Initialize p node as a copy of the start node for list traversal") : "";

    if (index == 0)
    {
        start = insertInBeginning(start, payload);
        return start;
    }

    for (position; position < (index - 1); position++)
    {
        if (p->pointer == NULL)
        {
            verboseflag == 1 ? display_node(p, "STEP (p): Displaying the last element. No such element") : "";
            press_enter_to_continue();
            return start;
        }
        p = p->pointer;
    }
    verboseflag == 1 ? display_node(p, "\nSTEP (p): Enumerate to the node at index-1 position(We need the node after which we need to add our node") : "";

    temp = (struct node *)malloc(sizeof(struct node));
    verboseflag == 1 ? display_node(temp, "STEP (temp): Initialize Temp memory") : "";

    temp->payload = payload;
    verboseflag == 1 ? display_node(temp, "STEP (temp): Set the payload value in temp") : "";

    temp->pointer = p->pointer;
    verboseflag == 1 ? display_node(temp->pointer, "STEP (temp->pointer): Set the temp pointer to p pointer ie to the previous node to which p was pointing") : "";

    p->pointer = temp;
    verboseflag == 1 ? display_node(p->pointer, "STEP (p->pointer): Set the p pointer to temp element") : "";

    verboseflag == 1 ? display_linked_list(start, "Final linked list") : "";
    press_enter_to_continue();

    return start;
}

struct node *insertAfter(node *start, int element, int payload)
{
    verboseflag == 1 ? display_linked_list(start, "Present linked list") : "";
    node *temp, *p;
    int position = 0;

    p = start;
    verboseflag == 1 ? display_node(p, "STEP (p): Set start value in another node p for list traversal") : "";

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
                verboseflag == 1 ? display_node(p, "STEP (p): Displaying the last element. No such element") : "";
                press_enter_to_continue();
                return start;
            }
            p = p->pointer;
        }
    };
    verboseflag == 1 ? display_node(p, "STEP (p): Enumerate to the node with payload as the input payload and  node location with p") : "";

    temp = (struct node *)malloc(sizeof(struct node));
    verboseflag == 1 ? display_node(temp, "STEP (temp): Initialize Temp memory") : "";

    temp->payload = payload;
    verboseflag == 1 ? display_node(temp, "STEP (temp): Set the payload value in temp") : "";

    temp->pointer = p->pointer;
    verboseflag == 1 ? display_node(temp->pointer, "STEP (temp->pointer): TEMP: Set the temp pointer to p pointer ie to the next node to which p was pointing") : "";

    p->pointer = temp;
    verboseflag == 1 ? display_node(p->pointer, "STEP (p->pointer): Set the p pointer to the temp location") : "";

    verboseflag == 1 ? display_linked_list(start, "Final linked list") : "";
    press_enter_to_continue();

    return start;
}

struct node *insertBefore(node *start, int element, int payload)
{
    verboseflag == 1 ? display_linked_list(start, "Present linked list") : "";
    node *temp, *p;
    int position = 0;

    p = start;
    verboseflag == 1 ? display_node(p, "STEP (p): Initialize p node as a copy of the start node for list traversal") : "";

    verboseflag == 1 ? display_node(p, "STEP (p): Check if the element is the first element") : "";
    if (p->payload == element)
    {

        temp = (struct node *)malloc(sizeof(struct node));
        verboseflag == 1 ? display_node(temp, "STEP (temp): Initialize Temp memory") : "";

        temp->payload = payload;
        verboseflag == 1 ? display_node(temp, "STEP (temp): TEMP: Set the payload value in temp") : "";

        temp->pointer = p;
        verboseflag == 1 ? display_node(temp->pointer, "STEP (temp->pointer): TEMP: Set the temp pointer to p ie first element") : "";

        start = temp;
        verboseflag == 1 ? display_node(start, "STEP (start): START: Set the start pointer to new temp node") : "";

        verboseflag == 1 ? display_linked_list(start, "Final linked list") : "";
        press_enter_to_continue();
        return start;
    }

    while (p->pointer != NULL)
    {
        if (p->pointer->payload == element)
        {
            break;
        }
        else
        {
            if (p->pointer->pointer == NULL && p->pointer->payload != element)
            {
                verboseflag == 1 ? display_node(p, "STEP (p): Displaying the last element. No such element") : "";
                press_enter_to_continue();
                return start;
            }

            p = p->pointer;
        }
    };
    verboseflag == 1 ? display_node(p, "STEP (p): Enumerate to the node - 1 position contaning the value and store node location with p") : "";

    temp = (struct node *)malloc(sizeof(struct node));
    verboseflag == 1 ? display_node(temp, "STEP (temp):Initialize Temp node with memory") : "";

    temp->payload = payload;
    verboseflag == 1 ? display_node(temp, "STEP (temp): Set the payload value in temp") : "";

    temp->pointer = p->pointer;
    verboseflag == 1 ? display_node(temp->pointer, "STEP (temp->pointer): Set the temp pointer to p pointer ie to the next node to which p was pointing") : "";

    p->pointer = temp;
    verboseflag == 1 ? display_node(p->pointer, "STEP (p->pointer): Set the p pointer to the temp location") : "";

    verboseflag == 1 ? display_linked_list(start, "Final linked list") : "";
    press_enter_to_continue();

    return start;
}
