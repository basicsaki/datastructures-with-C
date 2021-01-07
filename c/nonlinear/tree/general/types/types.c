#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./types.h"

struct generalnode *generalg(struct generalnode *type)
{
    struct generalnode *tempty, *c, *d, *e, *f, *g;
    // type = NULL;
    type = (struct generalnode *)malloc(sizeof(struct generalnode));

    type->payload = 8;
    tempty = (struct generalnode *)malloc(sizeof(struct generalnode));
    c = (struct generalnode *)malloc(sizeof(struct generalnode));
    d = (struct generalnode *)malloc(sizeof(struct generalnode));
    e = (struct generalnode *)malloc(sizeof(struct generalnode));
    f = (struct generalnode *)malloc(sizeof(struct generalnode));
    g = (struct generalnode *)malloc(sizeof(struct generalnode));

    tempty->payload = 5;

    type->lchild = tempty;
    type->lchild->rchild = d;
    type->lchild->lchild = c;
    type->rchild = e;
    type->rchild->lchild = f;
    type->rchild->rchild = g;

    c->payload = 3;
    d->payload = 6;
    e->payload = 11;
    f->payload = 9;
    g->payload = 15;

    return type;
}

// struct generalnode *temp, *p;
// temp = (struct generalnode *)malloc(sizeof(temp));

// //Root element
// type->payload = 8;
// type->lchild = NULL;
// type->rchild = NULL;
// // temp = st

// //left smaller element
// //init temp
// temp->payload = 5;
// temp->lchild = NULL;
// temp->rchild = NULL;

// type->lchild = temp;

// //left left smaller element
// temp->payload = 4;
// temp->lchild = NULL;
// temp->rchild = NULL;
// type->lchild->lchild = temp;

// //left left smaller element
// temp->payload = 7;
// temp->lchild = NULL;
// temp->rchild = NULL;
// type->lchild->rchild = temp;

// //left left smaller element
// temp->payload = 3;
// temp->lchild = NULL;
// temp->rchild = NULL;
// type->lchild->lchild->lchild = temp;

// //right side
// //right bigger element
// //init temp
// temp->payload = 11;
// temp->lchild = NULL;
// temp->rchild = NULL;

// type->rchild = temp;

// //right right bigger element
// temp->payload = 15;
// temp->lchild = NULL;
// temp->rchild = NULL;
// type->rchild->rchild = temp;

// //right left bigger smaller element
// temp->payload = 9;
// temp->lchild = NULL;
// temp->rchild = NULL;
// type->rchild->lchild = temp;

// //left left smaller element
// temp->payload = 17;
// temp->lchild = NULL;
// temp->rchild = NULL;
// type->rchild->rchild->rchild = temp;

// return type;
// }