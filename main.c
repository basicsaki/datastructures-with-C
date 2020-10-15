//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./c/linkedlist/single/singly.h"

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
            funcmain();
            menu_user_options();
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
    "#####          ######\n"
    "#     #         #     #    ##     #####    ##\n"
    "#               #     #   #  #      #     #  #\n"
    "#               #     #  #    #     #    #    #\n"
    "#               #     #  ######     #    ######\n"
    "#     #         #     #  #    #     #    #    #\n"
    " #####  ####### ######   #    #     #    #    #\n"
    "\n"
    " #####\n"
    "#     #   #####  #####   #    #   ####    #####  #    #  #####   ######   ####\n"
    "#           #    #    #  #    #  #    #     #    #    #  #    #  #       #\n"
    " #####      #    #    #  #    #  #          #    #    #  #    #  #####    ####\n"
    "      #     #    #####   #    #  #          #    #    #  #####   #            #\n"
    "#     #     #    #   #   #    #  #    #     #    #    #  #   #   #       #    #\n"
    " #####      #    #    #   ####    ####      #     ####   #    #  ######   ####"};

//function definations
void banner()
{
    puts(*banner_text);
}

void menu_user_options()
{
    printf("\n\n\nPlease select an option from the list items below\n\n\a");
    printf("1. \tSingly Linked list\n");
    printf("2. \tDoubly Linked list\n");
    printf("3. \tCircular Linked List\n");
    printf("0. \tExit\n");
    printf("\n\n");
}