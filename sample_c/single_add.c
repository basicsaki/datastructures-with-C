#include <stdio.h>
#include <stdlib.h>

// decleration
void banner()
{
    printf("\n \t\t Welcome! \n\nSingle List \n\nMenu \n");
    printf("Please select an option \n\n");
}

struct node *create_linked_list(struct node *start, int length);

// struct node *create_linked_list(){};

void display_linked_list();

typedef struct node
{
    int payload;
    struct node *pointer;
} node;

void menu()
{
    printf("Press 1 to create a new linked list \n");
    printf("Press 2 to view the linked list \n");
    printf("Press 0 to exit \n\n");
}

//call
void main()
{
    int user_input, list_length = 0, exit = 0;
    node *start = NULL;

    banner();
    while (exit == 0)
    {

        menu();
        scanf("%d", &user_input);
        switch (user_input)
        {
        case 1:
            free(start);
            node *start = NULL;
            printf("Enter the number of elements you want inside the list\n\n");
            scanf("%d", &list_length);
            start = create_linked_list(start, list_length);
            break;
            /* code */
        case 2:
            display_linked_list(start);
            break;
        case 0:
            exit = 1;
            printf("Bye!\n\n");
            break;
            // exit(1);
        default:
            printf("Please select an option from the menu\n\n");
            break;
        }
    }
}

//defination
struct node *create_linked_list(struct node *start, int length)
{
    struct node *temp, *p;
    int user_input, pi;
    p = start;

    for (int i = 0; i < length; i++)
    {
        printf("Enter the element\n\n");
        scanf("%d", &user_input);
        printf("user input is %d \n", user_input);
        temp = (struct node *)malloc(sizeof(struct node));
        temp->payload = user_input;
        temp->pointer = p;
        p = temp;
    }
    start = temp;
    return start;
}

void display_linked_list(struct node *start)
{
    while (start->pointer != NULL)
    {
        printf(" %d -> \t", start->payload);
        start = start->pointer;
    }
    printf("%d \n", start->payload);
    // printf("inside display linked list\n\n");
}
