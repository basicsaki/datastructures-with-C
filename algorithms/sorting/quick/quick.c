#include "quick.h"

void quick_sort(int arr[50], int min, int max)
{
    int i, pivot, partition;
    if (min >= max)
        return;
    pivot = arr[min];
    partition = getpartition(arr, min, max);

    quick_sort(arr, min, partition - 1);
    quick_sort(arr, partition + 1, max);
}

int getpartition(int arr[], int min, int max)
{
    int temp, i, j, pivot;

    i = min + 1;
    j = max;
    pivot = arr[min];

    while (i <= j)
    {
        while (arr[i] < pivot && i < max)
            i++;

        while (arr[j] > pivot)
            j--;

        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
        else
            i++;
    }
    arr[min] = arr[j];
    arr[j] = pivot;

    return j;
}
