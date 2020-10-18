#include "delete.h"

struct node *deleteAtIndex(struct node *start, int index)
{
    node *p, *temp;
    // int position = 0;
    p = start;
    if (index == 0)
    {
        p = start->pointer;
        free(start);
        start = p;
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
    printf("%d this is the element", p->payload);
    temp = p->pointer->pointer;
    free(p->pointer);
    p->pointer = temp;
    return start;
}

struct node *deleteElement(struct node *start, int element)
{
    node *p, *temp;
    // int position = 0;
    p = start;
    if (element == p->payload)
    {
        p = p->pointer;
        free(start);
        start = p;
        return start;
    }
    p = start;
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
    free(p->pointer);
    p->pointer = temp;
    // start = p;
    return start;
}