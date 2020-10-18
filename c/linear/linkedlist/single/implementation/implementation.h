#include <stdio.h>
#include <stdlib.h>
#include "./../common.h"

struct node *create_linked_list(node *start, int length);
struct node *insertInBeginning(node *start, int payload);
struct node *insertAtEnd(node *start, int payload);
struct node *insertAtPosition(node *start, int index, int payload);
struct node *insertAfter(node *start, int element, int payload);
struct node *insertBefore(node *start, int element, int payload);
