#include "stack.h"
#include <string.h>

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
