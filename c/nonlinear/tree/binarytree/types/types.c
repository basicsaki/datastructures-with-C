#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"
// #include "./../common.h"

struct treenode *binarytree(struct treenode *root)
{
    struct treenode *temp, *c, *d, *e, *f;
    root = (struct treenode *)malloc(sizeof(struct treenode));

    root->payload = 'A';
    temp = (struct treenode *)malloc(sizeof(struct treenode));
    temp->payload = 'B';
    root->rchild = temp;

    c = (struct treenode *)malloc(sizeof(struct treenode));
    d = (struct treenode *)malloc(sizeof(struct treenode));
    e = (struct treenode *)malloc(sizeof(struct treenode));
    f = (struct treenode *)malloc(sizeof(struct treenode));

    root->lchild = c;
    root->lchild->lchild = d;
    root->lchild->lchild->rchild = e;
    root->rchild->lchild = f;

    c->payload = 'C';
    d->payload = 'D';
    e->payload = 'E';
    f->payload = 'F';

    return root;
};

struct treenode *fullbinarytree(struct treenode *root)
{
    struct treenode *temp, *c, *d, *e, *f, *g;
    root = NULL;
    root = (struct treenode *)malloc(sizeof(struct treenode));

    root->payload = 'A';
    temp = (struct treenode *)malloc(sizeof(struct treenode));
    temp->payload = 'B';
    root->rchild = temp;

    c = (struct treenode *)malloc(sizeof(struct treenode));
    d = (struct treenode *)malloc(sizeof(struct treenode));
    e = (struct treenode *)malloc(sizeof(struct treenode));
    f = (struct treenode *)malloc(sizeof(struct treenode));
    g = (struct treenode *)malloc(sizeof(struct treenode));

    root->lchild = c;
    root->lchild->lchild = d;
    root->lchild->rchild = e;
    root->lchild->lchild->lchild = f;
    root->lchild->lchild->rchild = g;

    c->payload = 'C';
    d->payload = 'D';
    e->payload = 'E';
    f->payload = 'F';
    g->payload = 'G';

    return root;
};
struct treenode *perfectbinarytree(struct treenode *root)
{
    struct treenode *temp, *c, *d, *e, *f, *g;
    root = NULL;
    root = (struct treenode *)malloc(sizeof(struct treenode));

    root->payload = 'A';
    temp = (struct treenode *)malloc(sizeof(struct treenode));
    temp->payload = 'B';
    root->rchild = temp;

    c = (struct treenode *)malloc(sizeof(struct treenode));
    d = (struct treenode *)malloc(sizeof(struct treenode));
    e = (struct treenode *)malloc(sizeof(struct treenode));
    f = (struct treenode *)malloc(sizeof(struct treenode));
    g = (struct treenode *)malloc(sizeof(struct treenode));

    root->lchild = c;
    root->lchild->lchild = d;
    root->lchild->rchild = e;
    root->rchild->lchild = f;
    root->rchild->rchild = g;

    c->payload = 'C';
    d->payload = 'D';
    e->payload = 'E';
    f->payload = 'F';
    g->payload = 'G';

    return root;
};
struct treenode *completebinarytree(struct treenode *root)
{
    struct treenode *temp, *c, *d, *e, *f, *g;
    root = NULL;
    root = (struct treenode *)malloc(sizeof(struct treenode));

    root->payload = 'A';
    temp = (struct treenode *)malloc(sizeof(struct treenode));
    temp->payload = 'B';
    root->rchild = temp;

    c = (struct treenode *)malloc(sizeof(struct treenode));
    d = (struct treenode *)malloc(sizeof(struct treenode));
    e = (struct treenode *)malloc(sizeof(struct treenode));
    f = (struct treenode *)malloc(sizeof(struct treenode));
    g = (struct treenode *)malloc(sizeof(struct treenode));

    root->lchild = c;
    root->lchild->lchild = d;
    root->lchild->rchild = e;
    root->rchild->lchild = f;
    root->lchild->rchild->lchild = g;

    c->payload = 'C';
    d->payload = 'D';
    e->payload = 'E';
    f->payload = 'F';
    g->payload = 'G';

    return root;
};
struct treenode *extendedbinarytree(struct treenode *root)
{
    struct treenode *temp, *c, *d, *e, *f;
    root = NULL;
    root = (struct treenode *)malloc(sizeof(struct treenode));

    root->payload = 'A';
    temp = (struct treenode *)malloc(sizeof(struct treenode));
    temp->payload = 'B';
    root->rchild = temp;

    c = (struct treenode *)malloc(sizeof(struct treenode));
    d = (struct treenode *)malloc(sizeof(struct treenode));
    e = (struct treenode *)malloc(sizeof(struct treenode));
    f = (struct treenode *)malloc(sizeof(struct treenode));

    root->lchild = c;
    root->lchild->lchild = d;
    root->lchild->lchild->rchild = e;
    root->rchild->lchild = f;

    c->payload = 'C';
    d->payload = 'D';
    e->payload = 'E';
    f->payload = 'F';

    return root;
};
struct treenode *balancedbinarytree(struct treenode *root)
{
    struct treenode *temp, *c, *d, *e, *f, *g;
    root = NULL;
    root = (struct treenode *)malloc(sizeof(struct treenode));

    root->payload = 'A';
    temp = (struct treenode *)malloc(sizeof(struct treenode));
    temp->payload = 'B';
    root->rchild = temp;

    c = (struct treenode *)malloc(sizeof(struct treenode));
    d = (struct treenode *)malloc(sizeof(struct treenode));
    e = (struct treenode *)malloc(sizeof(struct treenode));
    f = (struct treenode *)malloc(sizeof(struct treenode));
    g = (struct treenode *)malloc(sizeof(struct treenode));

    root->lchild = c;
    root->lchild->lchild = d;
    root->lchild->rchild = e;
    // root->rchild->lchild = f;
    // root->lchild->rchild->lchild = g;

    c->payload = 'C';
    d->payload = 'D';
    e->payload = 'E';
    // f->payload = 'F';
    // g->payload = 'G';

    return root;
};
struct treenode *rskewedbinarytree(struct treenode *root)
{
    struct treenode *temp, *c, *d, *e, *f, *g;
    root = NULL;
    root = (struct treenode *)malloc(sizeof(struct treenode));

    root->payload = 'A';
    temp = (struct treenode *)malloc(sizeof(struct treenode));
    temp->payload = 'B';
    root->rchild = temp;

    c = (struct treenode *)malloc(sizeof(struct treenode));
    d = (struct treenode *)malloc(sizeof(struct treenode));
    e = (struct treenode *)malloc(sizeof(struct treenode));
    f = (struct treenode *)malloc(sizeof(struct treenode));
    g = (struct treenode *)malloc(sizeof(struct treenode));

    root->rchild = c;
    root->rchild->rchild = d;
    root->rchild->rchild->rchild = e;
    root->rchild->rchild->rchild->rchild = f;
    root->rchild->rchild->rchild->rchild->rchild = g;

    c->payload = 'C';
    d->payload = 'D';
    e->payload = 'E';
    f->payload = 'F';
    g->payload = 'G';

    return root;
};
struct treenode *lskewedbinarytree(struct treenode *root)
{
    struct treenode *temp, *c, *d, *e, *f, *g;
    root = NULL;
    root = (struct treenode *)malloc(sizeof(struct treenode));

    root->payload = 'A';
    temp = (struct treenode *)malloc(sizeof(struct treenode));
    temp->payload = 'B';
    // root->rchild = temp;

    c = (struct treenode *)malloc(sizeof(struct treenode));
    d = (struct treenode *)malloc(sizeof(struct treenode));
    e = (struct treenode *)malloc(sizeof(struct treenode));
    f = (struct treenode *)malloc(sizeof(struct treenode));
    g = (struct treenode *)malloc(sizeof(struct treenode));

    root->lchild = c;
    root->lchild->lchild = d;
    root->lchild->lchild->lchild = e;
    root->lchild->lchild->lchild->lchild = f;
    root->lchild->lchild->lchild->lchild->lchild = g;

    c->payload = 'C';
    d->payload = 'D';
    e->payload = 'E';
    f->payload = 'F';
    g->payload = 'G';

    return root;
};
struct treenode *binarysearchtree(struct treenode *root)
{
    struct treenode *temp, *c, *d, *e, *f;
    root = NULL;
    root = (struct treenode *)malloc(sizeof(struct treenode));

    root->payload = 'A';
    temp = (struct treenode *)malloc(sizeof(struct treenode));
    temp->payload = 'B';
    root->rchild = temp;

    c = (struct treenode *)malloc(sizeof(struct treenode));
    d = (struct treenode *)malloc(sizeof(struct treenode));
    e = (struct treenode *)malloc(sizeof(struct treenode));
    f = (struct treenode *)malloc(sizeof(struct treenode));

    root->lchild = c;
    root->lchild->lchild = d;
    root->lchild->lchild->rchild = e;
    root->rchild->lchild = f;

    c->payload = 'C';
    d->payload = 'D';
    e->payload = 'E';
    f->payload = 'F';

    return root;
};
