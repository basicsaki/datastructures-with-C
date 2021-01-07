#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./../common.h"

struct searchtreenode *triesearch(struct searchtreenode *root, char element);
int trieempty(struct searchtreenode *root);
// void displaysearchtreenode(struct searchtreenode *p);
void triepreorder(struct searchtreenode *root);
void trieinorder(struct searchtreenode *root);
void triepostorder(struct searchtreenode *root);
void trielevelorder(struct searchtreenode *root);
void triestats(struct searchtreenode *root);
void triemaxminstats(struct searchtreenode *root);
struct searchtreenode *triequeue[50];
void trieenqueue(struct searchtreenode *node);
struct searchtreenode *triedequeue();
int triequeueEmpty();
int trietraverseall(struct searchtreenode *node, int count);
