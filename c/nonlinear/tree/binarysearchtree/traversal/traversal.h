#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./../../searchtreenode.h"
#include "./../common.h"
#include "../../../../../common.h"
#include "../../display/intdisplay.h"

struct searchtreenode *bstsearch(struct searchtreenode *root, char element);
int bstempty(struct searchtreenode *root);
void displaybstnode(struct searchtreenode *p, char *message);
void bstpreorder(struct searchtreenode *root);
void bstinorder(struct searchtreenode *root);
void bstpostorder(struct searchtreenode *root);
void bstlevelorder(struct searchtreenode *root);
void bststats(struct searchtreenode *root);
void bstmaxminstats(struct searchtreenode *root);
struct searchtreenode *bstqueue[50];
void bstenqueue(struct searchtreenode *node);
struct searchtreenode *bstdequeue();
int bstqueueEmpty();
int traverseall(struct searchtreenode *node, int count);
int bstmaxleftheight(struct searchtreenode *node, int count);
int bstmaxrightheight(struct searchtreenode *node, int height);
int bstheight(struct searchtreenode *node);