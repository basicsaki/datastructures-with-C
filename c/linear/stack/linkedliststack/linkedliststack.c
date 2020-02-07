//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"
#include "../../../../common.h"

struct node
{
    int payload;
    struct node *pointer;
};

struct node *lltop;

void llpush(int integer);
int llpop();
void llqdisplay();
void llqdisplay_top();
void llqdisplay_size();
int llqempty();
int llqfull();

void linkedliststackmain()
{

    int linkedliststackexit = 0, linkedliststack_option, integer, poped;
    linkedliststack_clear_menu("", 0);
    linkedliststack_banner();
    lltop = NULL;
    linkedliststack_submenu();
    while (linkedliststackexit == 0)
    {
        scanf("%d", &linkedliststack_option);
        // while (getchar() != '\n')
        // {
        //     continue;
        // }
        switch (linkedliststack_option)
        {
        case 1:
            linkedliststack_clear_menu("Stack: Display", 1);
            llqdisplay();
            press_enter_to_continue();
            linkedliststack_clear_menu("Stack(using linkedlist): Menu", 1);
            break;

        case 2:
            linkedliststack_clear_menu("Stack: Push", 1);
            printf("Please enter an integer for push\n");
            scanf("%d", &integer);
            llpush(integer);
            press_enter_to_continue();
            linkedliststack_clear_menu("Stack(using linkedlist): Menu", 1);
            break;
        case 3:
            linkedliststack_clear_menu("Stack: Pop", 1);
            // linkedliststack_clear_menu("Stack pop", 1);
            poped = llpop();
            if (poped == -1)
            {
                printf("\nStack underflow\n");
            }
            else
            {
                printf("\nPoped value is %d\n", poped);
            }
            press_enter_to_continue();
            linkedliststack_clear_menu("Stack(using linkedlist): Menu", 1);

            break;
        case 4:
            linkedliststack_clear_menu("Stack: Count", 1);
            llqdisplay_size();
            press_enter_to_continue();
            linkedliststack_clear_menu("Stack(using linkedlist): Menu", 1);

            break;
        case 5:
            linkedliststack_clear_menu("Stack: Display top", 1);
            llqdisplay_top();
            press_enter_to_continue();
            linkedliststack_clear_menu("Stack(using linkedlist): Menu", 1);
            break;
        case 0:
            linkedliststackexit = 1;
            linkedliststack_clear_menu("Stack: Menu", 0);
            break;
        default:
            system("clear");
            linkedliststack_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect a new option\n");
            break;
        }
    }
}

void llpush(int integer)
{
    struct node *temp, *p;

    temp = (struct node *)malloc(sizeof(struct node));

    if (lltop == NULL)
    {
        lltop = (struct node *)malloc(sizeof(struct node));
        lltop->payload = integer;
        lltop->pointer = NULL;
    }
    else
    {
        temp->payload = integer;
        temp->pointer = lltop;
        lltop = temp;
    }
}

int llpop()
{
    struct node *temp;
    int value;
    temp = (struct node *)malloc(sizeof(struct node));
    if (llqempty())
    {
        printf("The stack is empty\n");
        return -1;
    }
    else
    {
        value = lltop->payload;
        if (lltop->pointer == NULL)
        {
            lltop = NULL;
            return value;
        }
        temp->payload = lltop->pointer->payload;
        temp->pointer = lltop->pointer->pointer;
        lltop = temp;
        return value;
    }
}

int llqempty()
{
    if (lltop == NULL)
    {
        return 1;
    }
    return 0;
}

int llqfull()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("No Memory: Stack Overflow!!\n");
        return 1;
    }
    return 0;
}

void llqdisplay()
{
    struct node *p;
    // p = (struct node *)malloc(sizeof(struct node));
    if (llqempty())
    {
        printf("The stack is empty\n");
    }
    else
    {
        p = lltop;
        printf("Present Stack: \n");
        while (p->pointer != NULL)
        {
            printf("%d--", p->payload);
            p = p->pointer;
        }
        printf("%d\n", p->payload);
    }
}

void llqdisplay_top()
{
    if (llqempty())
    {
        printf("The stack is empty\n");
    }
    else
    {
        printf("The top of the stack is %d\n", lltop->payload);
    }
};

void llqdisplay_size()
{
    int count = 0;
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));

    if (llqempty())
    {
        printf("The stack is empty\n");
    }
    else
    {
        p = lltop;
        while (p->pointer != NULL)
        {
            count++;
            p = p->pointer;
        }
        count++;
        printf("Count: %d\n", count);
    }
};
