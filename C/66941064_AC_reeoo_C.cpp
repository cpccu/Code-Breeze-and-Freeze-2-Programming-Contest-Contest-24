#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> nums(n);
  for (int i = 0; i < n; i++)
    cin >> nums[i];

  bool changed = true;

  while (changed) {
    sort(nums.begin(), nums.end());
    changed = false;
    for (int i = n - 1; i > 0; i--) {
      if (nums[i] > nums[0]) {
        nums[i] -= nums[0];
        changed = true;
      }
    }
  }

  int sum = 0;
  for (int i = 0; i < n; i++)
    sum += nums[i];

  cout << sum << endl;
  return 0;
}