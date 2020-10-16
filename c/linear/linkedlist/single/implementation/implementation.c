#include "implementation.h"
#include "./../banner_menu/bm.h"

struct node *create_linked_list(struct node *start, int length)
{
    struct node *temp, *p;
    int user_input, pi;
    p = start;

    for (int i = 0; i < length; i++)
    {
        printf("Enter the element\n\n");
        scanf("%d", &user_input);
        // printf("\n%d added to the list \n", user_input);
        temp = (struct node *)malloc(sizeof(struct node));
        temp->payload = user_input;
        temp->pointer = p;
        p = temp;
        clear_menu("Added to the list, enter next element", 0);
    }
    start = temp;
    return start;
}