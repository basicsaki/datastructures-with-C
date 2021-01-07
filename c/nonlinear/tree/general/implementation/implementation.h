#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// #include "./../../searchtreenode.h"
#include "./../common.h"

struct generalnode *initgeneralnode(struct generalnode *generalnode, int element);
struct generalnode *insertgeneralreeNodeRecursion(struct generalnode *generalnode, int element);
struct generalnode *deletegeneralreeNode(struct generalnode *generalnode, int element);