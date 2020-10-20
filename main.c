//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <getopt.h>

#include "./c/type.h"
#include "./common.h"

#include "./c/linear/linkedlist/single/singly.h"
#include "./c/linear/linkedlist/linked.h"

//decleration of functions
void banner();
void top_options();
void singly_submenu();
char *banner_text[];

int verboseflag = 0;

void check_input_params(int argc, char **argv)
{
    for (int i = 0; i < argc; i++)
    {
        if (strcmp(argv[i], "--verbose") == 0)
        {
            verboseflag = 1;
            // printf("Verbose flag value %d", verboseflag);
        }
    }
}

void print_usage()
{
    printf("\n USAGE: \n \t main | --verbose(for step wise explanation) \n");
};
//main menu
void main(int argc, char **argv)
{
    int menu_option, exit = 0;
    banner();
    print_usage();
    top_options();
    check_input_params(argc, argv);

    while (exit == 0)
    {
        scanf("%d", &menu_option);
        switch (menu_option)
        {
        case 1:
            system("clear");
            typemain();
            top_options();
            // printf("case 1\n");
            break;
        case 2:
            // system("clear");
            system("clear");
            linkedmain();
            top_options();
            break;
        case 3:
            // system("clear");
            system("clear");
            singlymain();
            top_options();
            break;

        case 0:
            // system("clear");
            exit = 1;
            printf("\n Bye! Have a good day!\n");
            break;
        default:
            system("clear");
            top_options();
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

void top_options()
{
    printf("\n\nPlease select an option from the list items below\n");
    printf("1. \tSelect DS Type\n");
    printf("0. \tExit\n");
    printf("\nQuick links\n");
    printf("2. \tLinked list\n");
    printf("3. \tSingly linked list\n\n");
}

void menu_user_options()
{
    printf("\n\nPlease select an option from the list items below\n\a");
    printf("1. \tSingly Linked list\n");
    printf("2. \tDoubly Linked list\n");
    printf("3. \tCircular Linked List\n");
    printf("0. \tExit\n\n");
}