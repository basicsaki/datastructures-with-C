#include "radix.h"

void radix_sort(int arr[50], int count)
{
    int front[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, rear[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, max_digits, digit, temparr[50], queue[10][10] = {{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}};
    verboseflag == 1 ? display_message(NULL, count, "Initailize 0-9 queues for storing integers in radix sort") : "";
    //10 queues

    //find number with maximum digits
    verboseflag == 1 ? display_message(NULL, count, "Find maximum digits in the array of integers") : "";
    max_digits = findMaxDigits(arr, count);

    verboseflag == 1 ? printf("Iterate by the maximum number of digits %d\n", max_digits) : 1;
    for (int i = 1; i <= max_digits; i++)
    {
        verboseflag == 1 ? printf("Starting with the ones position,iterate till the maximum index %d\n", i) : 1;
        //push elements in their respective queues
        initqueue(queue);
        verboseflag == 1 ? printf("\nReinitialize the queues for adding new values \n") : 1;

        for (int j = 0; j < count; j++)
        {

            //find digit at a location
            // printf("Number : %d\n", arr[j]);

            digit = findDigit(arr[j], i);
            verboseflag == 1 ? printf("Digit in index %d in Number %d - digit- %d \n", i, arr[j], digit) : 1;
            // printf("Find digit : %d\n", digit);
            //find the queue
            // tempqueue = queue[digit];
            // if (front[digit] == -1)
            // {
            //     front[digit] = 0;
            // }
            // tempqueue = queue[digit];

            if (rear[digit] == -1)
            {
                // printf("rear[digit] is 0 %d\n", rear[digit]);
                rear[digit] = 0;
            }
            else
            {
                // printf("rear[digit] %d\n", rear[digit]);
                rear[digit] = rear[digit] + 1;
                verboseflag == 1 ? printf("Increase queue rear by 1 %d \n", rear[digit]) : 1;
            }
            // printf("Temp queue %d", tempqueue[rear[digit]]);
            // if (queue[digit] == NULL)
            //     queue[digit][0] = 0;
            verboseflag == 1 ? printf("Insert value %d in the queue\n", arr[j]) : 1;
            queue[digit][rear[digit]] = arr[j];
        }
        readqueue(queue, temparr);
        verboseflag == 1 ? printf("Insert values from the queue to the temporary array\n") : 1;
        verboseflag == 1 ? display_array(temparr, count, 1) : 1;

        tempcopy(arr, temparr, 0, count);
    }
    verboseflag == 1 ? printf("Copy values from the temporary array to the main array\n") : 1;
    tempcopy(arr, temparr, 0, count);
    verboseflag == 1 ? display_array(arr, count, 1) : 1;

    // readqueue(queue, arr);

    // for (int y = 0; y < 9; y++)
    // {
    //     printf("Y val %d", y);
    //     // for (int r = 0; r < 9; r++)
    //     // {
    //     //     printf("Displaying the end result queue: y %d r %d q %d", y, r, queue[y][r]);
    //     // }
    // }

    //join the queues

    //reiterate
}

int findMaxDigits(int arr[], int count)
{
    int length, maximumValue;
    //find largest
    maximumValue = 0;
    for (int i = 0; i < count; i++)
    {
        if (arr[i] > maximumValue)
            maximumValue = arr[i];
    }

    // count digits in the number
    while (maximumValue != 0)
    {
        length++;
        maximumValue = maximumValue / 10;
    }
    return length;
}

// int findDigit(int number, int position)
// {
//     // for 1
//     int digit;
//     for (int i = 0; i <= position; i++)
//     {
//         digit = number % 10;
//         number = number / 10;
//     }
//     return digit;
// }

/*This function returns kth digit of a number*/
int findDigit(int number, int k)
{
    int digit, i;
    for (i = 1; i <= k; i++)
    {
        digit = number % 10;
        number = number / 10;
    }
    return (digit);
} /*End of digit()*/

void readqueue(int queue[10][10], int temparr[])
{
    int top = 0;
    for (int r = 0; r < 10; r++)
    {
        for (int u = 0; u < 10; u++)
        {

            if (queue[r][u] != -1)
            {
                // printf("queue[r][u] %d \n", queue[r][u]);
                temparr[top] = queue[r][u];
                top = top + 1;
            }
            // printf("R %d U\n", queue[r][u]);
        }
    }
    // for (int o = 0; o < 5; o++)
    // {
    //     // printf("temparr %d", temparr[o]);
    // }
}

void initqueue(int queue[10][10])
{

    for (int r = 0; r < 10; r++)
    {
        for (int u = 0; u < 10; u++)
        {

            queue[r][u] = -1;
            // printf("R %d U\n", queue[r][u]);
        }
    }
    // for (int o = 0; o < 5; o++)
    // {
    //     // printf("temparr %d", temparr[o]);
    // }
}

void tempcopy(int arr[50], int temp[50], int min, int max)
{
    int i;
    for (i = min; i <= max; i++)
        arr[i] = temp[i];
}