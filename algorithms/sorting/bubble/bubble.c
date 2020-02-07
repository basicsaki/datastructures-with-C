#include "bubble.h"

void bubble_sort(int arr[50], int count)
{
    //compare 2 elements from starting
    //if a[i] > a[j] replace a[j] with a[i]
    int temp, minEl;
    verboseflag == 1 ? display_message(NULL, count, "Bubble sort is done by comparing an element with the next element( and swapping if the element is bigger )and so on till the last of the array") : 1;
    verboseflag == 1 ? display_message(NULL, count, "Initalize 2 integer elements temp and minimum element") : 1;

    verboseflag == 1 ? display_message(NULL, count, "Iterate the elements in the array") : 1;
    for (int i = 0; i < count; i++)
    {
        minEl = i;
        verboseflag == 1 ? printf("Init min element as the value of the iterator %d, use another iterator j to scan this element with the next element till the last element\n", minEl) : 1;
        for (int j = i + 1; j < count; j++)
        {
            minEl++;
            verboseflag == 1 ? printf("Min element %d - Iterator J %d\n", minEl, j) : 1;
            verboseflag == 1 ? printf("Swap if arr[i](%d) > arr[j](%d)\n", arr[i], arr[j]) : 1;
            if (arr[i] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    // printf("Inside bubble sort");
}