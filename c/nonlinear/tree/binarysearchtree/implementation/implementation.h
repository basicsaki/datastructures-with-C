#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// #include "./../common.h"

#include "./../../searchtreenode.h"

struct searchtreenode *initbstnode(struct searchtreenode *bstnode, int element);
struct searchtreenode *insertBSTreeNodeRecursion(struct searchtreenode *bstnode, int element);
struct searchtreenode *deleteBSTreeNode(struct searchtreenode *bstnode, int element);