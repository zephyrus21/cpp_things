#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

string check(int *arr, int n) {
  int sum = 0;
  for (int i = 0; i < n - 1; i++)
    sum += arr[i] + arr[i + 1];
  if (!sum)
    return "YES";
  else
    return "NO";
}

void swap_alternate(int *arr, int n) {
  for (int i = 0; i < n - 1; i += 2)
    swap(arr[i], arr[i + 1]);
}

int unique(int *arr, int n) {
  int count = 0;
  for (int i = 0; i < n; i++)
    count ^= arr[i];
  return count;
}

//? Find tis number of times a number appears in a given array is unique

//$ Input arr = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4}
//$ Outout - true/1

bool uniqueOccurence(vector<int> &arr, int n) {
  vector<int> ans;
  int size = arr.size();
  int i = 0;
  sort(arr.begin(), arr.end());

  while (i < size) {
    int count = 1;
    for (int j = i + 1; j < size; j++) {
      if (arr[i] == arr[j])
        count++;
      else
        break;
    }
    ans.push_back(count);
    i = i + count;
  }

  size = ans.size();
  sort(ans.begin(), ans.end());

  for (int i = 0; i < size - 1; i++) {
    if (ans[i] == ans[i + 1]) {
      return false;
    }
  }

  return true;
}

int main() {
  vector<int> arr{1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
  // cout << check(arr, 4);
  // swap_alternate(arr, 9);
  // printArray(arr, 9);
  // cout << unique(arr, 9);
  cout << uniqueOccurence(arr, 10);
}