#include "bst.h"

void bst_sort(int arr[50], int count)
{
    struct searchtreenode *root = NULL, *treenode = NULL, *type = NULL, *temp;

    for (int i = 0; i <= count; i++)
    {
        root = insertBSTreeNodeRecursion(root, arr[i]);
    }
    bstinorderarray(arr, root, 0);
}

void bstinorderarray(int arr[], struct searchtreenode *root, int i)
{
    if (bstempty(root) == 1)
        return;

    bstinorderarray(arr, root->lchild, i);
    arr[i++] = root->payload;
    // i++;

    printf("sorted %d \n i %d \n", root->payload, i);
    bstinorderarray(arr, root->rchild, i);
};