#include <iostream>

using namespace std;

class Node {
  public:
  int data;
  Node *next;
};

class LinkedList {
  private:
  Node *head;

  public:
  LinkedList() {
    head = NULL;
  }
  ~LinkedList();

  void Print();
  void Insert(int index, int n);
  void Delete(int index);
};

void LinkedList::Print() {
  Node *temp = head;
  while (temp) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

void LinkedList::Insert(int index, int n) {
  Node *new_node = new Node;
  new_node->data = n;
  new_node->next = NULL;
  if (index == 0) {
    new_node->next = head;
    head = new_node;
    return;
  }
  Node *temp = head;
  for (int i = 0; i < index - 1; i++)
    temp = temp->next;
  new_node->next = temp->next;
  temp->next = new_node;
}

void LinkedList::Delete(int index) {
  Node *temp = head;
  if (index == 0) {
    head = temp->next;
    delete temp;
    return;
  }
  for (int i = 0; i < index - 1; i++)
    temp = temp->next;
  Node *temp2 = temp->next;
  temp->next = temp2->next;
  delete temp2;
}

LinkedList::~LinkedList() {
  Node *temp = head;
  while (head != NULL) {
    head = head->next;
    delete temp;
    temp = head;
  }
}

int main() {
  LinkedList l;
  l.Insert(0, 1);
  l.Insert(1, 2);
  l.Insert(2, 3);
  l.Insert(3, 4);
  l.Insert(4, 5);
  l.Print();
  l.Delete(2);
  l.Print();
  return 0;
}