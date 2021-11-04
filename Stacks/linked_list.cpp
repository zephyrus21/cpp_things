#include <iostream>

using namespace std;

class Node {
  public:
  int data;
  Node *next;
};

class Stack {
  private:
  Node *top;

  public:
  Stack() {
    top = NULL;
  }
  void push(int data);
  int pop();
  void display();
};

void Stack::push(int data) {
  Node *newNode = new Node();
  if (newNode == NULL)
    cout << "Stack is full" << endl;
  newNode->data = data;
  newNode->next = top;
  top = newNode;
}

int Stack::pop() {
  if (top == NULL) {
    cout << "Stack is empty" << endl;
    return -1;
  }
  int x = top->data;
  Node *temp = top;
  top = top->next;
  delete temp;
  return x;
}

void Stack::display() {
  Node *temp = top;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main() {
  Stack s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);

  s.display();

  cout << s.pop() << " ";
  cout << s.pop() << " ";

  s.display();
  return 0;
}