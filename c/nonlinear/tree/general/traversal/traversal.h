#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./../common.h"

struct generalnode *generalsearch(struct generalnode *root, char element);
int generalempty(struct generalnode *root);
void displaygeneralnode(struct generalnode *p);
void generalpreorder(struct generalnode *root);
void generalinorder(struct generalnode *root);
void generalpostorder(struct generalnode *root);
void generallevelorder(struct generalnode *root);
void generalstats(struct generalnode *root);
void generalmaxminstats(struct generalnode *root);
struct generalnode *generalqueue[50];
void generalenqueue(struct generalnode *node);
struct generalnode *generaldequeue();
int generalqueueEmpty();
int generaltraverseall(struct generalnode *node, int count);
