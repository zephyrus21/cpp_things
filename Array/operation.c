#include <stdio.h>

void display(int arr[], int n) {
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
}

int sortedInsertion(int arr[], int size, int element, int capacity, int index) {
  if (size >= capacity)
    return -1;
  for (int i = size - 1; i >= index; i--)
    arr[i + 1] = arr[i];
  arr[index] = element;
  return 1;
}

int deletion(int arr[], int size, int index) {
  for (int i = index; i < size - 1; i++)
    arr[i] = arr[i + 1];
  return 1;
}

int main() {
  int arr[100] = {0, 1, 2, 3}, size = 4, element = 22, index = 2;
  sortedInsertion(arr, size, element, 100, index);
  size += 1;
  display(arr, size);
  deletion(arr, size, index);
  size -= 1;
  display(arr, size);

  return 0;
}