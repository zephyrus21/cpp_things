#include <iostream>

using namespace std;

int linear_search(int arr[], int size, int element) {
  for (int i = 0; i < size; i++)
    if (arr[i] == element)
      return i;
  return -1;
}

int binary_search(int arr[], int size, int element) {
  int low = 0, mid = 0, high = size - 1;

  while (low <= high) {
    mid = (low + high) / 2;
    if (arr[mid] == element)
      return mid;
    else if (arr[mid] < element)
      low = mid + 1;
    else if (arr[mid] > element)
      high = mid - 1;
  }
  return -1;
}

int main() {
  int arr[] = {0, 3, 9, 26, 294, 1879};
  int size = sizeof(arr) / sizeof(int);

  int index1 = linear_search(arr, size, 294);
  cout << index1 << " ";

  int index2 = binary_search(arr, size, 26);
  cout << index2 << " ";

  return 0;
}