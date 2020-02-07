
#include "implementation.h"
#include "../traversal/traversal.h"

struct treenode *insertTreeNode(struct treenode *root, char element, char newpayload)
{
    struct treenode *temp;
    temp = (struct treenode *)malloc(sizeof(struct treenode));
    verboseflag == 1 ? displaybnode(NULL, "STEP: MAllocate for the temp node") : "";

    int choice;
    if (root == NULL)
    {
        root = (struct treenode *)malloc(sizeof(struct treenode));
        root->payload = newpayload;
        root->lchild = NULL;
        root->rchild = NULL;
        verboseflag == 1 ? displaybnode(root, "STEP(root): Initialize the root node") : "";
        // printf("here");
        return root;
    }
    temp = findTreeNode(root, element);
    verboseflag == 1 ? displaybnode(NULL, "STEP: Find the element with the input payload") : "";

    // printf("%c : temp payload", temp->payload);
    if (temp == NULL)
    {
        printf("\nNo such element, please try again!\n\n");
        return root;
    }
    printf("\n\n*******Press 1 to add as a left child \t");
    printf(" || Press 2 to add as a right child*******\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        addLeftChild(root, temp, newpayload);
        break;
    case 2:
        addRightChild(root, temp, newpayload);
        break;
    default:
        printf("Enter a choice from the list");
        break;
    }
    return root;
};

struct treenode *addLeftChild(struct treenode *root, struct treenode *treenode, char newpayload)
{
    struct treenode *temp;
    temp = (struct treenode *)malloc(sizeof(struct treenode));
    temp->lchild = NULL;
    temp->rchild = NULL;
    temp->payload = newpayload;
    verboseflag == 1 ? displaybnode(temp, "STEP(temp): Initailize the temp node with the new value") : "";

    treenode->lchild = temp;
    verboseflag == 1 ? displaybnode(treenode->lchild, "STEP(treenode->lchild): Assign found node's left node with the temp element") : "";

    return root;
};

struct treenode *addRightChild(struct treenode *root, struct treenode *treenode, char newpayload)
{
    struct treenode *temp;
    temp = (struct treenode *)malloc(sizeof(struct treenode));
    temp->lchild = NULL;
    temp->rchild = NULL;
    temp->payload = newpayload;
    verboseflag == 1 ? displaybnode(temp, "STEP(temp): Initailize the temp node with the new value") : "";

    treenode->rchild = temp;
    verboseflag == 1 ? displaybnode(treenode->rchild, "STEP(treenode->rchild): Assign found node's right node with the temp element") : "";

    return root;
};
struct treenode *removeChildren(struct treenode *root, struct treenode *treenode)
{
    struct treenode *temp;
    temp = (struct treenode *)malloc(sizeof(struct treenode));
    treenode->lchild = NULL;
    treenode->rchild = NULL;
    return root;
};

struct treenode *preordersearch(struct treenode *root, char element)
{
    printf("root value in search func %c", root->payload);

    struct treenode *temp = NULL;
    struct treenode *tempr = NULL;
    if (root->payload == element)
    {
        return root;
    }
    temp = preordersearch(root->lchild, element);
    if (temp != NULL)
        return temp;
    tempr = preordersearch(root->rchild, element);
    if (tempr != NULL)
        return tempr;

    printf("Temp value in search func %c", temp->payload);
    printf("Tempr value in search func %c", temp->payload);
    if (temp == NULL && tempr == NULL)
        return NULL;
    // return temp;
}

struct treenode *findTreeNode(struct treenode *root, char element)
{
    struct treenode *temp = NULL;

    // temp = preordersearch(root, element);
    temp = levelsearch(root, element);
    // printf("Temp value in find func %c", temp->payload);
    return temp;
};
