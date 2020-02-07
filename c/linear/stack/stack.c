//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"

#include "./arraystack/arraystack.h"
#include "./linkedliststack/linkedliststack.h"

// #include "./linkedlist/linked.h"

//main menu
void stackmain()
{
    int stackexit = 0, stack_option;
    // stack_clear_menu("", 1);
    stack_banner();
    stack_submenu();
    while (stackexit == 0)
    {
        scanf("%d", &stack_option);
        // while (getchar() != '\n')
        // {
        //     continue;
        // }

        switch (stack_option)
        {
        case 1:
            stack_clear_menu("", 1);
            arraystackmain();
            stack_submenu();
            stack_clear_menu("Stack: Menu", 1);

            break;
        case 2:
            stack_clear_menu("", 1);
            linkedliststackmain();
            stack_submenu();
            stack_clear_menu("Stack: Menu", 1);
            break;
        case 0:
            // clear();
            stackexit = 1;
            stack_clear_menu("Linear DS: Menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            stack_clear_menu("", 0);
            stack_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect a new option\n");
            break;
        }
    }
}
