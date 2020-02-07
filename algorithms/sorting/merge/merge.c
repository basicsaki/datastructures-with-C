#include "merge.h"

void merge_sort(int arr[50], int min, int max)
{ // {
    int mid;
    int temp[50];
    verboseflag == 1 ? printf("Merge sort is a technique in which an array is divided into 2 half arrays till the arrays are of length 1 , then are merged together in a sorted manner\n") : 1;
    verboseflag == 1 ? printf("Initialize a temp array of the same length as the original array\n") : 1;
    // printf("min: %d\n", min);
    // printf("max: %d\n", max);
    //     max = count;

    verboseflag == 1 ? printf("Recursion till element lenght is greater than 1 - min value %d max value %d\n", min, max) : 1;
    if (min < max)
    {

        mid = (min + max) / 2;
        verboseflag == 1 ? printf("Calculate the mid length of the array mid-%d\n", mid) : 1;
        // printf("mid: %d\n", mid);
        merge_sort(arr, min, mid);
        merge_sort(arr, mid + 1, max);

        verboseflag == 1 ? printf("Merge the two arrays with limits - %d:%d - %d:%d\n", min, mid, mid + 1, max) : 1;
        merge(arr, temp, min, mid, mid + 1, max);

        // verboseflag == 1 ? display_message(temp, , "Temp array");
        copy(arr, temp, min, max);
    }
}

/*Merges arr[low1:up1] and arr[low2:up2] to temp[low1:up2]*/
void merge(int arr[], int temp[], int low1, int up1, int low2, int up2)
{
    int i = low1;
    int j = low2;
    int k = low1;

    while ((i <= up1) && (j <= up2))
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }
    while (i <= up1)
        temp[k++] = arr[i++];
    while (j <= up2)
        temp[k++] = arr[j++];
} /*End of merge()*/

void copy(int arr[50], int temp[50], int min, int max)
{
    int i;
    for (i = min; i <= max; i++)
        arr[i] = temp[i];
}