#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

struct Node *insert_after_node(struct Node *head, struct Node *prevNode, int data) {
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node)); //! to create a new node
  struct Node *p = head;                                         //! set the head to a new node

  ptr->data = data;
  ptr->next = prevNode->next;
  prevNode->next = ptr;

  return head;
}

struct Node *delete_first(struct Node *head) {
  struct Node *ptr = head;
  head = head->next;
  free(ptr);

  return head;
}

struct Node *delete_at_index(struct Node *head, int index) {
  struct Node *p = head;
  struct Node *q = head->next;

  for (int i = 0; i < index - 1; i++) {
    p = p->next;
    q = q->next;
  }

  p->next = q->next;
  free(q);

  return head;
}

struct Node *delete_last(struct Node *head) {
  struct Node *p = head;
  struct Node *q = head->next;

  while (q->next != NULL) {
    p = p->next;
    q = q->next;
  }

  p->next = NULL;
  free(q);

  return head;
}

struct Node *delete_with_value(struct Node *head, int value) {
  struct Node *p = head;
  struct Node *q = head->next;

  while (q->data != value || q->next != NULL) {
    p = p->next;
    q = q->next;
  }

  if (q->data == value) {
    p->next = q->next;
    free(q);
  }

  return head;
}

int main() {
  struct Node *head;
  struct Node *second;
  struct Node *third;

  //* Allocated memory in heap
  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));

  head->data = 7;
  head->next = second;

  second->data = 17;
  second->next = third;

  third->data = 27;
  third->next = NULL;

  // head = insert_at_first(head, 56);
  // head = insert_at_index(head, 56, 2);
  // head = insert_at_last(head, 56);
  // head = insert_after_node(head, third, 56);
  // linked_list_traversal(head);

  // head = delete_first(head);
  // head = delete_at_index(head, 2);
  // head = delete_last(head);
  // head = delete_with_value(head, 17);
  // linked_list_traversal(head);

  return 0;
}
