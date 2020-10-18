#include <stdio.h>
#include <stdlib.h>
#include "update.h"

struct node *updateAtIndex(struct node *start, int index, int payload)
{
    struct node *p;
    int position = 0;
    p = start;
    if (index == 0)
    {
        p->payload = payload;
    }
    else
    {
        for (position; position < (index); position++)
        {
            if (p->pointer == NULL)
            {
                printf("No such index in the list");
                return start;
            }
            p = p->pointer;
        }
        p->payload = payload;
    }
    return start;
}

struct node *updateElement(struct node *start, int element, int payload)
{
    struct node *p;
    int position;
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
    }
    p->payload = payload;
    return start;
}
