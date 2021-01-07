#include "./implementation.h"

// struct searchtreenode *initsearchtreenode(struct searchtreenode *searchtreenode, int element)
// {
//     searchtreenode = (struct searchtreenode *)malloc(sizeof(struct searchtreenode));
//     searchtreenode->payload = element;
//     searchtreenode->lchild = NULL;
//     searchtreenode->rchild = NULL;
//     return searchtreenode;
// };

struct searchtreenode *inserttriereeNodeRecursion(struct searchtreenode *searchtreenode, int element)
{
    if (searchtreenode == NULL)
    {
        // searchtreenode = initsearchtreenode(searchtreenode, element);
        return searchtreenode;
    }
    if (element > searchtreenode->payload)
    {
        printf("%d rchild", searchtreenode->payload);
        searchtreenode->rchild = inserttriereeNodeRecursion(searchtreenode->rchild, element);
    }
    else if (element < searchtreenode->payload)
    {
        printf("%d lchild", searchtreenode->payload);
        searchtreenode->lchild = inserttriereeNodeRecursion(searchtreenode->lchild, element);
    }
    else
    {
        printf("The payload is already present in the tree %d", searchtreenode->payload);
    }
    return searchtreenode;
};

struct searchtreenode *deletetriereeNode(struct searchtreenode *searchtreenode, int element){

    // if (element > searchtreenode)
    // {
    //     searchtreenode = deletetriereeNode(searchtreenode, searchtreenode->rchild, element)
    // }
    // else if (element < searchtreenode)
    // {
    //     searchtreenode = deletetriereeNode(searchtreenode, searchtreenode->lchild, element)
    // }
    // else
    // {
    //     free(searchtreenode);
    // }
};