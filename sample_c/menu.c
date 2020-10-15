#include <stdio.h>

void *scan_then_print()
{
    int val = 0;
    printf("Enter the number of times the value should be printed \n");
    scanf("%d", &val);
    for (int i = 1; i <= val; i++)
    {
        printf("Print for the terminal %d \n", i);
    }
}

void menu()
{

    printf("\tPress 1 to print\n");
    printf("\tPress 2 to scan and then print\n");
    printf("\tPress 0 to exit\n");
}

void main()
{
    int val;
    int esc = 1;
    printf("Welcome to the menu interface\n\n");
    printf("Select an option below \n\n");
    while (esc == 1)
    {
        menu();
        scanf("%d", &val);
        switch (val)
        {
        case 1:
            printf("Print for the terminal \n");
            break;
        case 2:
            scan_then_print();
            // printf("%d \n\n", val);
            break;
        case 0:
            printf("Bye!\n\n");
            esc = 2;
            break;
        default:
            printf("Please press an option from the menu\n\n");
            break;
        }
    }
}