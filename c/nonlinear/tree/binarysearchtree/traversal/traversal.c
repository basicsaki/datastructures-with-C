#include "./traversal.h"

int bstfront = -1, bstrear = -1;

struct searchtreenode *bstsearch(struct searchtreenode *root, char element)
{
    verboseflag == 1 ? displaybstnode(root, "STEP(root): Check if the root is null") : "";
    if (root == NULL)
    {
        verboseflag == 1 ? displaybstnode(root, "STEP(root): Root is null") : "";
        return NULL;
    }
    else if (root->payload > element)
    {
        verboseflag == 1 ? displaybstnode(root, "STEP(root): Check if the new root value > to be searched element") : "";
        bstsearch(root->lchild, element);
    }
    else if (root->payload < element)
    {
        verboseflag == 1 ? displaybstnode(root, "STEP(root): Check if the new root value < to be searched element") : "";
        bstsearch(root->rchild, element);
    }
    else
    {
        return root;
    }
};
void displaybstnode(struct searchtreenode *p, char *message)
{
    if (message != "")
    {
        printf("\n%s\n", message);
    }
    if (p != NULL)
    {
        printf("Displaying Node:\n");
        displaybsttree(p, 1);
    }
};

void bstpreorder(struct searchtreenode *root)
{
    if (bstempty(root) == 1)
    {
        // printf("List is empty");
        return;
    }
    verboseflag == 1 ? printf("\nElement %d\n", root->payload) : printf("%d  ", root->payload);
    verboseflag == 1 ? displaybstnode(NULL, "STEP: Traverse the left child") : "";
    bstpreorder(root->lchild);
    verboseflag == 1 ? displaybstnode(NULL, "STEP: Traverse the right child") : "";
    bstpreorder(root->rchild);
    // return;
};

void bstinorder(struct searchtreenode *root)
{
    if (bstempty(root) == 1)
        return;
    verboseflag == 1 ? displaybstnode(NULL, "STEP: Traverse the left child") : "";
    bstinorder(root->lchild);
    verboseflag == 1 ? printf("\nElement %d\n", root->payload) : printf("%d  ", root->payload);
    verboseflag == 1 ? displaybstnode(NULL, "STEP: Traverse the right child") : "";
    bstinorder(root->rchild);
};
void bstpostorder(struct searchtreenode *root)
{
    if (root == NULL)
        return;
    verboseflag == 1 ? displaybstnode(NULL, "STEP: Traverse the left child") : "";
    bstpostorder(root->lchild);
    verboseflag == 1 ? displaybstnode(NULL, "STEP: Traverse the right child") : "";
    bstpostorder(root->rchild);
    verboseflag == 1 ? printf("\nElement %d\n", root->payload) : printf("%d  ", root->payload);
};

void bstlevelorder(struct searchtreenode *root)
{
    // root root->lchild root->rchild root->lchild->lchild root->lchild->rchild
    struct searchtreenode *temp;
    verboseflag == 1 ? displaybstnode(NULL, "STEP: Initialize a temp node") : "";
    if (root == NULL)
    {
        printf("BST is empty");
        return;
    }
    bstenqueue(root);
    verboseflag == 1 ? displaybstnode(NULL, "STEP: Traverse the bst queue till it is empty. Add element to a queue.Print the first element.Traverse left-right") : "";
    while (!bstqueueEmpty())
    {
        temp = bstdequeue();
        verboseflag == 1 ? printf("\n Element %d\n", temp->payload) : printf("%d  ", temp->payload);

        if (temp->lchild != NULL)
        {
            verboseflag == 1 ? displaybstnode(temp->lchild, "STEP(temp->lchild): Left child is not null, add its node to the queue") : "";
            bstenqueue(temp->lchild);
        }
        if (temp->rchild != NULL)
        {
            verboseflag == 1 ? displaybstnode(temp->rchild, "STEP(temp->rchild): Right child is not null, add its node to the queue") : "";
            bstenqueue(temp->rchild);
        }
    }
};

int bstqueueEmpty()
{
    if (bstfront == -1 || bstfront == bstrear + 1)
        return 1;
    return 0;
}

void bstenqueue(struct searchtreenode *node)
{
    // if (bstfront == -1 || bstfront == bstrear + 1)
    // {
    //     // return;
    //     // printf("Queue is empty");
    // }
    if (bstfront == -1)
    {
        bstfront += 1;
    }
    bstrear += 1;
    bstqueue[bstrear] = node;
    // printf("Enqueued");
};

struct searchtreenode *bstdequeue()
{
    if (bstfront == -1 || bstfront == bstrear + 1)
    {
        // printf("Queue is empty");
        return NULL;
    }

    struct searchtreenode *temp;
    temp = bstqueue[bstfront];
    bstfront += 1;
    return temp;
};

void bststats(struct searchtreenode *root)
{
    int count = 0, depth;
    count = traverseall(root, count);
    printf("Count of the elements in bst: %d", count);
    printf("BST depth: %d", depth);
};

int traverseall(struct searchtreenode *node, int count)
{
    count += 1;

    if (node->lchild != NULL)
    {
        traverseall(node->lchild, count);
    }
    if (node->rchild != NULL)
    {
        traverseall(node->rchild, count);
    }
    return count;
}

int bstempty(struct searchtreenode *root)
{
    if (root == NULL)
    {
        return 1;
    }
    return 0;
}

void bstmaxminstats(struct searchtreenode *root)
{
    //find left most node
    struct searchtreenode *temp, *p;
    p = root;
    temp = root;
    if (bstempty(root) == 1)
    {
        printf("BST is empty");
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

int bstmaxleftheight(struct searchtreenode *node, int leftheight)
{
    printf("Left height top %d\n", leftheight);
    if (node == NULL)
    {
        return leftheight;
    }
    else if (node->lchild == NULL)
    {
        // leftheight = leftheight + 1;
        return leftheight;
    }
    else
    {
        leftheight = leftheight + 1;
        printf("Left height while loop %d\n", leftheight);
        leftheight = bstmaxleftheight(node->lchild, leftheight);
    }
    printf("Left height outside while loop %d\n", leftheight);
    return leftheight;

    // while (node != NULL)
    // {
    //     node = node->lchild;
    //     leftheight = leftheight + 1;
    //     printf("Left height while loop %d\n", leftheight);
    // }
    // printf("Left height outside while loop %d\n", leftheight);
    // return leftheight;
};

int bstmaxrightheight(struct searchtreenode *node, int height)
{
    if (node == NULL)
    {
        return height;
    }
    else if (node->rchild == NULL)
    {
        // height = height + 1;
        return height;
    }
    else
    {
        height = height + 1;
        height = bstmaxrightheight(node->rchild, height);
    }
    return height;
};

int bstheight(struct searchtreenode *node)
{
    int lheight, rheight;
    // printf("Height top lheight %d rheight %d\n", lheight, rheight);
    if (node == NULL)
    {
        return 0;
    }

    // if (node->lchild != NULL)
    // {
    //     lheight = lheight + 1;
    //     printf("Height inside lchild lheight %d rheight %d\n", lheight, rheight);

    lheight = bstheight(node->lchild);
    // }
    // if (node->rchild != NULL)
    // {
    // rheight = rheight + 1;
    // printf("Height inside rchild lheight %d rheight %d\n", lheight, rheight);
    rheight = bstheight(node->rchild);
    // }
    // printf("Height outside %d rheight %d\n", lheight, rheight);
    if (lheight > rheight)
    {
        lheight = lheight + 1;
        // printf("Height inside lchild lheight %d rheight %d\n", lheight, rheight);
        return lheight;
    }
    else
    {
        rheight = rheight + 1;
        // printf("Height inside rchild lheight %d rheight %d\n", lheight, rheight);
        return rheight;
    }
}
