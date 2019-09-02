#include "util.h"
#include <string.h>
#include <stdlib.h>

char *info_message(char *message)
{
  const char *header = "\033[0;34m[INFO] ";
  const char *tail = "\033[0m\n";
  char *new_message = (char *)malloc(sizeof(char) * (strlen(header) + strlen(message) + strlen(tail)));
  strcpy(new_message, header);
  strcat(new_message, message);
  strcat(new_message, tail);
  return new_message;
}
char *error_message(char *message)
{
  const char *header = "\033[0;31m[ERROR] ";
  const char *tail = "\033[0m\n";
  char *new_message = (char *)malloc(sizeof(char) * (strlen(header) + strlen(message) + strlen(tail)));
  strcpy(new_message, header);
  strcat(new_message, message);
  strcat(new_message, tail);
  return new_message;
}
char *success_message(char *message)
{
  const char *header = "\033[0;32m[SUCCESS] ";
  const char *tail = "\033[0m\n";
  char *new_message = (char *)malloc(sizeof(char) * (strlen(header) + strlen(message) + strlen(tail)));
  strcpy(new_message, header);
  strcat(new_message, message);
  strcat(new_message, tail);
  return new_message;
}