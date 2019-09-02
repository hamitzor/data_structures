#include "node.h"
#include <stdlib.h>

node *create_node(int value)
{
  node *root = (node *)malloc(sizeof(node));
  root->value = value;
  root->next = NULL;
  return root;
}