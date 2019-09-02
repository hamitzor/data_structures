#include <stdio.h>
#include <stdlib.h>
#include "../src/collection/collection.h"
#include "../src/util/util.h"

int main()
{
  node *root = create_node(12);
  root->next = create_node(32);
  root->next->next = create_node(51);
  root->next->next->next = create_node(13);

  printf("Collection : ");
  print_collection(root);
  if ((trace_tail(root))->value == 13 && (trace_tail(root))->next == NULL)
  {
    printf(success_message("expect tail value to equal 13 and tail next point to NULL"));
  }
  else
  {
    printf(error_message("expect tail value to equal 13 and tail next point to NULL"));
  }

  if (sizeof_collection(root) == 4)
  {
    printf(success_message("expect collection size to equal 4"));
  }
  else
  {
    printf(error_message("expect collection size to equal 4 but got %d"), sizeof_collection(root));
  }

  return 0;
}