#include <stdio.h>
#include <stdlib.h>
#include "./../common.h"
#include "../../../common.h"
void heap_sort(int arr[50], int count);
void copyArr(int temp[], int arr[], int count);

void deleteHeapS(int arr[], int count);
void insertHeapSort(int arr[], int count);
void restoredownheap(int arr[], int count, int index);
int deleteHeapSort(int arr[50], int *count);

void displayheapT(int arr[50], int heapsize);