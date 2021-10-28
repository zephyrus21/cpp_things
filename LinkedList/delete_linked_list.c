#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

void display(struct Node *ptr)
{
  while (ptr != NULL)
  {
    printf("Data- %d\n", ptr->data);
    ptr = ptr->next;
  }
}

void push(struct Node **head, int data)
{
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

  ptr->data = data;
  ptr->next = *head;
  *head = ptr;
}

void delete_linked_list(struct Node **head)
{
  struct Node *p = *head;
  struct Node *q;

  while (p != NULL)
  {
    q = p->next;
    free(p);
    p = q;
  }

  *head = NULL;
}

int main()
{
  struct Node *head = NULL;

  push(&head, 1);
  push(&head, 4);
  push(&head, 1);
  push(&head, 12);
  push(&head, 1);

  display(head);

  delete_linked_list(&head);
  display(head);

  return 0;
}