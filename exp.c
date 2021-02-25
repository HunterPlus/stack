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
int st_isEmpty(struct stack *st)
{
  if(st->top == -1)
    return 1;
  return 0;
}

int isMatch(struct stack *st, char *exp){
  
  int i;
  for(i = 0; exp[i] != '\0'; i++){
    if(exp[i] == '(')
      st_push(st, exp[i]);
    if(exp[i] == ')'){
      if(st->isEmpty(st))
        return 0;
      st_pop(st);
    }
    if(!st->isEmpty(st))
      return 0;
    return 1;
}
  
int main() {
  char *exp = "(abc(bc)))";
  struct stack *st = st_create(strlen(exp));
  int isMatch = isMatch(struct stack *st, char *exp); 
  printf("....");  
  
  return 0;
}
