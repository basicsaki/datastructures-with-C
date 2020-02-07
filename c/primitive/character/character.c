//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"
#include "./../../../common.h"

// #include "./linkedlist/linked.h"

//main menu
void charactermain()
{
    int characterexit = 0, character_option;
    char c;
    char *a;
    char s[10];

    // character_clear_menu("", 1);
    character_banner();
    character_submenu();
    while (characterexit == 0)
    {
        scanf("%d", &character_option);
        // while (getchar() != '\n')
        // {
        //     continue;
        // }

        switch (character_option)
        {
        case 1:
            character_clear_menu("Character: Basic info", 1);
            printf("Char Limits: \n");
            printf("The size of the character variable is 1 byte.\n");
            printf("Strings are actually one-dimensional array of characters terminated by a null character %s.\n", "'\0'");
            press_enter_to_continue();
            character_clear_menu("Character data type options", 1);

            break;
        case 2:
            character_clear_menu("Character: Character Insert", 1);
            printf("Please enter a character(e.g a)\n");
            scanf("%c", &c);
            while (getchar() != '\n')
            {
                continue;
            }

            press_enter_to_continue();
            character_clear_menu("Character: Menu", 1);
            break;
        case 3:
            character_clear_menu("Character: Display", 1);
            printf("Char value: %c(MemLocation: %p) Size of: %zu\n", c, &c, sizeof(c));
            press_enter_to_continue();
            character_clear_menu("Character: Menu", 1);
            break;
        case 4:
            character_clear_menu("Character: String insert", 1);
            printf("Please enter the string\n");
            scanf("%s", s);
            press_enter_to_continue();
            character_clear_menu("Character: Menu", 1);
            break;
        case 5:
            character_clear_menu("Character: String Display", 1);
            printf("String value: %s(MemLocation: %p) Size: %zu\n", s, &s, sizeof(s));
            press_enter_to_continue();
            character_clear_menu("Character: Menu", 1);
            break;
        case 0:
            // system("clear");
            characterexit = 1;
            character_clear_menu("Primitive: Menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            system("clear");
            character_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect a new option\n");
            break;
        }
    }
}
