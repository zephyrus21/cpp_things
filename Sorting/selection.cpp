/* 
!-----SELECTION SORT-----!

$ Selection Sort Algorithim implementation in Array.

* Time Complexity:
# Best Case: O(n^2)
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

void selection_sort(int arr[], int n) {
  for (int i = 0; i < n - 1; ++i) {
    int min_idx = i; //& this will store the index of minimum element
    for (int j = i + 1; j < n; ++j)
      if (arr[j] < arr[min_idx]) //& if current element is less than the minimum element then update the minimum element index
        min_idx = j;
    swap(&arr[min_idx], &arr[i]);
  }
}

int main() {
  int arr[] = {64, 25, 12, 22, 11};
  selection_sort(arr, 5);

  for (int i = 0; i < 5; ++i)
    cout << arr[i] << " ";

  return 0;
}