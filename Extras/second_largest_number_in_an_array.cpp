#include <iostream>

using namespace std;

int secondLargestNumberInAArray(int arr[], int size) {
  int largest = 0, secondLargest = -1;
  for (int i = 1; i < size; i++)
    if (arr[i] > arr[largest]) {
      secondLargest = largest;
      largest = i;
    } else if (arr[i] != arr[largest])
      if (secondLargest == -1 || arr[i] > arr[secondLargest])
        secondLargest = i;
  return secondLargest;
}

int main() {
  int arr[] = {12, 43, 5, 56, 264, 26, 165};
  int index = secondLargestNumberInAArray(arr, 7);
  cout << "Second Largest number is at index: " << index;
  return 0;
}