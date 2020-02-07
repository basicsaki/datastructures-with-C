#include "traversal.h"
int levelrear = -1, levelfront = -1;

struct treenode *queue[50];
int queueEmpty();

void preorder(struct treenode *root)
{
    if (root == NULL)
        return;
    verboseflag == 1 ? printf("\nElement %c\n", root->payload) : printf("%c  ", root->payload);
    verboseflag == 1 ? displaybnode(NULL, "STEP: Traverse the left child") : "";
    preorder(root->lchild);
    verboseflag == 1 ? displaybnode(NULL, "STEP: Traverse the right child") : "";

    preorder(root->rchild);
}

void inorder(struct treenode *root)
{
    if (root == NULL)
        return;
    verboseflag == 1 ? displaybnode(NULL, "STEP: Traverse the left child") : "";
    inorder(root->lchild);
    verboseflag == 1 ? printf("\nElement %c\n", root->payload) : printf("%c  ", root->payload);
    verboseflag == 1 ? displaybnode(NULL, "STEP: Traverse the right child") : "";
    inorder(root->rchild);
}

void postorder(struct treenode *root)
{
    if (root == NULL)
        return;
    verboseflag == 1 ? displaybnode(NULL, "STEP: Traverse the left child") : "";
    postorder(root->lchild);
    verboseflag == 1 ? displaybnode(NULL, "STEP: Traverse the right child") : "";
    postorder(root->rchild);
    verboseflag == 1 ? printf("\nElement %c\n", root->payload) : printf("%c  ", root->payload);
}

void displaybnode(struct treenode *p, char *message)
{
    if (message != "")
    {
        printf("\n%s\n", message);
    }
    if (p != NULL)
    {
        printf("Displaying Node:\n");
        displaybtree(p, 1);
    }
};

void levelorder(struct treenode *root)
{
    struct treenode *p, *temp;
    verboseflag == 1 ? displaybnode(NULL, "STEP: Initialize a pointer node") : "";

    if (root == NULL)
    {
        printf("BST is empty");
        return;
    }

    p = root;
    levelenqueue(p);

    verboseflag == 1 ? displaybnode(NULL, "STEP: Traverse the bst queue till it is empty. Add element to a queue.Print the first element.Traverse left-right") : "";
    while (!queueEmpty())
    {
        p = leveldequeue();
        verboseflag == 1 ? printf("\n Element %c\n", p->payload) : printf("%c  ", p->payload);

        if (p->lchild != NULL)
        {
            verboseflag == 1 ? displaybnode(p->lchild, "STEP(p->lchild): Left child is not null, add its node to the queue") : "";
            levelenqueue(p->lchild);
        }
        if (p->rchild != NULL)
        {
            verboseflag == 1 ? displaybnode(p->rchild, "STEP(p->rchild): Right child is not null, add its node to the queue") : "";
            levelenqueue(p->rchild);
        }
    }
}

int height(struct treenode *p)
{
    int hL, hR;
    if (p == NULL)
        return 0;

    hL = height(p->lchild);
    hR = height(p->rchild);

    if (hL > hR)
        return 1 + hL;
    else
        return 1 + hR;
} ///End of height()

struct treenode *levelsearch(struct treenode *root, char element)
{
    struct treenode *p, *temp, *a = NULL;
    int count = 0;
    if (root == NULL)
        return a;
    p = root;
    levelenqueue(p);
    while (p->payload != element)
    {
        p = leveldequeue();
        count++;
        // printf("%c  ", p->payload);

        if (p->lchild != NULL)
        {
            levelenqueue(p->lchild);
        }
        if (p->rchild != NULL)
        {
            levelenqueue(p->rchild);
        }
        if (p == NULL || levelfront == levelrear + 1)
            break;
    }
    if (p->payload != element)
    {
        printf("Not found");
        return a;
    }
    else
    {
        verboseflag == 1 ? displaybnode(p, "STEP: Element found") : "";
        printf("Found %c at memlocation %p\n", p->payload, &p->payload);
        return p;
    }
}

void levelcount(struct treenode *root)
{
    struct treenode *p, *temp;
    int count = 0;
    if (root == NULL)
        return;
    p = root;
    levelenqueue(p);
    while (!queueEmpty())
    {
        count++;
        p = leveldequeue();
        // printf("%c  ", p->payload);

        if (p->lchild != NULL)
        {
            levelenqueue(p->lchild);
        }
        if (p->rchild != NULL)
        {
            levelenqueue(p->rchild);
        }
        if (p == NULL || levelfront == levelrear + 1)
            break;
    }
    printf("Count: %c\n", count);
}

void levelenqueue(struct treenode *p)
{
    if (queue[50] != NULL)
    {
        printf("Stack is full");
    }
    if (levelfront == -1)
    {
        levelfront = levelfront + 1;
    }
    levelrear = levelrear + 1;
    queue[levelrear] = p;
};

struct treenode *leveldequeue()
{
    if (levelfront == -1 || levelfront == levelrear + 1)
    {
        printf("Queue is empty");
    }
    struct treenode *temp;
    temp = queue[levelfront];
    levelfront = levelfront + 1;
    return temp;
}

int queueEmpty()
{
    if (levelfront == -1 || levelfront == levelrear + 1)
        return 1;
    else
        return 0;
}
