#include "implementation.h"
#include "./../banner_menu/bm.h"
#include "./../traversal/traversal.h"
// #include "./../../../../../common.h"

struct node *circular_create_linked_list(struct node *end, int length)
{

    struct node *temp, *p, *start;
    int user_input, pi;

    p = end;
    // verboseflag == 1 ? circular_display_linked_list(end, "STEP 1 : Initialize p node as a copy of the start node") : "";

    printf("Enter element to be inserted in the list\n");
    scanf("%d", &user_input);
    temp = (struct node *)malloc(sizeof(struct node));
    start = (struct node *)malloc(sizeof(struct node));

    temp->payload = user_input;
    start = temp;
    start->pointer = start;

    end = start;
    for (int i = 0; i < length - 1; i++)
    {
        verboseflag == 1 ? circular_display_linked_list(end, "Present linked list") : "";
        printf("Enter element to be inserted in the list\n");
        scanf("%d", &user_input);

        // temp = (struct node *)malloc(sizeof(struct node));
        verboseflag == 1 ? circular_display_linked_list(temp, "STEP : Initialize memory for a temp node (payload + pointer) memory") : "";
        temp = (struct node *)malloc(sizeof(struct node));

        temp->payload = user_input;
        verboseflag == 1 ? circular_display_node(temp, "STEP temp: Set the payload value in temp") : "";

        end->pointer = temp;
        verboseflag == 1 ? circular_display_node(end, "STEP End: Set temp pointer to p node") : "";

        temp->pointer = start;
        verboseflag == 1 ? circular_display_node(end, "STEP TEMP: Set temp pointer to p node") : "";

        end = temp;

        verboseflag == 1 ? circular_display_node(end, "STEP : Copy temp node to node p") : "";

        // circular_clear_menu("Added to the list, enter next element", 0);
    }

    // while (p->pointer != NULL)
    // {
    //     p = p->pointer;
    // }
    // temp->pointer = p;

    // verboseflag == 1 ? circular_display_linked_list(p, "STEP : Replacing start node with new start(temp node)") : "";
    // end = temp;

    verboseflag == 1 ? circular_display_linked_list(end, "Final linked list") : "";
    press_enter_to_continue();

    return end;
}

struct node *circularInsertInBeginning(struct node *end, int payload)
{
    node *temp, *p;

    temp = (struct node *)malloc(sizeof(struct node));

    temp->payload = payload;
    temp->pointer = end->pointer;

    end->pointer = temp;

    // verboseflag == 1
    //     ? circular_display_linked_list(start, "Present linked list")
    //     : "";

    // verboseflag == 1 ? circular_display_node(temp, "STEP 1:Initialize Temp user element") : "";

    // temp->payload = payload;
    // verboseflag == 1 ? circular_display_node(temp, "\nSTEP 2: Set the payload value in temp") : "";

    // temp->pointer = start;
    // verboseflag == 1 ? circular_display_node(temp, "\nSTEP 3:Set the temp pointer to previous start node") : "";

    // start = temp;
    // verboseflag == 1 ? circular_display_node(start, "\nSTEP 4: Replacing start with new start(temp node)") : "";

    // verboseflag == 1 ? circular_display_linked_list(start, "Final linked list") : "";
    // press_enter_to_continue();

    return end;
}

struct node *circularInsertAtEnd(node *end, int payload)
{

    node *temp;
    verboseflag == 1 ? circular_display_node(end, "STEP TEMP: Set temp pointer to p node") : "";

    temp = (struct node *)malloc(sizeof(struct node));
    temp->payload = payload;
    temp->pointer = end->pointer;
    end->pointer = temp;

    end = temp;

    // verboseflag == 1 ? circular_display_linked_list(start, "Present linked list") : "";

    // verboseflag == 1 ? circular_display_node(temp, "STEP 1:Initialize Temp user element") : "";

    // temp->payload = payload;
    // verboseflag == 1 ? circular_display_node(temp, "\nSTEP 2: Set the payload value in temp node") : "";

    // temp->pointer = NULL;
    // verboseflag == 1 ? circular_display_node(temp, "\nSTEP 3:Set the temp pointer to null") : "";

    // p = start;
    // verboseflag == 1 ? circular_display_node(p, "\nSTEP 4: Initialize p node as a copy of the start node for list traversal") : "";

    // while (p->pointer != NULL)
    // {
    //     p = p->pointer;
    // }
    // verboseflag == 1 ? circular_display_node(p, "\nSTEP 5:Enumerate to the last node") : "";

    // p->pointer = temp;
    // verboseflag == 1 ? circular_display_node(p, "\nSTEP 6:Replace the present last node pointer to our temp node memory address") : "";

    // verboseflag == 1 ? circular_display_linked_list(start, "Final linked list") : "";
    // press_enter_to_continue();

    return end;
}

struct node *circularInsertAtPosition(node *end, int index, int payload)
{
    verboseflag == 1 ? circular_display_node(end, "STEP TEMP: Set temp pointer to p node") : "";

    node *p, *temp;
    int i = 0;
    temp = (struct node *)malloc(sizeof(struct node));
    p = end->pointer;
    verboseflag == 1 ? circular_display_node(p, "STEP TEMP: Set temp pointer to p node") : "";

    temp->payload = payload;

    if (index == 0)
    {
        temp->pointer = end->pointer;
        end->pointer = temp;
        return end;
    }
    else
    {
        for (i = 0; i < (index - 1); i++)
        {
            printf("%d", i);
            if (p->pointer == end->pointer)
            {
                printf("No such index in the list");
                return end;
            }
            p = p->pointer;
        }
        temp->pointer = p->pointer;
        p->pointer = temp;
    }
    verboseflag == 1 ? circular_display_node(p, "STEP TEMP: Set temp pointer to p node") : "";

    return end;
}

struct node *circularInsertAfter(node *end, int element, int payload)
{
    node *temp, *start, *p;
    start = (struct node *)malloc(sizeof(struct node));
    temp = (struct node *)malloc(sizeof(struct node));
    start = end->pointer;
    p = start;
    temp->payload = payload;
    printf("d %d", p->payload);

    while (p->payload != element)
    {
        printf("p %d", p->payload);
        // printf("p");
        p = p->pointer;
    }

    temp->pointer = p->pointer;
    p->pointer = temp;

    return end;
}

struct node *circularInsertBefore(node *end, int element, int payload)
{
    node *temp, *start, *p;
    start = (struct node *)malloc(sizeof(struct node));
    temp = (struct node *)malloc(sizeof(struct node));
    start = end->pointer;
    p = start;
    temp->payload = payload;
    printf("d %d", p->payload);

    if (p->payload == payload)
    {
        temp->pointer = p;
        end->pointer = temp;
        // p->pointer = temp;
    }
    else
    {

        while (p->pointer->payload != element)
        {
            printf("p %d", p->payload);
            // printf("p");
            p = p->pointer;
        }
    }

    temp->pointer = p->pointer;
    p->pointer = temp;

    return end;
}
