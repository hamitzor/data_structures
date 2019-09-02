#ifndef COLLECTION_H
#define COLLECTION_H

#include "../node/node.h"

node *trace_tail(node *root);
void print_collection(node *root);
unsigned int sizeof_collection(node *root);

#endif