#ifndef DISPLAY_H
#define DISPLAY_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./../searchtreenode.h"

void displaybsttree(struct searchtreenode *root, int choice);
typedef struct asciinode_structg asciinodeg;

struct asciinode_structg
{
    asciinodeg *left, *right;

    //length of the edge from this node to its children
    int edge_length;

    int height;

    int lablen;

    //-1=I am left, 0=I am root, 1=right
    int parent_dir;

    //max supported unit32 in dec, 10 digits max
    int label;
};

#define MAX_HEIGHT 1000
int lprofileg[MAX_HEIGHT];
int rprofileg[MAX_HEIGHT];
#define INFINITY (1 << 20)

//adjust gap between left and right nodes

//used for printing next node in the same level,
//this is the x coordinate of the next char printed
int print_nextg;

asciinodeg *build_ascii_tree_recursiveg(struct searchtreenode *root);
asciinodeg *build_ascii_treeg(struct searchtreenode *root);
void free_ascii_treeg(asciinodeg *node);
void compute_lprofileg(asciinodeg *node, int x, int y);
void compute_rprofileg(asciinodeg *node, int x, int y);
void compute_edge_lengthsg(asciinodeg *node);
void print_levelg(asciinodeg *node, int x, int level);
void print_ascii_treeg(struct searchtreenode *root);

#endif
