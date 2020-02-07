#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../common.h"
#include "../../../../../common.h"
#include "./../../display/characterdisplay.h"

void preorder(struct treenode *root);
void inorder(struct treenode *root);
void postorder(struct treenode *root);
void levelorder(struct treenode *root);
void displaybnode(struct treenode *p, char *message);

void levelenqueue(struct treenode *root);
struct treenode *leveldequeue();
struct treenode *levelsearch(struct treenode *root, char element);
int height(struct treenode *root);
void levelcount(struct treenode *root);
void search(struct treenode *root, char value);
