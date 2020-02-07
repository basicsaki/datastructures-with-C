#include "traversal.h"

void doubly_display_linked_list(struct node *start, char *message)
{
    printf("\n%s\n", message);
    struct node *p;
    p = start;
    if (start == NULL)
    {
        printf("List is empty\n\n");
        return;
    }
    while (p->nextpointer != NULL)
    {
        verboseflag == 0 ? printf("%d  --->  \n", p->payload) : printf("previouspointer(: %p Meml: %p)-%d(MemLocation: %p)-nextpointer(: %p Meml: %p)  ---> \n ", p->previouspointer, &p->previouspointer, p->payload, &p->payload, p->nextpointer, &p->nextpointer);
        p = p->nextpointer;
    }
    verboseflag == 0 ? printf("%d\n\n", p->payload) : printf("previouspointer(: %p Meml: %p)-%d(MemLocation: %p)-nextpointer(: %p Meml: %p)\n\n", p->previouspointer, &p->previouspointer, p->payload, &p->payload, p->nextpointer, &p->nextpointer);
}

void doubly_display_node(struct node *start, char *message)
{
    printf("\n%s\n", message);
    if (start == NULL)
    {
        printf("Node is empty\n\n");
        return;
    }
    verboseflag == 0 ? printf("%d\t\n\n", start->payload) : printf("previouspointer(: %p Meml: %p)-%d(MemLocation: %p)-nextpointer(: %p Meml: %p)\t\n", start->previouspointer, &start->previouspointer, start->payload, &start->payload, start->nextpointer, &start->nextpointer);
}