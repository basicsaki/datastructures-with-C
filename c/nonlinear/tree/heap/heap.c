//Preprocessor commands
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//decleration of functions
#include "./banner_menu/bm.h"
#include "../../../../common.h"
#include "./traversal/traversal.h"
#include "../display/intdisplay.h"
#include "./common.h"
#include "types/types.h"
#include "implementation/implementation.h"
// #include "./linkedlist/linked.h"

//main menu
void heapmain()
{
    int heapexit = 0, heap_option;
    int element, heapsize = 0, arr[50];
    struct searchtreenode *root = NULL, *treenode = NULL, *type = NULL, *temp;

    heap_clear_menu("", 0);
    heap_banner();
    heap_submenu();
    while (heapexit == 0)
    {
        scanf("%d", &heap_option);
        // while (getchar() != '\n')
        // {
        //     continue;
        // }

        switch (heap_option)
        {
        case 1:
            heap_clear_menu("Tree: Heap: Display", 1);
            displayheap(arr, heapsize, 1);
            printf("\n");
            press_enter_to_continue();
            heap_clear_menu("Heap: Menu", 1);
            break;
        case 2:
            heap_clear_menu("Tree: Heap: Basic Info", 1);
            type = (struct searchtreenode *)malloc(sizeof(struct searchtreenode));
            printf("A Heap is a special Tree-based data structure in which the tree is a complete binary tree. Generally, Heaps can be of two types:\n`");
            printf("Max-Heap: In a Max-Heap the key present at the root node must be greatest among the keys present at all of it’s children. The same property must be recursively true for all sub-trees in that Binary Tree.\n`");

            type = maxheap(type);
            displaybsttree(type, 1);
            printf("Min-Heap: In a Min-Heap the key present at the root node must be minimum among the keys present at all of it’s children. The same property must be recursively true for all sub-trees in that Binary Tree.\n`");
            type = minheap(type);
            displaybsttree(type, 1);

            verboseflag == 1 ? 1 : 0;
            press_enter_to_continue();
            heap_clear_menu("Heap: Menu", 1);
            break;
        case 3:
            heap_clear_menu("Tree: Heap: Insert", 1);
            arr[0] = 99999;
            printf("Enter the element to be inserted\n");
            scanf("%d", &element);
            insertheapreeNodeRecursion(arr, root, &heapsize, element);
            press_enter_to_continue();
            heap_clear_menu("Heap: Menu", 1);
            break;
        case 4:
            heap_clear_menu("Tree: Heap: Delete", 1);
            int deletedElement = deleteheapreeNode(arr, &heapsize);
            printf("\nDeleted element %d\n", deletedElement);
            displayheap(arr, heapsize, 1);
            // verboseflag == 1 ? 1 : 0;
            press_enter_to_continue();
            heap_clear_menu("Heap: Menu", 1);
            break;
        case 6:
            heap_clear_menu("Tree: Heap: Search", 1);
            printf("Enter an element to be searched\n");
            scanf("%d", &element);
            // temp = heapsearch(root, element);
            displaybsttree(temp, 1);
            verboseflag == 1 ? 1 : 0;
            press_enter_to_continue();
            heap_clear_menu("Heap: Menu", 1);
            break;
        case 5:
            heap_clear_menu("Tree: Heap: Stats", 1);
            displayheapstats(arr, heapsize);
            press_enter_to_continue();
            heap_clear_menu("Heap: Menu", 1);
            break;
        case 0:
            // clear();
            heapexit = 1;
            heap_clear_menu("Tree: Menu", 0);
            // printf("\n Bye! Have a good day! submenu!\n");
            break;
        default:
            clear();
            heap_submenu();
            printf("\nPlease enter an option from the list\n");
            printf("\nSelect a new option\n");
            break;
        }
    }
}
