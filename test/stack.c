#include <stdio.h>
#include <stdlib.h>
#include "../src/stack/stack.h"
#include "../src/collection/collection.h"
#include "../src/util/util.h"

int main()
{
  node *stack = create_stack(1);
  print_collection(stack);
  stack = push_stack(stack, 2);
  print_collection(stack);
  stack = push_stack(stack, 3);
  print_collection(stack);
  stack = push_stack(stack, 4);
  print_collection(stack);
  stack = pop_stack(stack);
  print_collection(stack);
  stack = pop_stack(stack);
  print_collection(stack);
  stack = pop_stack(stack);
  print_collection(stack);
  stack = pop_stack(stack);
  print_collection(stack);
  return 0;
}