#include "traversal.h"

void display_linked_list(struct node *start)
{
    // printf("[");
    while (start->pointer != NULL)
    {
        printf(" %d \t--->\t", start->payload);
        start = start->pointer;
    }
    printf("%d \n\n", start->payload);
    // printf("inside display linked list\n\n");
}