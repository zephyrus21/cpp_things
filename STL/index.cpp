#include <iostream>
#include <set>

using namespace std;

int main() {
  set<int> s = {2, 9, 3, 1, 4, 5};
  for (auto i : s)
    cout << i << endl;
}