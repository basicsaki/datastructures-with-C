
#ifndef COMMON_H
#define COMMON_H

typedef struct searchtreenode
{
    struct searchtreenode *lchild, *rchild;
    int payload;
} searchtreenode;

#endif
