#include "intdisplay.h"
int gaplg = 3;
char snum[5], nodenum[5];

void displaybsttree(struct searchtreenode *root, int choice)
{
    if (choice == 0)
    {
        printf("\nDisplaying tree:\n");
    }
    if (root == NULL)
    {
        printf("\nEmpty Tree. Please initialize the tree first.\n");
    }
    else
    {
        print_ascii_treeg(root);
        // printf("\n");
    }
}

//printing tree in ascii

//used for printing next node in the same level,
//this is the x coordinate of the next char printed
int print_nextg;

int MINg(int X, int Y)
{
    return ((X) < (Y)) ? (X) : (Y);
}

int MAXg(int X, int Y)
{
    return ((X) > (Y)) ? (X) : (Y);
}

asciinodeg *build_ascii_treeg_recursiveg(struct searchtreenode *root)
{
    asciinodeg *node;

    if (root == NULL)
        return NULL;

    node = malloc(sizeof(asciinodeg));
    node->left = build_ascii_treeg_recursiveg(root->lchild);
    node->right = build_ascii_treeg_recursiveg(root->rchild);

    if (node->left != NULL)
    {
        node->left->parent_dir = -1;
    }

    if (node->right != NULL)
    {
        node->right->parent_dir = 1;
    }

    sprintf(snum, "%d", root->payload);
    // sprintf(nodenum, "%d", node->label);

    node->label = root->payload;
    // sprintf(nodenum, "%s", snum);
    node->lablen = strlen(snum);

    return node;
}

//Copy the tree into the ascii node structre
asciinodeg *build_ascii_treeg(struct searchtreenode *root)
{
    asciinodeg *node;
    if (root == NULL)
        return NULL;
    node = build_ascii_treeg_recursiveg(root);
    node->parent_dir = 0;
    return node;
}

//Free all the nodes of the given tree
void free_ascii_treeg(asciinodeg *node)
{
    if (node == NULL)
        return;
    free_ascii_treeg(node->left);
    free_ascii_treeg(node->right);
    free(node);
}

//The following function fills in the lprofile array for the given tree.
//It assumes that the center of the label of the root of this tree
//is located at a position (x,y).  It assumes that the edge_length
//fields have been computed for this tree.
void compute_lprofileg(asciinodeg *node, int x, int y)
{
    int i, isleft;
    if (node == NULL)
        return;
    isleft = (node->parent_dir == -1);
    lprofileg[y] = MINg(lprofileg[y], x - ((node->lablen - isleft) / 2));
    if (node->left != NULL)
    {
        for (i = 1; i <= node->edge_length && y + i < MAX_HEIGHT; i++)
        {
            lprofileg[y + i] = MINg(lprofileg[y + i], x - i);
        }
    }
    compute_lprofileg(node->left, x - node->edge_length - 1, y + node->edge_length + 1);
    compute_lprofileg(node->right, x + node->edge_length + 1, y + node->edge_length + 1);
}

void compute_rprofileg(asciinodeg *node, int x, int y)
{
    int i, notleft;
    if (node == NULL)
        return;
    notleft = (node->parent_dir != -1);
    rprofileg[y] = MAXg(rprofileg[y], x + ((node->lablen - notleft) / 2));
    if (node->right != NULL)
    {
        for (i = 1; i <= node->edge_length && y + i < MAX_HEIGHT; i++)
        {
            rprofileg[y + i] = MAXg(rprofileg[y + i], x + i);
        }
    }
    compute_rprofileg(node->left, x - node->edge_length - 1, y + node->edge_length + 1);
    compute_rprofileg(node->right, x + node->edge_length + 1, y + node->edge_length + 1);
}

//This function fills in the edge_length and
//height fields of the specified tree
void compute_edge_lengthsg(asciinodeg *node)
{
    int h, hmin, i, delta;

    if (node == NULL)
        return;
    compute_edge_lengthsg(node->left);
    compute_edge_lengthsg(node->right);

    /* first fill in the edge_length of node */
    if (node->right == NULL && node->left == NULL)
    {
        node->edge_length = 0;
    }
    else
    {
        if (node->left != NULL)
        {
            for (i = 0; i < node->left->height && i < MAX_HEIGHT; i++)
            {
                rprofileg[i] = -INFINITY;
            }
            compute_rprofileg(node->left, 0, 0);
            hmin = node->left->height;
        }
        else
        {
            hmin = 0;
        }
        if (node->right != NULL)
        {
            for (i = 0; i < node->right->height && i < MAX_HEIGHT; i++)
            {
                lprofileg[i] = INFINITY;
            }
            compute_lprofileg(node->right, 0, 0);
            hmin = MINg(node->right->height, hmin);
        }
        else
        {
            hmin = 0;
        }
        delta = 4;
        for (i = 0; i < hmin; i++)
        {
            delta = MAXg(delta, gaplg + 1 + rprofileg[i] - lprofileg[i]);
        }
        //If the node has two children of height 1, then we allow the
        //two leaves to be within 1, instead of 2
        if (((node->left != NULL && node->left->height == 1) ||
             (node->right != NULL && node->right->height == 1)) &&
            delta > 4)
        {
            delta--;
        }

        node->edge_length = ((delta + 1) / 2) - 1;
    }

    //now fill in the height of node
    h = 1;
    if (node->left != NULL)
    {
        h = MAXg(node->left->height + node->edge_length + 1, h);
    }
    if (node->right != NULL)
    {
        h = MAXg(node->right->height + node->edge_length + 1, h);
    }
    node->height = h;
}

//This function prints the given level of the given tree, assuming
//that the node has the given x cordinate.
void print_levelg(asciinodeg *node, int x, int level)
{
    int i, isleft;
    if (node == NULL)
        return;
    isleft = (node->parent_dir == -1);
    if (level == 0)
    {
        for (i = 0; i < (x - print_nextg - ((node->lablen - isleft) / 2)); i++)
        {
            printf(" ");
        }
        print_nextg += i;
        sprintf(nodenum, "%d", node->label);
        printf("%s", nodenum);
        print_nextg += node->lablen;
    }
    else if (node->edge_length >= level)
    {
        if (node->left != NULL)
        {
            for (i = 0; i < (x - print_nextg - (level)); i++)
            {
                printf(" ");
            }
            print_nextg += i;
            printf("/");
            print_nextg++;
        }
        if (node->right != NULL)
        {
            for (i = 0; i < (x - print_nextg + (level)); i++)
            {
                printf(" ");
            }
            print_nextg += i;
            printf("\\");
            print_nextg++;
        }
    }
    else
    {
        print_levelg(node->left,
                     x - node->edge_length - 1,
                     level - node->edge_length - 1);
        print_levelg(node->right,
                     x + node->edge_length + 1,
                     level - node->edge_length - 1);
    }
}

//prints ascii tree for given Tree structure
void print_ascii_treeg(struct searchtreenode *root)
{
    asciinodeg *proot;
    int xmin, i;
    if (root == NULL)
        return;
    proot = build_ascii_treeg(root);
    compute_edge_lengthsg(proot);
    for (i = 0; i < proot->height && i < MAX_HEIGHT; i++)
    {
        lprofileg[i] = INFINITY;
    }
    compute_lprofileg(proot, 0, 0);
    xmin = 0;
    for (i = 0; i < proot->height && i < MAX_HEIGHT; i++)
    {
        xmin = MINg(xmin, lprofileg[i]);
    }
    for (i = 0; i < proot->height; i++)
    {
        print_nextg = 0;
        print_levelg(proot, -xmin, i);
        printf("\n");
    }
    if (proot->height >= MAX_HEIGHT)
    {
        printf("(This tree is taller than %d, and may be drawn incorrectly.)\n", MAX_HEIGHT);
    }
    free_ascii_treeg(proot);
}