#include "./traversal.h"

void displayheap(int arr[50], int heapsize, int show)
{
    if (heapsize == 0)
    {
        printf("Heap is empty. Please add heap elements using option 3.\n");
    }
    else
    {
        if (show == 1)
        {
            printf("Heap\n");
        }
        for (int i = 1; i <= heapsize; i++)
        {
            printf("-- %d --", arr[i]);
        }
    }
};

void displayheapstats(int arr[50], int heapsize)
{
    printf("Number of elements: %d \n", heapsize);
};

void display_step(int a[50], int count, char *b)
{
    printf("%s\n", b);

    if (a != NULL)
    {
        displayheap(a, count, 1);
        printf("\n");
    }
};

int heap_size(int arr[50])
{
    int count = 0;
    while (arr[count])
    {
        count++;
    }
    return count;
};