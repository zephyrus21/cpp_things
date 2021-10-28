/* 
!-----BUBBLE SORT-----!

$ Bubble Sort Algorithim implementation in Array.

* Time Complexity:
# Best Case: O(n)
# Average Case: O(n^2)
# Worst Case: O(n^2)

* Space Complexity: O(1)

@author [Piyush Pandey](https://github.com/zephyrus21)
 */

#include <bits/stdc++.h>

using namespace std;

void bubble_sort(int arr[], int n) {
  bool flag;
  for (int i = 0; i < n - 1; i++) {
    flag = false; //& flag is used to check if any swap is done in this iteration
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) { //& swap the elements if the current element is greater than the next element
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        flag = true;
      }
    }
    if (!flag)
      return;
  }
}

int main() {
  int arr[] = {64, 25, 92, 23, 11};
  bubble_sort(arr, 5);

  for (int i = 0; i < 5; i++)
    cout << arr[i] << " ";

  return 0;
}