#include "common.h"

void display_message(int a[50], int count, char *message)
{
    if (strcmp("", message) != 0)
    {
        printf("\n%s\n", message);
    }

    if (a != NULL)
    {
        display_array(a, count, 0);
    }
}

void display_array(int a[50], int count, int choice)
{
    if (choice == 0)
    {
        printf("\nDisplaying Array:\n");
    }
    if (count == 0)
    {
        printf("\nEmpty Array. Please initialize the array first.\n");
    }
    else
    {
        for (int i = 0; i < count - 1; i++)
        {
            printf("%d -- ", a[i]);
        }
        printf("%d\n", a[count - 1]);
    }
}