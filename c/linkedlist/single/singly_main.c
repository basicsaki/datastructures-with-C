//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
void banner();
void singly_submenu();
char *banner_text[];
struct node *create_linked_list(struct node *start, int length);

void clear_menu(char *message);

// struct node *create_linked_list(){};

void display_linked_list();

typedef struct node
{
    int payload;
    struct node *pointer;
} node;

//main menu
void main()
{
    int singly_option, exit = 0;
    int user_input, list_length = 0; //, exit = 0;
    node *start = NULL;

    banner();
    singly_submenu();
    while (exit == 0)
    {
        scanf("%d", &singly_option);

        switch (singly_option)
        {
        case 1:
            clear_menu("Menu options");
            free(start);
            node *start = NULL;
            printf("Enter the number of elements you want inside the list\n\n");
            scanf("%d", &list_length);
            start = create_linked_list(start, list_length);
            clear_menu("Single linked list created");
            break;
        case 2:
            clear_menu("Displaying the list! Select another option!");
            display_linked_list(start);
            break;
        case 0:
            // system("clear");
            exit = 1;
            printf("\n Bye! Have a good day!\n");
            break;
        default:
            system("clear");
            singly_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\n Select a new option\n");
            break;
        }
    }
}

char *banner_text[] = {
    " #####\n"
    "#     #     #    #    #   ####   #        #   #\n"
    "#           #    ##   #  #    #  #         # #\n"
    " #####      #    # #  #  #       #          #\n"
    "      #     #    #  # #  #  ###  #          #\n"
    "#     #     #    #   ##  #    #  #          #\n"
    " #####      #    #    #   ####   ######     #\n"};

//function definations
void banner()
{
    puts(*banner_text);
}

void singly_submenu()
{
    printf("\n\nWelcome to Singly linked list\n\n");
    printf("1. \tCreate a new list\n");
    printf("2. \tDisplay the list\n");
    printf("0. \tExit\n");
    printf("\n\n");
}

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
    // printf("[");
    while (start->pointer != NULL)
    {
        printf(" %d \t--->\t", start->payload);
        start = start->pointer;
    }
    printf("%d \n\n", start->payload);
    // printf("inside display linked list\n\n");
}

void clear_menu(char *message)
{
    system("clear");
    printf("%s\n", message);
    singly_submenu();
}