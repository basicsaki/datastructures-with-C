#include "../../../../common.h"

#ifndef INT_H
#define INT_H

struct generalnode
{
    struct generalnode *lchild, *rchild;
    int payload;
};

#endif
