#include "implementation.h"
#include "./../banner_menu/bm.h"
#include "./../traversal/traversal.h"
// #include "./../../../../../common.h"

struct node *create_linked_list(struct node *start, int length)
{
    struct node *temp, *p;
    int user_input, pi;
    p = start;

    for (int i = 0; i < length; i++)
    {
        printf("Enter element to be inserted in the list\n");
        scanf("%d", &user_input);
        // printf("\n%d added to the list \n", user_input);
        temp = (struct node *)malloc(sizeof(struct node));
        temp->payload = user_input;
        temp->pointer = p;
        p = temp;
        singly_clear_menu("Added to the list, enter next element", 0);
    }
    start = temp;
    return start;
}

struct node *insertInBeginning(struct node *start, int payload)
{
    node *temp, *p;
    verboseflag == 1 ? display_linked_list(start, "Present linked list") : "";

    temp = (struct node *)malloc(sizeof(struct node));
    verboseflag == 1 ? display_node(temp, "STEP 1:Initialize Temp user element") : "";

    temp->payload = payload;
    verboseflag == 1 ? display_node(temp, "\nSTEP 2:Set the payload value in temp") : "";

    temp->pointer = start;
    verboseflag == 1 ? display_node(temp, "\nSTEP 3:Set the temp pointer to previous start element") : "";

    start = temp;
    verboseflag == 1 ? display_node(start, "\nSTEP 4: Replacing start with new start(temp)") : "";

    verboseflag == 1 ? display_linked_list(start, "Final linked list") : "";

    press_enter_to_continue();
    return start;
}

struct node *insertAtEnd(node *start, int payload)
{
    node *temp, *p;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->payload = payload;
    temp->pointer = NULL;
    p = start;
    while (p->pointer != NULL)
    {
        p = p->pointer;
    }
    p->pointer = temp;
    return start;
}

struct node *insertAtPosition(node *start, int index, int payload)
{
    node *temp, *p;
    int position = 0;
    p = start;
    for (position; position < (index - 1); position++)
    {
        if (p->pointer == NULL)
        {
            printf("No such index in the list");
            return start;
        }
        p = p->pointer;
    }

    temp = (struct node *)malloc(sizeof(struct node));
    temp->payload = payload;
    temp->pointer = p->pointer;
    p->pointer = temp;
    return start;
}

struct node *insertAfter(node *start, int element, int payload)
{
    node *temp, *p;
    int position = 0;

    p = start;
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
                printf("No such element in the list");
                return start;
            }
            p = p->pointer;
        }
    };

    temp = (struct node *)malloc(sizeof(struct node));
    temp->payload = payload;
    temp->pointer = p->pointer;

    p->pointer = temp;
    return start;
}

struct node *insertBefore(node *start, int element, int payload)
{
    node *temp, *p;
    int position = 0;

    p = start;
    if (p->payload == element)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->payload = payload;
        temp->pointer = p;
        start = temp;
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
                printf("No such element in the list");
                return start;
            }

            p = p->pointer;
        }
    };

    temp = (struct node *)malloc(sizeof(struct node));
    temp->payload = payload;
    temp->pointer = p->pointer;

    p->pointer = temp;
    return start;
}
