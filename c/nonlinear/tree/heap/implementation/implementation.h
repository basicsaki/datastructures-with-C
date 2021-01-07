#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./../common.h"

void insertheapreeNodeRecursion(int arr[50], struct searchtreenode *searchtreenode, int *heapsize, int element);
void restoreup(int arr[], int elementIndex);

int deleteheapreeNode(int arr[], int *heapsize);
void restoredown(int arr[50], int heapsize);