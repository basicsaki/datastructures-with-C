#include "./implementation.h"
#include "../traversal/traversal.h"

struct searchtreenode *initbstnode(struct searchtreenode *bstnode, int element)
{
    bstnode = (struct searchtreenode *)malloc(sizeof(struct searchtreenode));
    verboseflag == 1 ? displaybstnode(NULL, "STEP: MAllocate for the new node") : "";
    bstnode->payload = element;
    bstnode->lchild = NULL;
    bstnode->rchild = NULL;
    verboseflag == 1 ? displaybstnode(bstnode, "STEP: Set payload and initialize left and right children as NULL") : "";
    return bstnode;
};

struct searchtreenode *insertBSTreeNodeRecursion(struct searchtreenode *bstnode, int element)
{
    verboseflag == 1 ? displaybstnode(bstnode, "STEP(bstnode): Check if the tree is empty") : "";
    if (bstnode == NULL)
    {
        bstnode = initbstnode(bstnode, element);
        return bstnode;
    }
    verboseflag == 1 ? displaybstnode(bstnode, "STEP(bstnode): Check if element > node payload") : "";
    if (element > bstnode->payload)
    {
        verboseflag == 1 ? displaybstnode(bstnode, "STEP(bstnode): Element > node payload") : "";
        // printf("%d rchild", bstnode->payload);
        bstnode->rchild = insertBSTreeNodeRecursion(bstnode->rchild, element);
    }
    else if (element < bstnode->payload)
    {
        verboseflag == 1 ? displaybstnode(bstnode, "STEP(bstnode): Element < node payload") : "";
        // printf("%d lchild", bstnode->payload);
        bstnode->lchild = insertBSTreeNodeRecursion(bstnode->lchild, element);
    }
    else
    {
        // verboseflag == 1 ? displaybsttree(bstnode, "Case 2: When element < node payload") : "";
        displaybsttree(bstnode, 0);
        printf("The payload is already present in the tree %d\n", bstnode->payload);
    }
    return bstnode;
};

struct searchtreenode *deleteBSTreeNode(struct searchtreenode *bstnode, int element)
{
    struct searchtreenode *temp, *p, *inordernewnode;

    p = bstnode;
    verboseflag == 1 ? displaybstnode(p, "STEP(p): Initialize a pointer to the node") : "";

    verboseflag == 1 ? displaybstnode(NULL, "STEP: Check if the node is null, return not found if true") : "";
    if (bstnode == NULL)
        return NULL;

    verboseflag == 1 ? displaybstnode(bstnode, "STEP: Check if the element to be searched > bstnode") : "";
    if (element > bstnode->payload)
    {
        // printf("Element greater bstnode val %d", bstnode->payload);
        bstnode->rchild = deleteBSTreeNode(bstnode->rchild, element);
    }
    else if (element < bstnode->payload)
    {
        verboseflag == 1 ? displaybstnode(NULL, "STEP: Element to be searched < bstnode") : "";
        // printf("Element lesser bstnode val %d", bstnode->payload);
        bstnode->lchild = deleteBSTreeNode(bstnode->lchild, element);
    }
    else
    {
        // printf("Case 0 inside else %d", bstnode->payload);
        //check for both the children case c
        verboseflag == 1 ? displaybstnode(NULL, "STEP: Case (c)Check if left child and right child are not null\n Case (b),case (b) Check if specifically the left child is not null\nCase (a)Check if the right child is not null \nCase(0)Check if both the children are null ") : "";
        if (bstnode->lchild != NULL && bstnode->rchild != NULL)
        {

            // printf("Case C both not null %d", bstnode->payload);
            temp = bstnode->rchild;
            verboseflag == 1 ? displaybstnode(temp, "STEP(temp): Initialize a temp element as the node right child, traverse till the left most node, i.e inorder traverse for next element") : "";
            while (temp->lchild != NULL)
                temp = temp->lchild;
            verboseflag == 1 ? displaybstnode(temp, "STEP(temp): Temp element found") : "";

            bstnode->payload = temp->payload;
            // printf("Case C both not null inordernewnode %d", temp->payload);
            bstnode->rchild = deleteBSTreeNode(bstnode->rchild, temp->payload);
            // printf("Case C both not null right child %d", bstnode->rchild->payload);
            return bstnode;
        }
        else
        {
            if (bstnode->lchild != NULL)
            {
                temp = bstnode->lchild;
                verboseflag == 1 ? displaybstnode(temp, "STEP(temp): Left child is not null. Initialize temp node as the node left child") : "";
            }
            if (bstnode->rchild != NULL)
            {
                temp = bstnode->rchild;
                verboseflag == 1 ? displaybstnode(temp, "STEP(temp): Right child is not null.Initialize temp node as the node right child") : "";

                // printf("Case B right child not null %d", temp->payload);
            }
            if (bstnode->rchild == NULL && bstnode->lchild == NULL)
            {
                verboseflag == 1 ? displaybstnode(NULL, "STEP(temp):  Leaf Node.Both left and right child are null") : "";

                // temp = (struct searchtreenode *)malloc(sizeof(struct searchtreenode));
                temp = NULL;
            }
            // printf("Case A bst node %d\n", bstnode->payload);
            free(bstnode);

            bstnode = temp;
            return bstnode;
            /* code */
        }
    };
}