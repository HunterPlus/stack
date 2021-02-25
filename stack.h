#include <stdio.h>
#include <stdlib.h>

struct stack {
  int size;
  int top;
  char *data;
};
struct stack *st_create(int size);
void st_push(struct stack *st, char c);
char st_pop(struct stack *st);

