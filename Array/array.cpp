#include <iostream>

using namespace std;

template <class T>

class Array
{
private:
  T *A;
  int size;
  int length;

public:
  Array()
  {
    size = 10;
    A = new T[size];
    length = 0;
  }
  Array(int s)
  {
    size = s;
    length = 0;
    A = new T[size];
  }
  ~Array()
  {
    delete[] A;
  }
  void Display();
  void Insert(int index, T x);
  T Delete(int index);
};

template <class T>
void Array<T>::Display()
{
  for (int i = 0; i < length; i++)
    cout << A[i] << " ";
  cout << endl;
}

template <class T>
void Array<T>::Insert(int index, T x)
{
  if (index >= 0 && index <= length)
  {
    for (int i = length - 1; i >= index; i--)
      A[i + 1] = A[i];
    A[index] = x;
    length++;
  }
}

template <class T>
T Array<T>::Delete(int index)
{
  T x = 0;
  if (index >= 0 && index < length)
  {
    x = A[index];
    for (int i = index; i < length - 1; i++)
      A[i] = A[i + 1];
    length--;
  }
  return x;
}

int main()
{
  Array<int> arr(10);
  arr.Insert(0, 5);
  arr.Insert(1, 4);
  arr.Insert(2, 3);
  arr.Display();
  cout << arr.Delete(0) << endl;
  arr.Display();

  return 0;
}
