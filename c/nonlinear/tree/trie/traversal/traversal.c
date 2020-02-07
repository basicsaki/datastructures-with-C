#include "./traversal.h"

int triefront = -1, trierear = -1;

struct searchtreenode *triesearch(struct searchtreenode *root, char element)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->payload > element)
    {
        triesearch(root->lchild, element);
    }
    else if (root->payload < element)
    {
        triesearch(root->rchild, element);
    }
    else
    {
        return root;
    }
};
// void displaysearchtreenode(struct searchtreenode *p){};

void triepreorder(struct searchtreenode *root)
{
    if (trieempty(root) == 1)
    {
        printf("List is empty");
        return;
    }
    printf("%d  ", root->payload);
    triepreorder(root->lchild);
    triepreorder(root->rchild);
    // return;
};

void trieinorder(struct searchtreenode *root)
{
    if (trieempty(root) == 1)
        return;
    trieinorder(root->lchild);
    printf("%d  ", root->payload);
    trieinorder(root->rchild);
};
void triepostorder(struct searchtreenode *root)
{
    if (root == NULL)
        return;
    triepostorder(root->lchild);
    triepostorder(root->rchild);
    printf("%d  ", root->payload);
};

void trielevelorder(struct searchtreenode *root)
{
    // root root->lchild root->rchild root->lchild->lchild root->lchild->rchild
    struct searchtreenode *temp;

    if (root == NULL)
    {
        printf("trie is empty");
        return;
    }
    trieenqueue(root);
    while (!triequeueEmpty())
    {
        temp = triedequeue();
        printf("%d  ", temp->payload);
        if (temp->lchild != NULL)
            trieenqueue(temp->lchild);
        if (temp->rchild != NULL)
            trieenqueue(temp->rchild);
    }
};

int triequeueEmpty()
{
    if (triefront == -1 || triefront == trierear + 1)
        return 1;
    return 0;
}

void trieenqueue(struct searchtreenode *node)
{
    // if (triefront == -1 || triefront == trierear + 1)
    // {
    //     // return;
    //     // printf("Queue is empty");
    // }
    if (triefront == -1)
    {
        triefront += 1;
    }
    trierear += 1;
    triequeue[trierear] = node;
    // printf("Enqueued");
};

struct searchtreenode *triedequeue()
{
    if (triefront == -1 || triefront == trierear + 1)
    {
        // printf("Queue is empty");
        return NULL;
    }

    struct searchtreenode *temp;
    temp = triequeue[triefront];
    triefront += 1;
    return temp;
};

void triestats(struct searchtreenode *root)
{
    int count = 0, depth;
    count = trietraverseall(root, count);
    printf("Count of the elements in trie: %d", count);
    printf("trie depth: %d", depth);
};

int trietraverseall(struct searchtreenode *node, int count)
{
    count += 1;

    if (node->lchild != NULL)
    {
        trietraverseall(node->lchild, count);
    }
    if (node->rchild != NULL)
    {
        trietraverseall(node->rchild, count);
    }
    return count;
}

int trieempty(struct searchtreenode *root)
{
    if (root == NULL)
    {
        return 1;
    }
    return 0;
}

void triemaxminstats(struct searchtreenode *root)
{
    //find left most node
    struct searchtreenode *temp, *p;
    p = root;
    temp = root;
    if (trieempty(root) == 1)
    {
        printf("trie is empty");
    }
    else if (root->lchild == NULL && root->rchild == NULL)
    {
        printf("Max element: %d\n", root->payload);
        printf("Min element: %d\n", root->payload);
    }
    else
    {
        while (p->lchild != NULL)
        {
            p = p->lchild;
        }
        while (temp->rchild != NULL)
        {
            temp = temp->rchild;
        }
        printf("Max element: %d\n", temp->payload);
        printf("Min element: %d\n", p->payload);
    }
}