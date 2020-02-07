#include <stdio.h>
#include <stdlib.h>
#include "./../common.h"
// #include "./../../../../../common.h"

struct node *doubly_create_linked_list(node *start, int length);
struct node *doublyInsertInBeginning(node *start, int payload);
struct node *doublyInsertAtEnd(node *start, int payload);
struct node *doublyInsertAtPosition(node *start, int index, int payload);
struct node *doublyInsertAfter(node *start, int element, int payload);
struct node *doublyInsertBefore(node *start, int element, int payload);
