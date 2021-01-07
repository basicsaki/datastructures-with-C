#include "./implementation.h"

struct generalnode *initgeneralnode(struct generalnode *generalnode, int element)
{
    generalnode = (struct generalnode *)malloc(sizeof(struct generalnode));
    generalnode->payload = element;
    generalnode->lchild = NULL;
    generalnode->rchild = NULL;
    return generalnode;
};

struct generalnode *insertgeneralreeNodeRecursion(struct generalnode *generalnode, int element)
{
    if (generalnode == NULL)
    {
        generalnode = initgeneralnode(generalnode, element);
        return generalnode;
    }
    if (element > generalnode->payload)
    {
        printf("%d rchild", generalnode->payload);
        generalnode->rchild = insertgeneralreeNodeRecursion(generalnode->rchild, element);
    }
    else if (element < generalnode->payload)
    {
        printf("%d lchild", generalnode->payload);
        generalnode->lchild = insertgeneralreeNodeRecursion(generalnode->lchild, element);
    }
    else
    {
        printf("The payload is already present in the tree %d", generalnode->payload);
    }
    return generalnode;
};

struct generalnode *deletegeneralreeNode(struct generalnode *generalnode, int element){

    // if (element > generalnode)
    // {
    //     generalnode = deletegeneralreeNode(generalnode, generalnode->rchild, element)
    // }
    // else if (element < generalnode)
    // {
    //     generalnode = deletegeneralreeNode(generalnode, generalnode->lchild, element)
    // }
    // else
    // {
    //     free(generalnode);
    // }
};