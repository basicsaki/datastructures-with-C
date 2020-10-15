//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
void banner();
void menu_user_options();
void singly_submenu();
char *banner_text[];

//main menu
void main()
{
    int menu_option, exit = 0;
    banner();
    menu_user_options();
    while (exit == 0)
    {
        scanf("%d", &menu_option);

        switch (menu_option)
        {
        case 1:
            system("clear");
            singly_submenu();
            // printf("case 1\n");
            break;
        case 0:

            // system("clear");
            exit = 1;
            printf("\n Bye! Have a good day!\n");
            break;
        default:
            system("clear");
            menu_user_options();
            printf("\nPlease enter an option from the list\n");

            printf("\n Select a new option\n");
            break;
        }
    }
}

char *banner_text[] = {
    " #####"
    "#     #     #    #    #   ####   #        #   #"
    "#           #    ##   #  #    #  #         # #"
    " #####      #    # #  #  #       #          #"
    "      #     #    #  # #  #  ###  #          #"
    "#     #     #    #   ##  #    #  #          #"
    " #####      #    #    #   ####   ######     #"};

//function definations
void banner()
{
    puts(*banner_text);
}

void singly_submenu()
{
    printf("\n\n\nWelcome to Singly linked list\n\n");
    printf("1. \tCreate a new list\n");
    printf("2. \tDisplay the list\n");
    printf("3. \tRandom\n");
    printf("0. \tBack to main menu\n");
    printf("\n\n");
}