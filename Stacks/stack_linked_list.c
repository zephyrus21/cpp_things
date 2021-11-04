#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

void linked_list_traversal(struct Node *ptr) {
  while (ptr != NULL) {
    printf("Data- %d\n", ptr->data);
    ptr = ptr->next;
  }
}

int isEmpty(struct Node *top) {
  if (top == NULL)
    return 1;
  return 0;
}

int isFull(struct Node *top) {
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  if (ptr == NULL) // ! if memory is not allocated dynamically
    return 1;
  return 0;
}

struct Node *push(struct Node *top, int value) {
  if (isFull(top))
    printf("Stack Overflow");
  else {
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = value;
    ptr->next = top;
    top = ptr;
    return top;
  }
}

int pop(struct Node **top) {
  if (isEmpty(*top))
    printf("Empty Stack");
  else {
    struct Node *ptr = *top;
    *top = (*top)->next;
    int x = ptr->data;
    free(ptr);
    return x;
  }
}

int main() {
  struct Node *top = NULL;

  top = push(top, 72);
  top = push(top, 12);
  top = push(top, 242);
  linked_list_traversal(top);
  printf("%d\n", pop(&top));
  printf("%d\n", pop(&top));
  linked_list_traversal(top);

  return 0;
}