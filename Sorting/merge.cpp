/*
!-----MERGE SORT-----!

$ Merge Sort Algorithim implementation in Array.

* Time Complexity:
# Best Case: Ω(n log(n))
# Average Case: Θ(n log(n))
# Worst Case: O(n log(n))

* Space Complexity: O(n)

@author [Piyush Pandey](https://github.com/zephyrus21)
*/

#include <bits/stdc++.h>

using namespace std;

void merge(int arr[], int l, int m, int r) {
  int i, j, k;
  int l_size = m - l + 1, r_size = r - m;
  int l_arr[l_size], r_arr[r_size];

  //& fill left and right array
  for (i = 0; i < l_size; ++i)
    l_arr[i] = arr[l + i];
  for (j = 0; j < r_size; ++j)
    r_arr[j] = arr[m + 1 + j];

  i = 0;
  j = 0;
  k = l;

  //& compare and merge the arrays in the main array
  while (i < l_size && j < r_size) {
    if (l_arr[i] <= r_arr[j]) {
      arr[k] = l_arr[i];
      i++;
    } else {
      arr[k] = r_arr[j];
      j++;
    }
    k++;
  }

  //& fill the remaining elements in the main array
  while (i < l_size) {
    arr[k] = l_arr[i];
    i++;
    k++;
  }
  while (j < r_size) {
    arr[k] = r_arr[j];
    j++;
    k++;
  }
}

void merge_sort(int arr[], int l, int r) {
  if (l < r) {
    int m = l + (r - l) / 2;
    merge_sort(arr, l, m);
    merge_sort(arr, m + 1, r);
    merge(arr, l, m, r);
  }
}

int main() {
  int arr[] = {12, 11, 13, 5, 6, 7};
  int arr_size = sizeof(arr) / sizeof(arr[0]);

  merge_sort(arr, 0, arr_size - 1);

  for (int i = 0; i < arr_size; i++)
    cout << arr[i] << " ";

  return 0;
}