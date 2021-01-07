#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./types.h"

struct searchtreenode *maxtrie(struct searchtreenode *type)
{
    struct searchtreenode *tempty, *c, *d, *e, *f, *g;
    // type = NULL;
    type = (struct searchtreenode *)malloc(sizeof(struct searchtreenode));

    type->payload = 500;
    tempty = (struct searchtreenode *)malloc(sizeof(struct searchtreenode));
    c = (struct searchtreenode *)malloc(sizeof(struct searchtreenode));
    d = (struct searchtreenode *)malloc(sizeof(struct searchtreenode));
    e = (struct searchtreenode *)malloc(sizeof(struct searchtreenode));
    f = (struct searchtreenode *)malloc(sizeof(struct searchtreenode));
    g = (struct searchtreenode *)malloc(sizeof(struct searchtreenode));

    tempty->payload = 400;

    type->lchild = tempty;
    type->lchild->rchild = d;
    type->lchild->lchild = c;
    type->rchild = e;
    type->rchild->lchild = f;
    type->rchild->rchild = g;

    c->payload = 200;
    d->payload = 300;
    e->payload = 100;
    f->payload = 20;
    g->payload = 90;

    return type;
};
struct searchtreenode *mintrie(struct searchtreenode *type)
{
    struct searchtreenode *tempty, *c, *d, *e, *f, *g;
    // type = NULL;
    type = (struct searchtreenode *)malloc(sizeof(struct searchtreenode));

    type->payload = 100;
    tempty = (struct searchtreenode *)malloc(sizeof(struct searchtreenode));
    c = (struct searchtreenode *)malloc(sizeof(struct searchtreenode));
    d = (struct searchtreenode *)malloc(sizeof(struct searchtreenode));
    e = (struct searchtreenode *)malloc(sizeof(struct searchtreenode));
    f = (struct searchtreenode *)malloc(sizeof(struct searchtreenode));
    g = (struct searchtreenode *)malloc(sizeof(struct searchtreenode));

    tempty->payload = 200;

    type->lchild = tempty;
    type->lchild->rchild = d;
    type->lchild->lchild = c;
    type->rchild = e;
    type->rchild->lchild = f;
    type->rchild->rchild = g;

    c->payload = 250;
    d->payload = 300;
    e->payload = 500;
    f->payload = 700;
    g->payload = 900;

    return type;
};
