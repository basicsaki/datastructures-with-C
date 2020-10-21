#include "../../../../common.h"

#ifndef COMMON_H
#define COMMON_H

typedef struct node
{
    int payload;
    struct node *pointer;
} node;

#endif
