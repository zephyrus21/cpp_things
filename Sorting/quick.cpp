/*
!-----QUICK SORT-----!

$ Quick Sort Algorithim implementation in Array.

* Time Complexity:
# Best Case: Ω(n log(n))
# Average Case: Θ(n log(n))
# Worst Case: O(n^2)

* Space Complexity: O(log(n))

@author [Piyush Pandey](https://github.com/zephyrus21)
*/

#include <bits/stdc++.h>

using namespace std;

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int arr[], int start, int end) {
  int i = start, pivot = arr[end], c;
  for (c = start; c < end; c++) {
    if (arr[c] < pivot) {
      swap(arr[i], arr[c]);
      i++;
    }
  }
  swap(arr[i], arr[c]);
  return i;
}

void quickSort(int arr[], int start, int end) {
  if (start < end) {
    int pi = partition(arr, start, end);
    quickSort(arr, start, pi - 1);
    quickSort(arr, pi + 1, end);
  }
}

int main() {

  int arr[] = {10, 7, 8, 9, 1, 5};
  quickSort(arr, 0, 5);
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}