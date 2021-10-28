#include <iostream>

using namespace std;

int largestNumberInAArray(int arr[], int size)
{
  int largest = 0;
  for (int i = 1; i < size; i++)
    if (arr[i] > arr[largest])
      largest = i;
  return largest;
}

int main()
{
  int arr[] = {12, 43, 5, 56, 64, 26, 163};
  int index = largestNumberInAArray(arr, 7);
  cout << "Largest number is at index: " << index;
  return 0;
}