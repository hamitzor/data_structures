#include <stdio.h>
#include "collection.h"
#include "../node/node.h"

node *trace_tail(node *root)
{
  node *iter = root;
  while (iter->next != NULL)
  {
    iter = iter->next;
  }
  return iter;
}

void print_collection(node *root)
{
  if (root != NULL)
  {
    node *iter = root;
    printf("{%d}", iter->value);
    while (iter->next != NULL)
    {
      iter = iter->next;
      printf("->{%d}", iter->value);
    }
    printf("\n");
  }
  else
  {
    printf("NULL\n");
  }
}

unsigned int sizeof_collection(node *root)
{
  unsigned int size = 1;
  node *iter = root;
  while (iter->next != NULL)
  {
    iter = iter->next;
    size = size + 1;
  }
  return size;
}