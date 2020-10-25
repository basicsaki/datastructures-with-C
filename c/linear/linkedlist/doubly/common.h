#include "../../../../common.h"

#ifndef COMMON_H
#define COMMON_H

typedef struct node
{
    struct node *previouspointer;
    int payload;
    struct node *nextpointer;
} node;

#endif
