#include <stdio.h>
#include <stdlib.h>

struct stack
{
  int size;
  int top;
  char *arr;
};

int isFull(struct stack *ptr)
{
  if (ptr->top == ptr->size - 1)
    return 1;
  return 0;
}

int isEmpty(struct stack *ptr)
{
  if (ptr->top == -1)
    return 1;
  return 0;
}

void push(struct stack *ptr, char value)
{
  if (isFull(ptr))
    printf("Stack Overflow\n");
  else
  {
    ptr->top++;
    ptr->arr[ptr->top] = value;
  }
}

char pop(struct stack *ptr)
{
  if (isEmpty(ptr))
  {
    printf("Stack Underflow\n");
    return -1;
  }
  else
  {
    char value = ptr->arr[ptr->top];
    ptr->top--;
    return value;
  }
}

int match(char a, char b)
{
  if (a == '(' && b == ')')
    return 1;
  if (a == '{' && b == '}')
    return 1;
  if (a == '[' && b == ']')
    return 1;
  return 0;
}

int parenthesis_match(char *exp)
{
  struct stack *sp;
  sp->size = 100;
  sp->top = -1;
  sp->arr = (char *)malloc(sp->size * sizeof(char));

  char value;

  for (int i = 0; exp[i] != '\0'; i++)
  {
    if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
      push(sp, exp[i]);
    else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
    {
      if (isEmpty(sp))
        return 0;
      value = pop(sp);
      if (!match(value, exp[i]))
        return 0;
    }
  }

  if (isEmpty(sp))
    return 1;
  return 0;
}

int main()
{
  char *exp = "[8]+{6*(9+1)}";
  if (parenthesis_match(exp))
    printf("Matched\n");
  else
    printf("Not Matched\n");

  return 0;
}