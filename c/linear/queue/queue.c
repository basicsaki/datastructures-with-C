//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"
#include "./linkedlistqueue/linkedlistqueue.h"
#include "./arrayqueue/arrayqueue.h"
// #include "./linkedlist/linked.h"

//main menu
void queuemain()
{
    int queueexit = 0, queue_option;
    queue_clear_menu("", 0);
    queue_banner();
    queue_submenu();
    while (queueexit == 0)
    {
        scanf("%d", &queue_option);
        // while (getchar() != '\n')
        // {
        //     continue;
        // }

        switch (queue_option)
        {
        case 1:
            queue_clear_menu("Queue DS(using array)", 1);
            arrayqueuemain();
            queue_submenu();
            queue_clear_menu("Queue DS menu", 1);

            break;
        case 2:
            queue_clear_menu("Queue DS(using linkedlist)", 1);
            linkedlistqueuemain();
            queue_submenu();
            queue_clear_menu("Queue DS menu", 1);

            break;
        case 0:
            queueexit = 1;
            queue_clear_menu("Main menu", 0);
            break;
        default:
            system("clear");
            queue_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect new option\n");
            break;
        }
    }
}
