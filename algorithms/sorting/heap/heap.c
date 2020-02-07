#include "heap.h"

void heap_sort(int arr[50], int count)
{
    int max;
    int size = count;
    int x = 0, temp[50];

    // count = count + 1;
    // int size = count;
    max = arr[0];
    // arr[0] = 99999;
    // arr[count] = max;

    //inside heap sort
    // printf("inside heap sort\n\n");
    //convert array to heap
    insertHeapSort(arr, count);
    //build down method for i/2 array elements

    // printf("Heap is : ");
    // displayheapT(arr, count);

    while (count > 0)
    {
        max = deleteHeapSort(arr, &count);
        // printf("\nDeleted value %d\n", max);
        // if (count == 0)
        // {
        //     printf("Count is 0 %d \n", max);
        //     // arr[count + 1] = max;
        // }
        // else
        // {
        // printf("\n x value %d \n ", x);
        temp[x] = max;
        // printf("\n temp[x] %d \n ", temp[x]);
        x = x + 1;
        // }
    }
    copyArr(temp, arr, size);
    // displayArr(temp, si/ze);
    count = size;
    // while (count > 1)
    // {
    //     printf("Returned value %d", arr[i + 1]);
    //     max = deleteHeapSort(arr, &i);
    //     arr[count + 1] = max;
    // }
    //delete the root element
    // deleteHeapS(arr, count);
    // int element = deleteHeapSort(arr, count)
    // element =
    //store the root element in the array

    //display the new array
    // return temp;
}

void deleteHeapS(int arr[], int count)
{
    // printf("inside delete heap s");
    for (int i = 1; i <= count; i++)
    {
        // printf("inside delete heap s");

        // arr[i] = deleteHeapSort(arr, count);
    }
}

void insertHeapSort(int arr[], int count)
{
    for (int i = count / 2; i >= 0; i--)
    {
        // printf("\nheap sort i %d , arr[i] %d\n", i, arr[i]);
        restoredownheap(arr, count, i);
    }
}

void restoredownheap(int arr[], int count, int index)
{
    // printf("\ninside restore down index %d, count %d\n", index, count);
    int lchild = index * 2;
    int rchild = lchild + 1;
    int number = arr[index];

    //case 1 number is greater than its children
    while (rchild <= count)
    {
        // printf("\n rchild %d lchild %d number %d count %d\n", arr[rchild], arr[lchild], number, count);
        if (number >= arr[rchild] && number >= arr[lchild])
        {
            // printf("\n number greater than r child and lchild\n");
            arr[index] = number;
            return;
        }
        else if (arr[lchild] > arr[rchild])
        {
            arr[index] = arr[lchild];
            // arr[lchild] = number;
            index = lchild;
        }
        else
        {
            arr[index] = arr[rchild];
            // arr[rchild] = number;
            index = rchild;
        }
        lchild = index * 2;
        rchild = lchild + 1;
    }
    if (lchild == count && number < arr[count])
    {
        arr[index] = arr[count];
        index = count;
    }
    arr[index] = number;
    // while (number < arr[lchild] || number < arr[rchild]){
    //     if ()
    // }
}

int deleteHeapSort(int arr[50], int *count)
{

    int tobedeleted = arr[0];
    arr[0] = arr[*count];
    (*count)--;
    // printf("inside delete heap sort count %d\n", *count);

    restoredownheap(arr, *count, 0);
    return tobedeleted;

    // int tobedeleted = arr[1];
    // //move last to the root
    // arr[1] = arr[*count];
    // //restore down
    // (*count)--;
    // restoredownheap(arr, *count, 1);
    // return tobedeleted;
}

void displayheapT(int arr[50], int heapsize)
{
    printf("\n Displaying heap");
    if (heapsize == 0)
    {
        printf("Heap is empty");
    }
    else
    {
        for (int i = 0; i < heapsize; i++)
        {
            printf("-- %d --", arr[i]);
        }
    }
};

void copyArr(int temp[], int arr[], int count)
{
    printf("\n Displaying sorted heap array");

    // printf("\n Final count %d", count);

    for (int b = 0; b < count; b++)
    {
        arr[b] = temp[b];
        // printf("\n temp val %d", temp[b]);
        printf("-- %d --", temp[b]);
    }
}
