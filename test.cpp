#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printArray(vector<int> arr) {
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void print2DArray(vector<vector<int>> arr) {
  for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr[i].size(); j++)
      cout << arr[i][j] << " ";
    cout << endl;
  }
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

//? Find the number of times a number appears in a given array is unique

//$ Input arr = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4}
//$ Outout - true/1

// ans = [1,2,3,4]

bool uniqueOccurence(vector<int> &arr) {
  vector<int> ans;       //# store the occurence of each number
  int size = arr.size(); // 10
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
    ans.push_back(count); // ans[arr[0]] = count
    i = i + count;
  }

  size = ans.size(); // 4
  sort(ans.begin(), ans.end());

  for (int i = 0; i < size - 1; i++) {
    if (ans[i] == ans[i + 1]) {
      return false;
    }
  }

  return true;
}

//? All duplicates in array

//$ Input arr = [4,3,2,7,2,4,1]
//$ Output - [2, 4]

vector<int> allDuplicates(vector<int> &arr) {
  vector<int> ans;
  int size = arr.size();
  int i = 0;
  sort(arr.begin(), arr.end());

  for (int i = 0; i < size; i++) {
    int count = 1;
    for (int j = i + 1; j < size; j++) {
      if (arr[i] == arr[j])
        count++;
      else
        break;
    }

    if (count == 2)
      ans.push_back(arr[i]);
  }
  return ans;
}

//? Intersection Of Two Sorted Arrays

//$ n = 6, m = 4
//$ Input arr1 = [1,2,2,2,3,4]
//$ Input arr2 = [2,2,3,3]
//$ Output - [2,2,3]

vector<int> intersectionArray(vector<int> arr1, vector<int> arr2) {
  int i = 0, j = 0;
  vector<int> ans;

  while (i < arr1.size() && j < arr2.size()) {
    if (arr1[i] == arr2[j]) {
      ans.push_back(arr1[i]);
      i++;
      j++;
    } else if (arr1[i] < arr2[j])
      i++;
    else
      j++;
  }
  return ans;
}

//? You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.

//$ Input arr = [1, 2, 3, 4, 5]
//$ S = 5

vector<vector<int>> pairSum(vector<int> arr, int sum) {
  vector<vector<int>> ans;
  for (size_t i = 0; i < arr.size() - 1; i++) {
    for (size_t j = i + 1; j < arr.size(); j++) {
      if (sum == arr[i] + arr[j])
        ans.push_back({arr[i], arr[j]});
    }
  }
  return ans;
}

vector<vector<int>> tripletSum(vector<int> arr, int sum) {
  vector<vector<int>> ans;
  for (size_t i = 0; i < arr.size() - 2; i++)
    for (size_t j = i + 1; j < arr.size() - 1; j++)
      for (size_t k = j + 1; k < arr.size(); k++)
        if (sum == arr[i] + arr[j] + arr[k])
          ans.push_back({arr[i], arr[j], arr[k]});
  return ans;
}

int main() {
  // vector<int> arr{4, 3, 2, 7, 2, 4, 1};
  vector<int> arr1{1, 2, 2, 2, 3, 4};
  vector<int> arr2{5, 5, 2, 4, 3, 3, 6};
  // cout << check(arr, 4);
  // swap_alternate(arr, 9);
  // printArray(arr, 9);
  // cout << unique(arr, 9);
  // cout << uniqueOccurence(arr, 10);
  // vector<int> ans = allDuplicates(arr);
  // printArray(ans, ans.size());
  // vector<int> ans = intersectionArray(arr1, arr2);
  // vector<vector<int>> ans = pairSum(arr2, 5);
  vector<vector<int>> ans = tripletSum(arr2, 12);
  print2DArray(ans);
}
