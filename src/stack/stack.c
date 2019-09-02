#include "stack.h"
#include "../collection/collection.h"
#include <stdlib.h>

node *create_stack(int value)
{
  return create_node(value);
}

node *push_stack(node *root, int value)
{
  node *new_root = create_node(value);
  new_root->next = root;
  return new_root;
}

node *pop_stack(node *root)
{
  int value = root->value;
  node *new_root = root->next;
  return new_root;
}