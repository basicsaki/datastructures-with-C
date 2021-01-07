#include "shell.h"
#include "../../../common.h"

void shell_sort(int arr[50], int count, int max, int delimiter)
{
    printf("\n\n");
    int temp, j;
    // int iterations = count/

    // i = 0 j = 3, 6, 9
    // i = 1 j = 2,4,6
    // i = 2 j = 1,2,3,4,5,6

    while (max != 1)
    {
        for (int i = max; i < count; i++)
        {
            temp = arr[i];
            printf("i value %d \n", i);
            for (j = i - max; temp < arr[j] && j >= 0; j = j - max)
            {
                arr[j + max] = arr[j];
                printf("J value %d\n", j);
            }
            arr[j + max] = temp;
        }
        max = max - delimiter;
    }
}