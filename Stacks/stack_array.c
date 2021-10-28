#include <stdio.h>
#include <stdlib.h>

struct stack
{
  int size;
  int top;
  int *arr;
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

void push(struct stack *ptr, int value)
{
  if (isFull(ptr))
    printf("Stack Overflow\n");
  else
  {
    ptr->top++;
    ptr->arr[ptr->top] = value;
  }
}

int pop(struct stack *ptr)
{
  if (isEmpty(ptr))
  {
    printf("Stack Underflow\n");
    return -1;
  }
  else
  {
    int value = ptr->arr[ptr->top];
    ptr->top--;
    return value;
  }
}

int peek(struct stack *ptr, int i)
{
  int pos = ptr->top - i + 1;
  if (pos < 0 || pos > ptr->top)
    return -1;
  return ptr->arr[pos];
}

int main()
{
  struct stack *s = (struct stack *)malloc(sizeof(struct stack));
  s->size = 9;
  s->top = -1;
  s->arr = (int *)malloc(s->size * sizeof(int));

  // printf("%d\n", isEmpty(s));
  // printf("%d\n", isFull(s));
  // push(s, 5);
  // push(s, 51);
  // push(s, 24);
  // push(s, 35);
  // push(s, 85);
  // printf("%d\n", isEmpty(s));
  // printf("%d\n", isFull(s));
  // printf("%d\n", peek(s, 1));
  // printf("%d\n", pop(s));
  // printf("%d\n", pop(s));
  // printf("%d\n", pop(s));

  return 0;
}