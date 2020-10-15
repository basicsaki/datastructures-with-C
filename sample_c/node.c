#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int payload;
    struct node *pointer;
} node;

void main()
{
    int times, first_payload;
    node *temp = NULL, *chain = NULL, *start = NULL;

    // create_space();
    temp = (node *)malloc(sizeof(node));
    temp->payload = 1;
    temp->pointer = NULL;

    chain = (node *)malloc(sizeof(node));
    chain->payload = 2;
    chain->pointer = NULL;

    temp->pointer = chain;
    chain->pointer = temp;
    printf("Chain \n\n ");
    printf("main mem %p\n\n", chain);
    printf("pointer %p\n\n", chain->pointer);
    printf("value%d\n\n", chain->payload);

    printf("Temp \n\n ");
    printf("main mem %p\n\n", temp);
    printf("pointer %p\n\n", temp->pointer);
    printf("value %d\n\n", temp->payload);

    printf("Create a new list\n\n");
    printf("Enter number of elements\n\n");

    scanf("%d", &times);

    if (start == NULL)
    {
        start = (node *)malloc(sizeof(node));
        printf("Enter the first payload\n\n");
        scanf("%d", &first_payload);
        printf("%d - you entered", first_payload);
        start->payload = first_payload;
        start->pointer = NULL;
    };

    printf("Displaying list");

    printf("\n Payload %d \n\n", start->payload);
    for (int i = 0; i < times; i++)
    {
        printf("Enter the payload\n\n");
        scanf("%d", &first_payload);
        temp->payload = first_payload;
        chain = start;
        while (chain->pointer != NULL)
        {
            chain = chain->pointer;
        }
        temp->pointer = NULL;
    }

    // temp->pointer = &chain;

    // printf("tStrut\t location %p\t name %s\t value %d \n\n", &temp->payload, "temp payload", temp->payload);
    // printf("tpStrut\t location %p\t name %s\t value %p \n\n", &temp->pointer, "temp pointer", temp->pointer);

    // printf("cStrut\t location %p\t name %s\t valued %d \n\n", &chain->payload, "temp payload", chain->payload);
    // printf("cpStrut\t location %p\t name %s\t value %p \n\n", &chain->pointer, "temp pointer", chain->pointer);

    // printf("Digit\t location %p\t name %s\t value %d \n\n", &a, "a", a);
    // printf("Digit\t location %p\t name %s\t value %s \n\n", &b, "b", b);
    // puts(&temp);

    // int a = 15;
    // int *b = 16;

    // chain = (struct node *)malloc(sizeof(struct node));
    // chain->payload = 2;
    // chain->pointer = 0x7ffda27b2900;

    // printf("chainStrut\t location %p\t name %s\t value %d \n\n", &chain->payload, "temp payload", chain->payload);
    // printf("chainpStrut\t location %p\t name %s\t value %p \n\n", &chain->pointer, "temp pointer", chain->pointer);
}