#include "selection.h"

void selection_sort(int arr[50], int count)
{
    int minIndex, temp;
    verboseflag == 1 ? display_message(NULL, count, "Initailize 2 integers, temp and minimum index") : "";

    verboseflag == 1 ? display_message(NULL, count, "Take each element and iterate the array, if the element is greater than the item scaned, move it to the temp element and replace it in the index position ") : "";

    for (int i = 0; i < count; i++)
    {
        minIndex = i;
        verboseflag == 1 ? display_message(NULL, count, "Set min index as the iteration number") : "";
        // printf("\n");
        // printf("i value %d\n", i);
        verboseflag == 1 ? display_message(arr, count, "Initalize anothoer integer j that compares our index element with the rest of the elements") : "";
        for (int j = i + 1; j < count; j++)
        {
            if (arr[minIndex] < arr[j])
            {
                verboseflag == 1 ? printf("Array index value(%d) is less than the array value(%d) at index %d\n", arr[minIndex], arr[j], j) : 1;
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            verboseflag == 1 ? printf("Value index(%d) is not eq to the new index(%d)\n", arr[minIndex], arr[minIndex]) : 1;

            temp = arr[i];
            verboseflag == 1 ? printf("Add value at index i to the temp element\n") : 1;

            arr[i] = arr[minIndex];
            verboseflag == 1 ? printf("Set new array value at index i as the min index value\n") : 1;

            arr[minIndex] = temp;
            verboseflag == 1 ? display_message(arr, count, "Set swap value at arr[ minimum index ]\n") : 1;
        }
    }
}