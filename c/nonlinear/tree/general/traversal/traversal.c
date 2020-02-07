#include "./traversal.h"

int generalfront = -1, generalrear = -1;

struct generalnode *generalsearch(struct generalnode *root, char element)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->payload > element)
    {
        generalsearch(root->lchild, element);
    }
    else if (root->payload < element)
    {
        generalsearch(root->rchild, element);
    }
    else
    {
        return root;
    }
};
void displaygeneralnode(struct generalnode *p){};

void generalpreorder(struct generalnode *root)
{
    if (generalempty(root) == 1)
    {
        printf("List is empty");
        return;
    }
    printf("%d  ", root->payload);
    generalpreorder(root->lchild);
    generalpreorder(root->rchild);
    // return;
};

void generalinorder(struct generalnode *root)
{
    if (generalempty(root) == 1)
        return;
    generalinorder(root->lchild);
    printf("%d  ", root->payload);
    generalinorder(root->rchild);
};
void generalpostorder(struct generalnode *root)
{
    if (root == NULL)
        return;
    generalpostorder(root->lchild);
    generalpostorder(root->rchild);
    printf("%d  ", root->payload);
};

void generallevelorder(struct generalnode *root)
{
    // root root->lchild root->rchild root->lchild->lchild root->lchild->rchild
    struct generalnode *temp;

    if (root == NULL)
    {
        printf("general is empty");
        return;
    }
    generalenqueue(root);
    while (!generalqueueEmpty())
    {
        temp = generaldequeue();
        printf("%d  ", temp->payload);
        if (temp->lchild != NULL)
            generalenqueue(temp->lchild);
        if (temp->rchild != NULL)
            generalenqueue(temp->rchild);
    }
};

int generalqueueEmpty()
{
    if (generalfront == -1 || generalfront == generalrear + 1)
        return 1;
    return 0;
}

void generalenqueue(struct generalnode *node)
{
    // if (generalfront == -1 || generalfront == generalrear + 1)
    // {
    //     // return;
    //     // printf("Queue is empty");
    // }
    if (generalfront == -1)
    {
        generalfront += 1;
    }
    generalrear += 1;
    generalqueue[generalrear] = node;
    // printf("Enqueued");
};

struct generalnode *generaldequeue()
{
    if (generalfront == -1 || generalfront == generalrear + 1)
    {
        // printf("Queue is empty");
        return NULL;
    }

    struct generalnode *temp;
    temp = generalqueue[generalfront];
    generalfront += 1;
    return temp;
};

void generalstats(struct generalnode *root)
{
    int count = 0, depth;
    count = generaltraverseall(root, count);
    printf("Count of the elements in general: %d", count);
    printf("general depth: %d", depth);
};

int generaltraverseall(struct generalnode *node, int count)
{
    count += 1;

    if (node->lchild != NULL)
    {
        generaltraverseall(node->lchild, count);
    }
    if (node->rchild != NULL)
    {
        generaltraverseall(node->rchild, count);
    }
    return count;
}

int generalempty(struct generalnode *root)
{
    if (root == NULL)
    {
        return 1;
    }
    return 0;
}

void generalmaxminstats(struct generalnode *root)
{
    //find left most node
    struct generalnode *temp, *p;
    p = root;
    temp = root;
    if (generalempty(root) == 1)
    {
        printf("general is empty");
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