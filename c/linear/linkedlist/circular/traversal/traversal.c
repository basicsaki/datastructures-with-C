#include "traversal.h"

void circular_display_linked_list(struct node *end, char *message)
{
    printf("\n%s\n", message);
    struct node *p;

    if (end == NULL)
    {
        printf("List is empty\n");
        return;
    }
    p = end->pointer;

    do
    {
        if (p->pointer == end->pointer)
        {
            verboseflag == 0 ? printf("%d \n", p->payload) : printf("%d(MemLocation: %p)-Pointer(: %p)\n\n", p->payload, &p->payload, p->pointer);
        }
        else
        {
            verboseflag == 0 ? printf("%d  --->  ", p->payload) : printf("%d(MemLocation: %p)-Pointer(: %p)  --->  \n", p->payload, &p->payload, p->pointer);
        }

        p = p->pointer;
    } while (p != end->pointer);
}

void circular_display_node(struct node *start, char *message)
{
    printf("\n%s\n", message);
    if (start == NULL)
    {
        printf("Node is empty\n");
        return;
    }
    verboseflag == 0 ? printf("%d\t\n", start->payload) : printf("%d(MemLocation: %p)-Pointer(: %p)\t\n", start->payload, &start->payload, start->pointer);
}