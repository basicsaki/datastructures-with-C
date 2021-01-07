//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"
#include "../../../../common.h"

int stack[4], top = -1;

void push(int integer);
int pop();
void qdisplay();
void qdisplay_top();
void qdisplay_size();
int qempty();
int qfull();

// #include "./linkedlist/linked.h"

//main menu
void arraystackmain()
{
    int arraystackexit = 0, arraystack_option, integer, poped;
    arraystack_clear_menu("", 0);
    arraystack_banner();
    arraystack_submenu();
    while (arraystackexit == 0)
    {
        scanf("%d", &arraystack_option);
        // while (getchar() != '\n')
        // {
        //     continue;
        // }
        switch (arraystack_option)
        {
        case 1:
            arraystack_clear_menu("Stack: Display", 1);
            qdisplay();
            press_enter_to_continue();
            arraystack_clear_menu("Stack(using array): Menu", 1);
            // arraystack_submenu();
            break;
        case 2:
            arraystack_clear_menu("Stack: Push", 1);
            printf("Please enter an integer for push\n");
            scanf("%d", &integer);
            push(integer);
            press_enter_to_continue();
            arraystack_clear_menu("Stack(using array): Menu", 1);

            // arraystack_submenu();
            break;
        case 3:
            arraystack_clear_menu("Stack: Pop", 1);
            poped = pop();
            if (poped == -1)
            {
                printf("\nStack underflow\n");
            }
            else
            {
                printf("\nPoped value is %d\n", poped);
            }
            press_enter_to_continue();
            arraystack_clear_menu("Stack(using array): Menu", 1);

            // arraystack_submenu();
            break;
        case 4:
            arraystack_clear_menu("Stack: Total Count", 1);
            qdisplay_size();
            press_enter_to_continue();
            arraystack_clear_menu("Stack(using array): Menu", 1);

            // arraystack_submenu();
            break;
        case 5:
            arraystack_clear_menu("Stack: Top Element", 1);
            qdisplay_top();
            press_enter_to_continue();
            arraystack_clear_menu("Stack(using array): Menu", 1);
            // arraystack_submenu();
            break;
        case 0:
            arraystackexit = 1;
            arraystack_clear_menu("Stack: Menu", 1);
            break;
        default:
            clear();
            arraystack_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect a new option\n");
            break;
        }
    }
}

void push(int integer)
{
    if (qfull() == 1)
    {
        printf("Stack Overflow");
    }
    else
    {
        top += 1;
        stack[top] = integer;
    }
}

int pop()
{
    if (qempty() == 1)
    {
        printf("Empty Stack");
        return -1;
    }
    else
    {
        int val;
        val = stack[top];
        top = top - 1;
        return val;
    }
}

int qempty()
{
    if (top == -1)
    {
        return 1;
    }
    return 0;
}

int qfull()
{
    if (top == 4)
    {
        return 1;
    }
    return 0;
}

void qdisplay()
{
    printf("\n\nStack\n");
    if (qempty())
    {
        printf("\nStack is empty\n");
    }
    else
    {
        for (int i = 0; i < top; i++)
        {
            printf("%d--", stack[i]);
        }
        printf("%d\n", stack[top]);
    }
}

void qdisplay_top()
{
    printf("Top: %d Value: %d\n", top, stack[top]);
};

void qdisplay_size()
{
    int size = 0;
    for (int i = 0; i <= top; i++)
    {
        size++;
    }
    printf("The number of elements in the stack is: %d\n", size);
};
