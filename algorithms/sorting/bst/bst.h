#include <stdio.h>
#include <stdlib.h>
#include "../../../c/nonlinear/tree/searchtreenode.h"
#include "../../../c/nonlinear/tree/binarysearchtree/traversal/traversal.h"
#include "../../../c/nonlinear/tree/binarysearchtree/implementation/implementation.h"
#include "./../common.h"
void bst_sort(int arr[50], int count);
void bstinorderarray(int arr[], struct searchtreenode *root, int i);