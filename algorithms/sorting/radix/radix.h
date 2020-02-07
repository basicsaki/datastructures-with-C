
#include <stdio.h>
#include <stdlib.h>
#include "./../common.h"
#include "../../../common.h"
void radix_sort(int arr[50], int count);
int findMaxDigits(int arr[], int count);
int findDigit(int number, int position);
void readqueue(int queue[10][10], int arr[]);
void tempcopy(int arr[50], int temp[50], int min, int max);
void initqueue(int queue[10][10]);