#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../common.h"

struct treenode *insertTreeNode(struct treenode *root, char element, char newpayload);
struct treenode *addLeftChild(struct treenode *root, struct treenode *treenode, char newpayload);
struct treenode *addRightChild(struct treenode *root, struct treenode *treenode, char newpayload);
struct treenode *removeChildren(struct treenode *root, struct treenode *treenode);
struct treenode *findTreeNode(struct treenode *root, char payload);
