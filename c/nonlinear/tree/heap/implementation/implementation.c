#include "./implementation.h"
#include "../traversal/traversal.h"

void insertheapreeNodeRecursion(int arr[50], struct searchtreenode *searchtreenode, int *heapsize, int element)
{
    //increase the size of the heap
    (*heapsize)++;
    verboseflag == 1 ? display_step(NULL, *heapsize, "\nSTEP: Increment the heap size by 1") : "";

    arr[*heapsize] = element;
    verboseflag == 1 ? display_step(arr, *heapsize, "\nSTEP: Append the element in the heap") : "";

    restoreup(arr, *heapsize);
};

void restoreup(int arr[], int elementIndex)
{
    int count = elementIndex;
    int element = arr[elementIndex];
    verboseflag == 1 ? display_step(NULL, 5, "\nSTEP(Restore Up): Restore up function to find the place for the newly added element") : "";

    int parentIndex = elementIndex / 2;
    verboseflag == 1 ? display_step(NULL, 5, "\nSTEP(Restore UP): Find the parent element of the new element by formula: elementIndex/2") : "";
    verboseflag == 1 ? printf("parentIndex %d\n", parentIndex) : 1;

    verboseflag == 1 ? display_step(NULL, 5, "\nSTEP(Restore UP): Recursively check if the parent element is less than new element") : "";
    while (arr[elementIndex] > arr[parentIndex])
    {
        arr[elementIndex] = arr[parentIndex];
        verboseflag == 1 ? display_step(arr, count, "\nSTEP(Restore UP): Replace if true") : "";

        elementIndex = parentIndex;
        verboseflag == 1 ? display_step(arr, count, "\nSTEP(Restore UP): Replace new element index as parent index") : "";
        verboseflag == 1 ? printf("Element Index %d\n", elementIndex) : 1;

        parentIndex = parentIndex / 2;
        verboseflag == 1 ? display_step(arr, count, "\nSTEP(Restore UP): Calculate new parent for the new element position") : "";
        verboseflag == 1 ? printf("parentIndex %d\n", parentIndex) : 1;
    }
    arr[elementIndex] = element;
    verboseflag == 1 ? display_step(arr, count, "\nSTEP(Restore UP): Set the calculated position as the new element position") : "";
};

int deleteheapreeNode(int arr[], int *heapsize)
{
    int tobedeleted = arr[1];

    arr[1] = arr[*heapsize];
    verboseflag == 1 ? display_step(arr, *heapsize, "\nSTEP: Copy the last element in the heap as the root element") : "";

    (*heapsize)--;
    verboseflag == 1 ? display_step(arr, *heapsize, "\nSTEP: Decrement the heap size by 1") : "";

    verboseflag == 1 ? display_step(NULL, *heapsize, "\nSTEP(Restore Down): Call Restore Down for the root element") : "";
    restoredown(arr, *heapsize);
    return tobedeleted;
};

void restoredown(int arr[50], int heapsize)
{
    //while element is < children elements
    int i = 1, lchild = i * 2, rchild = lchild + 1;
    //  let
    int number = arr[i];

    verboseflag == 1 ? display_step(NULL, heapsize, "\nSTEP(Restore Down): Calculate the left child(elementIndex*2) and right child(elementIndex*2+1) for the root.Loop through the heap till heapsize is greter than equal to right child index") : "";
    while (rchild <= heapsize)
    {
        //if element is bigger than both the children
        verboseflag == 1 ? printf("Index: Element %d - Left child %d - Right child %d", i, lchild, rchild) : 1;
        if (number > arr[lchild] && number > arr[rchild])
        {
            arr[i] = number;
            verboseflag == 1 ? display_step(arr, heapsize, "\nCase 1(Restore Down): Element is greater than the left child and the right child") : "";
            verboseflag == 1 ? printf("Value: Element %d - Left child %d - Right child %d", arr[i], arr[lchild], arr[rchild]) : 1;

            return;
        }
        else if (arr[lchild] < arr[rchild])
        {
            //if element is lesser than the lchild

            arr[i] = arr[lchild];
            i = lchild;
            verboseflag == 1 ? display_step(arr, heapsize, "\nCase 2(Restore Down): Left child is < Right child") : "";
            verboseflag == 1 ? printf("Value: Element %d - Left child %d - Right child %d", arr[i], arr[lchild], arr[rchild]) : 1;
        }
        else
        {

            arr[i] = arr[lchild];
            i = rchild;
            verboseflag == 1 ? display_step(NULL, heapsize, "\nCase 3(Restore Down): Left child is > Right child") : "";
            verboseflag == 1 ? printf("Value: Element %d - Left child %d - Right child %d", arr[i], arr[lchild], arr[rchild]) : 1;
            //if the element is lesser than the rchild
        }
        lchild = i * 2;
        rchild = lchild + 1;
    }

    //check for even count of the heapsize for the last element

    if (lchild == heapsize && number < arr[lchild])
    {
        arr[i] = arr[lchild];
        i = lchild;
        verboseflag == 1 ? display_step(NULL, heapsize, "\nAn additional iteration if heapsize is even") : "";
    }
    arr[i] = number;
};
