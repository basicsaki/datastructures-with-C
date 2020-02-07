#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./../common.h"

// struct searchtreenode *initsearchtreenode(struct searchtreenode *searchtreenode, int element);
struct searchtreenode *inserttriereeNodeRecursion(struct searchtreenode *searchtreenode, int element);
struct searchtreenode *deletetriereeNode(struct searchtreenode *searchtreenode, int element);