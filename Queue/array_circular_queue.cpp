#include <iostream>

using namespace std;

class Queue {
  private:
  int front;
  int rear;
  int size;
  int *arr;

  public:
  Queue() {
    front = rear = -1;
    size = 10;
    arr = new int[size];
  }
  Queue(int size) {
    front = rear = -1;
    this->size = size;
    arr = new int[this->size];
  }
  void enqueue(int data);
  int dqueue();
  void display();
};

void Queue::enqueue(int data) {
  if ((rear + 1) % size == front) {
    cout << "Queue is full" << endl;
    return;
  }
  if (front == -1) {
    front = 0;
  }
  rear = (rear + 1) % size;
  arr[rear] = data;
}

int Queue::dqueue() {
  if (front == rear) {
    cout << "Queue is empty" << endl;
    return -1;
  }
  int x = arr[front];
  front = (front + 1) % size;
  return x;
}

void Queue::display() {
  int i = front;
  if (front == -1) {
    cout << "Queue is empty" << endl;
    return;
  }
  do {
    cout << arr[i] << " ";
    i = (i + 1) % size;
  } while (i != (rear + 1) % size);

  cout << endl;
}

int main() {
  Queue q;
  q.enqueue(10);
  q.enqueue(20);
  q.enqueue(30);
  q.enqueue(40);
  q.enqueue(50);
  q.display();
  cout << q.dqueue() << endl;
  q.display();
  return 0;
}