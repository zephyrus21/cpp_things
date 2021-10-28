/* 
!-----COUNTING SORT-----!

$ Counting Sort Algorithim implementation in Array.

* Time Complexity:
# Best Case: Ω(n + k)
# Average Case: Θ(n + k)
# Worst Case: O(n + k)

* Space Complexity: O(k)

? This is not a prefferd sorting algorithim for large data sets.

@author [Piyush Pandey](https://github.com/zephyrus21)
 */

#include <bits/stdc++.h>

using namespace std;

void counting_sort(int arr[], int n, int max) {
  int count[50] = {0};
  for (int i = 0; i <= n; ++i)
    count[arr[i]]++;

  for (int i = 0; i <= max; ++i)
    for (int j = 1; j <= count[i]; ++j)
      cout << i << " ";
}

int main() {
  int arr[] = {4, 25, 24, 14, 9, 6, 1, 47, 3, 8};
  int n = sizeof(arr) / sizeof(arr[0]);

  counting_sort(arr, n, 47);

  return 0;
}