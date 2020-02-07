//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"
#include "../../../../common.h"

int queue[4], front = -1, rear = -1;

void enqueue(int integer);
void dequeue();
void display();
void display_limits();
void display_size();
int empty();
int full();

// #include "./linkedlist/linked.h"

//main menu
void arrayqueuemain()
{
    int arrayqueueexit = 0, arrayqueue_option, integer;
    arrayqueue_clear_menu("", 0);
    arrayqueue_banner();
    arrayqueue_submenu();
    while (arrayqueueexit == 0)
    {
        scanf("%d", &arrayqueue_option);
        // while (getchar() != '\n')
        // {
        //     continue;
        // }
        switch (arrayqueue_option)
        {
        case 1:
            arrayqueue_clear_menu("Queue: Display", 1);
            display();
            press_enter_to_continue();
            arrayqueue_clear_menu("Type options", 1);
            // arrayqueue_submenu();
            break;
        case 2:
            arrayqueue_clear_menu("Queue: Enqueue", 1);
            printf("Please enter an integer to enqueue\n");
            scanf("%d", &integer);
            enqueue(integer);
            press_enter_to_continue();
            arrayqueue_clear_menu("Queue: Menu", 1);
            break;
        case 3:
            arrayqueue_clear_menu("Queue: Dequeue", 1);
            dequeue();
            press_enter_to_continue();
            arrayqueue_clear_menu("Queue: Menu", 1);
            break;
        case 4:
            arrayqueue_clear_menu("Queue: Count", 1);
            display_size();
            press_enter_to_continue();
            arrayqueue_clear_menu("Queue: Menu", 1);
            break;
        case 5:
            arrayqueue_clear_menu("Queue: Limits", 1);
            display_limits();
            press_enter_to_continue();
            arrayqueue_clear_menu("Queue: Menu", 1);
            break;
        case 0:
            arrayqueueexit = 1;
            arrayqueue_clear_menu("Main menu", 0);
            break;
        default:
            system("clear");
            arrayqueue_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect new option\n");
            break;
        }
    }
}

void enqueue(int integer)
{
    if (full() == 1)
    {
        printf("Queue Overflow");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        if (rear == -1)
        {
            rear = 0;
        }
        else
        {
            rear = rear + 1;
        }

        queue[rear] = integer;
    }
}

void dequeue()
{
    if (empty() == 1)
    {
        printf("Empty Queue");
    }
    else
    {
        front = front + 1;
        printf("Dequeued");
    }
}

int empty()
{
    if (front == -1 || front == rear + 1)
    {
        return 1;
    }
    return 0;
}

int full()
{
    if (rear == 4)
    {
        return 1;
    }
    return 0;
}

void display()
{
    printf("\nOriginal integer array\n");
    for (int i = 0; i <= rear; i++)
    {
        printf("%d", queue[i]);
    }

    printf("\n\nQueue\n");
    for (int i = front; i < rear; i++)
    {
        printf("%d--", queue[i]);
    }
    if (rear < front)
    {
    }
    else
    {
        printf("%d\n", queue[rear]);
    }
}

void display_limits()
{
    printf("Front: %d Value: %d\n", front, queue[front]);
    printf("Rear: %d Value: %d\n", rear, queue[rear]);
};
void display_size()
{
    int size = 0;
    for (int i = front; i <= rear; i++)
    {
        size++;
    }
    printf("The number of elements in the queue is: %d\n", size);
};
