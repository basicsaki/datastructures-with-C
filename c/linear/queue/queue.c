//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"

// #include "./linkedlist/linked.h"

//main menu
void queuemain()
{
    int queueexit = 0, queue_option;
    queue_clear_menu("", 1);
    queue_banner();
    queue_submenu();
    while (queueexit == 0)
    {
        scanf("%d", &queue_option);
        while (getchar() != '\n')
        {
            continue;
        }

        switch (queue_option)
        {
        case 1:
            queue_clear_menu("Type options", 1);
            queue_submenu();

            printf("Coming soon");
            break;
        case 2:
            queue_clear_menu("queue: Linked list", 1);
            // linkedmain();
            queue_submenu();

            // printf("inside 2");
            break;
        case 0:
            // system("clear");
            queueexit = 1;
            queue_clear_menu("Main menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            system("clear");
            queue_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\n Select a new option\n");
            break;
        }
    }
}
