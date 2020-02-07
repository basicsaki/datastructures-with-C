#include "insertion.h"

void insertion_sort(int arr[50], int count)
{
    //sort array from the beginning
    // multiple sorted arrays
    verboseflag == 1 ? printf("Insertion sort ia technique in which the array is sorted by assuming that the array is sorted till when it is being iterated and adding new elements in the sorted array by scanning and replacing\n") : 1;

    int minel, maxel, temp, j;
    verboseflag == 1 ? display_message(NULL, count, "Init some temporary integer element temp,j\n") : 1;

    for (int i = 0; i < count; i++)
    {
        //current element
        temp = arr[i];
        verboseflag == 1 ? printf("Copy the element arr[i] %d to temp\n", arr[i]) : 1;
        // printf("\ninside i %d \n", i);
        //insert into ordered list
        for (j = i - 1; j >= 0 && temp < arr[j]; j--)
        {
            verboseflag == 1 ? printf("Scan the previous elements from right to left and replace if temp < arr[j](%d)-J(%d)\n", arr[j], j) : 1;
            arr[j + 1] = arr[j];
            verboseflag == 1 ? printf("Move the elments to the right if the condition is not met\n") : 1;
            display_message(arr, count, "Arr");
            // arr[i] = arr[j];
            // arr[j] = temp;
            // break;
        }

        arr[j + 1] = temp;
        display_message(arr, count, "Copy the temp value to the array[j+1]\n");
    }
    // printf("Inside insertion sort");
}