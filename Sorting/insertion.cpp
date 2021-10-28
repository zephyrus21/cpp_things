/* 
!-----INSERTION SORT-----!

$ Insertion Sort Algorithim implementation in Array.

* Time Complexity:
# Best Case: O(n)
# Average Case: O(n^2)
# Worst Case: O(n^2)

* Space Complexity: O(1)

@author [Piyush Pandey](https://github.com/zephyrus21)
 */

#include <bits/stdc++.h>

using namespace std;

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void insertion_sort(int arr[], int n) {
  for (int i = 0; i < n - 1; ++i) {
    int j = i + 1;
    while (j > 0 && arr[j - 1] > arr[j]) {
      swap(&arr[j - 1], &arr[j]);
      j--;
    }
  }
}

int main() {
  int arr[] = {64, 25, 12, 22, 11};
  insertion_sort(arr, 5);

  for (int i = 0; i < 5; ++i)
    cout << arr[i] << " ";

  return 0;
}