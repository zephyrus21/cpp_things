#include <iostream>

using namespace std;

class Queue {
  private:
  int data;
  Queue *next;
  Queue *front;
  Queue *rear;

  public:
  Queue() {
    front = NULL;
    rear = NULL;
  }
  void enqueue(int data);
  int dequeue();
  void display();
};

void Queue::enqueue(int data) {
  Queue *temp = new Queue();

  if (temp == NULL) {
    cout << "Queue is full" << endl;
    return;
  }

  temp->data = data;
  temp->next = NULL;
  if (front == NULL)
    front = rear = temp;
  else {
    rear->next = temp;
    rear = temp;
  }
}

int Queue::dequeue() {
  if (front == NULL) {
    cout << "Queue is empty" << endl;
    return -1;
  }
  int x = front->data;
  Queue *temp = front;
  front = front->next;
  delete temp;
  return x;
}

void Queue::display() {
  Queue *temp = front;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main() {
  Queue *q = new Queue();
  q->enqueue(10);
  q->enqueue(20);
  q->enqueue(30);
  q->enqueue(40);
  q->display();
  cout << q->dequeue() << endl;
  q->display();
  return 0;
}