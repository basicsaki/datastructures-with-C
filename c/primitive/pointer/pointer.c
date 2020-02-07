//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"
#include "./../../../common.h"

// #include "./linkedlist/linked.h"

//main menu
void pointermain()
{
    int pointerexit = 0, pointer_option, integer;
    char a[10], *y;
    int *b;
    // pointer_clear_menu("", 0);
    pointer_banner();
    pointer_submenu();
    while (pointerexit == 0)
    {
        scanf("%d", &pointer_option);
        // while (getchar() != '\n')
        // {
        //     continue;
        // }

        switch (pointer_option)
        {
        case 1:
            pointer_clear_menu("Pointer: Insert integer", 1);
            printf("Enter an integer\n");
            scanf("%d", &integer);
            pointer_clear_menu("Pointer: Menu", 1);

            break;
        case 2:
            pointer_clear_menu("Pointer: Insert string", 1);
            printf("Enter a string of max length 10\n");
            scanf("%s", a);
            pointer_clear_menu("Pointer: Menu", 1);
            // pointer_clear_menu("Pointer options", 1);

            break;
        case 3:
            pointer_clear_menu("Pointer: Display integer", 1);
            printf("Linking");
            b = &integer;
            printf("\nInteger %d (Memory Location: %p Sizeof: %zu)\n", integer, &integer, sizeof(integer));
            printf("Pointer %d(Memory Location: %p Sizeof:%zu Pointer Location: %p)\n", *b, &b, sizeof(b), b);
            press_enter_to_continue();
            pointer_clear_menu("Pointer: Menu", 1);

            // pointer_clear_menu("Pointer options", 1);

            break;
        case 4:
            pointer_clear_menu("Pointer: Display string", 1);
            // pointer_clear_menu("Pointer options", 1);
            printf("Linking");
            y = a;

            printf("\nString %s (Memory Location: %p Sizeof: %zu)\n", a, &a, sizeof(a));
            printf("Pointer %d(Memory Location: %p Sizeof:%zu Pointer Location: %p)\n", *y, &y, sizeof(y), y);
            printf("Pointer value: ");
            while (*y != '\0')
                printf("%c", *y++);
            printf("\n");
            press_enter_to_continue();
            pointer_clear_menu("Pointer: Menu", 1);
            // pointer_clear_menu("Pointer options", 1/);

            break;
        case 5:

            pointer_clear_menu("Pointer: Update integer", 1);
            printf("Enter updated integer\n");
            scanf("%d", &integer);
            pointer_clear_menu("Pointer: Menu", 1);

            // pointer_clear_menu("Pointer options", 1);

            break;
        case 6:
            pointer_clear_menu("Pointer: Update string", 1);
            // pointer_clear_menu("Pointer options", 1);
            printf("Enter updated string\n");
            scanf("%s", a);
            pointer_clear_menu("Pointer: Menu", 1);
            // pointer_clear_menu("Pointer options", 1);
            break;

        case 0:
            pointerexit = 1;
            pointer_clear_menu("Primitive: Menu", 0);
            break;
        default:
            system("clear");
            pointer_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect a new option\n");
            break;
        }
    }
}
