#include <stdio.h>
#include <stdlib.h>
#include "../src/node/node.h"
#include "../src/util/util.h"

int main()
{
  node *root = create_node(10);

  if (root->value == 10)
  {
    printf(success_message("expected value to equal to 10"));
  }
  else
  {
    printf(error_message("expected value to equal to 10 but got %d"), root->value);
  }

  if (root->next == NULL)
  {
    printf(success_message("expected next to point to NULL"));
  }
  else
  {
    printf(error_message("expected next to point to NULL but points to %p"), root->next);
  }

  return 0;
}