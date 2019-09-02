#ifndef STACK_H
#define STACK_H

#include "../node/node.h"

node *create_stack(int value);
node *push_stack(node *root, int value);
node *pop_stack(node *root);

#endif