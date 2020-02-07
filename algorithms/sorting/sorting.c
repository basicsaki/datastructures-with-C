//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "banner_menu/bm.h"
#include "../../common.h"

#include "./selection/selection.h"
#include "./insertion/insertion.h"
#include "./bubble/bubble.h"
#include "./shell/shell.h"
#include "./merge/merge.h"
#include "./quick/quick.h"
#include "./radix/radix.h"
#include "./bst/bst.h"
#include "./heap/heap.h"
#include "common.h"

//decleration of functions

void array_init(int arr[50], int number);
void display_array(int a[50], int count, int choice);

//main menu
void sortingmain()
{
    int sortingexit = 0, sorting_option, number = 0, count = 0, max, delimiter;
    int a[50];
    sorting_banner();
    sorting_submenu();
    while (sortingexit == 0)
    {
        scanf("%d", &sorting_option);
        // while (getchar() != '\n')
        // {
        // continue;
        // }

        switch (sorting_option)
        {
        case 1:
            sorting_clear_menu("Algorithm: Sorting: Array Initialize", 1);
            printf("Enter the number of digits you want in your array\n");
            scanf("%d", &count);
            array_init(a, count);
            display_array(a, count, 0);
            press_enter_to_continue();
            sorting_clear_menu("Sorting: Menu", 1);
            break;
        case 2:
            sorting_clear_menu("Algorithm: Sorting: Display Array", 1);
            display_array(a, count, 0);
            press_enter_to_continue();
            sorting_clear_menu("Sorting: Menu", 1);
            break;
        case 3:
            sorting_clear_menu("Algorithm: Sorting: Selection sort", 1);
            display_array(a, count, 0);
            selection_sort(a, count);
            display_array(a, count, 0);
            press_enter_to_continue();
            sorting_clear_menu("Sorting: Menu", 1);
            break;
        case 4:
            sorting_clear_menu("Algorithm: Sorting: Bubble Sort", 0);
            // sorting_clear_menu("Selection sort", 0);
            display_array(a, count, 0);
            bubble_sort(a, count);
            display_array(a, count, 0);
            press_enter_to_continue();
            sorting_clear_menu("Sorting: Menu", 1);
            break;
        case 5:
            sorting_clear_menu("Algorithm: Sorting: Insertion sort", 0);
            display_array(a, count, 0);
            insertion_sort(a, count);
            display_array(a, count, 0);
            press_enter_to_continue();
            sorting_clear_menu("Sorting: Menu", 1);
            break;
        case 16:
            sorting_clear_menu("Algorithm: Sorting: Shell sort", 0);
            // sorting_clear_menu("Selection sort", 0);
            // display_array(a, count,0);
            printf("Enter the max scan value");
            scanf("%d", &max);
            printf("Enter the delimiter for max scan");
            scanf("%d", &delimiter);

            shell_sort(a, count, max, delimiter);
            display_array(a, count, 0);
            press_enter_to_continue();
            sorting_clear_menu("Sorting: Menu", 1);
            break;
        case 6:
            sorting_clear_menu("Algorithm: Sorting: Merge sort", 0);
            display_array(a, count, 0);
            merge_sort(a, 0, count - 1);
            display_array(a, count, 0);
            press_enter_to_continue();
            sorting_clear_menu("Sorting: Menu", 1);
            break;
        case 7:
            sorting_clear_menu("Algorithm: Sorting: Quick sort", 0);
            // sorting_clear_menu("Selection sort", 0);
            // display_array(a, count,0);
            quick_sort(a, 0, count - 1);
            display_array(a, count, 0);
            press_enter_to_continue();
            sorting_clear_menu("Sorting: Menu", 1);
            break;
        case 8:
            sorting_clear_menu("Algorithm: Sorting: Binary Search Tree sort", 0);
            display_array(a, count, 0);
            bst_sort(a, count);
            display_array(a, count, 0);
            press_enter_to_continue();
            sorting_clear_menu("Sorting: Menu", 1);
            break;
        case 9:
            sorting_clear_menu("Algorithm: Sorting: Heap sort", 0);
            display_array(a, count, 0);
            heap_sort(a, count);
            // display_array(a, count,0);
            press_enter_to_continue();
            sorting_clear_menu("Sorting: Menu", 1);
            break;
        case 10:
            sorting_clear_menu("Algorithm: Sorting: Radix sort", 0);
            display_array(a, count, 0);
            radix_sort(a, count);
            display_array(a, count, 0);
            press_enter_to_continue();
            sorting_clear_menu("Sorting: Menu", 1);
            break;
        case 0:
            // system("clear");
            sortingexit = 1;
            sorting_clear_menu("Algorithm: Sorting: Menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            system("clear");
            sorting_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect a new option\n");
            break;
        }
    }
}

void array_init(int arr[50], int number)
{
    int temp;
    // printf("Temp number val %d", number);
    printf("\n");

    // verboseflag == 1 ? display_message(NULL, "STEP: MAllocate for the new node") : "";
    for (int i = 0; i < number; i++)
    {
        printf("Enter an element \n");
        scanf("%d", &arr[i]);
    }
    // return arr;
}
