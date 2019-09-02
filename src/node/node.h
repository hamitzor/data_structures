#ifndef NODE_H
#define NODE_H

struct node
{
  int value;
  struct node *next;
};

typedef struct node node;

node *create_node(int value);

#endif
