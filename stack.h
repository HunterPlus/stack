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