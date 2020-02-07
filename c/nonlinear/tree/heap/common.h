#include "../../../../common.h"

#ifndef COMMON_H
#define COMMON_H

struct searchtreenode
{
    struct searchtreenode *lchild, *rchild;
    int payload;
};

#endif
