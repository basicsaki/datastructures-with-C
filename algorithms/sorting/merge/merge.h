#include <stdio.h>
#include <stdlib.h>
#include "./../common.h"
void merge_sort(int arr[50], int max, int min);
void merge(int arr[], int temp[], int low1, int up1, int low2, int up2);
void copy(int arr[50], int temp[50], int min, int max);