#include "traversal.h"

void display_linked_list(struct node *start, char *message)
{
    printf("\n%s\n", message);
    struct node *p;
    p = start;
    if (start == NULL)
    {
        printf("List is empty\n");
        return;
    }
    while (p->pointer != NULL)
    {
        printf("%d(MemLocation: %p)-Pointer(: %p)  --->  ", p->payload, &p->payload, p->pointer);
        p = p->pointer;
    }
    printf("%d(MemLocation: %p)-Pointer(: %p)\n\n", p->payload, &p->payload, p->pointer);
}

void display_node(struct node *start, char *message)
{
    printf("\n%s\n", message);
    if (start == NULL)
    {
        printf("Node is empty\n");
        return;
    }
    printf("%d(MemLocation: %p)-Pointer(: %p)\t\n", start->payload, &start->payload, start->pointer);
}