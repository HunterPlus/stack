#include "stack.h"

void st_push(struct stack *st, char c)
{
  if(st->top == st->size-1) {
    printf("stack is full, could not push!");
    exit(1);
  }
  st->data[++st->top] = c;
}

struct stack *st_create(int size)
{
  struct stack *st;
  st = (struct stack *)malloc(sizeof(struct stack));
  st->size = size;
  st->top = -1;
  st->data = (char *)malloc(size);
  
  return st;
}
char st_pop(struct stack *st)
{
  char c;
  if(st->top == -1) {
    printf("stack is empty, could not pop!");
    exit(1);
  }
  c = st->data[st->top--];
  return c;
}
int st_isEmpty(struct stack *st)
{
  if(st->top == -1)
    return 1;
  return 0;
}
