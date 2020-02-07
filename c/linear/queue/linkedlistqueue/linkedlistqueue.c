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

struct node *llfront, *llrear;

void llenqueue(int integer);
void lldequeue();
void lldisplay();
void lldisplay_limits();
void lldisplay_size();
int llempty();
int llfull();

// #include "./linkedlist/linked.h"

//main menu
void linkedlistqueuemain()
{
    int linkedlistqueueexit = 0, linkedlistqueue_option, integer;
    linkedlistqueue_clear_menu("", 0);
    linkedlistqueue_banner();
    linkedlistqueue_submenu();

    llfront = NULL;
    llrear = NULL;

    while (linkedlistqueueexit == 0)
    {
        scanf("%d", &linkedlistqueue_option);
        // while (getchar() != '\n')
        // {
        //     continue;
        // }
        switch (linkedlistqueue_option)
        {
        case 1:
            linkedlistqueue_clear_menu("Queue: Display", 1);
            lldisplay();
            press_enter_to_continue();
            linkedlistqueue_clear_menu("Queue(using linked list): Menu", 1);
            // linkedlistqueue_submenu();
            break;
        case 2:
            linkedlistqueue_clear_menu("Queue: Insert", 1);
            printf("Please enter an integer for enqueue\n");
            scanf("%d", &integer);
            llenqueue(integer);
            press_enter_to_continue();
            linkedlistqueue_clear_menu("Queue(using linked list): Menu", 1);
            // linkedlistqueue_submenu();
            break;
        case 3:
            linkedlistqueue_clear_menu("Queue: Dequeue", 1);
            lldequeue();
            press_enter_to_continue();
            linkedlistqueue_clear_menu("Queue(using linked list): Menu", 1);
            // linkedlistqueue_submenu();
            break;
        case 4:
            linkedlistqueue_clear_menu("Queue: Count", 1);
            lldisplay_size();
            press_enter_to_continue();
            linkedlistqueue_clear_menu("Queue(using linked list): Menu", 1);
            // linkedlistqueue_submenu();
            break;
        case 5:
            linkedlistqueue_clear_menu("Queue: Limits", 1);
            lldisplay_limits();
            press_enter_to_continue();
            linkedlistqueue_clear_menu("Queue(using linked list): Menu", 1);
            // linkedlistqueue_submenu();
            break;
        case 0:
            linkedlistqueueexit = 1;
            linkedlistqueue_clear_menu("Linear: Menu", 0);
            break;
        default:
            system("clear");
            linkedlistqueue_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect a new option\n");
            break;
        }
    }
}

void llenqueue(int integer)
{
    if (llfull())
    {
        printf("\nQueue overflow\n");
    }
    else
    {
        struct node *temp;
        temp = (struct node *)malloc(sizeof(struct node));

        if (llfront == NULL)
        {
            llfront = (struct node *)malloc(sizeof(struct node));
            llrear = (struct node *)malloc(sizeof(struct node));
            temp->payload = integer;
            temp->pointer = NULL;
            llfront = temp;
            llrear = temp;
        }
        else
        {
            temp->payload = integer;
            temp->pointer = NULL;
            llrear->pointer = temp;
            llrear = temp;
        }
    }
}

void lldequeue()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (llempty())
    {
        printf("\nThe queue is empty\n");
        printf("Queue underflow\n");
    }
    else
    {
        if (llfront->pointer == NULL)
        {
            // temp->pointer = llfront->pointer;
            free(llfront);
            free(llrear);
            // temp->payload = llfront->payload;
            llfront = NULL;
            llrear = NULL;
        }
        else
        {
            temp->pointer = llfront->pointer->pointer;
            temp->payload = llfront->pointer->payload;
            free(llfront);
            llfront = temp;
        }
    }
}

int llempty()
{
    if (llfront == NULL)
    {
        return 1;
    }
    return 0;
}

int llfull()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("\nNo more space\n");
        return 1;
    }
    return 0;
}

void lldisplay()
{
    struct node *p;
    if (llempty())
    {
        printf("\nThe queue is empty\n");
    }
    else
    {
        p = llfront;

        while (p->pointer != NULL)
        {
            printf("%d--", p->payload);
            p = p->pointer;
        }
        printf("%d", p->payload);
    }
}
void lldisplay_limits()
{
    if (llempty())
    {
        printf("\nThe queue is empty\n");
    }
    else
    {
        printf("\nThe front element is %d\n", llfront->payload);
        printf("\nThe rear element is %d\n", llrear->payload);
    }
}
void lldisplay_size()
{
    struct node *p;
    p = llfront;
    int count = 0;
    if (llempty())
    {
        printf("\nThe queue is empty\n");
    }
    else
    {
        while (p->pointer != NULL)
        {
            count++;
            p = p->pointer;
        }
        count++;

        printf("\nCount: %d\n", count);
    }
};
