#include "traversal.h"

void display_linked_list(struct node *start)
{
    // printf("[");
    if (start == NULL)
    {
        printf("List is empty\n");
        return;
    }
    while (start->pointer != NULL)
    {
        printf(" %d \t--->\t", start->payload);
        start = start->pointer;
    }
    printf("%d \n\n", start->payload);
    // printf("inside display linked list\n\n");
}