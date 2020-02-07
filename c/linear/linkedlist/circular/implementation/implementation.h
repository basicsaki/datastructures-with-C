#include <stdio.h>
#include <stdlib.h>
#include "./../common.h"
// #include "./../../../../../common.h"

struct node *circular_create_linked_list(node *start, int length);
struct node *circularInsertInBeginning(node *start, int payload);
struct node *circularInsertAtEnd(node *start, int payload);
struct node *circularInsertAtPosition(node *start, int index, int payload);
struct node *circularInsertAfter(node *start, int element, int payload);
struct node *circularInsertBefore(node *start, int element, int payload);
