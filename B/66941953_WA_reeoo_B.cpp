#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  int max = 1;
  int count = 1;
  for (int i = 0; i < n - 1; i++) {
    if (a[i] == a[i + 1]) {
      count++;
    }
    if (a[i] != a[i + 1]) {
      if (count > max)
        max = count;
      count = 1;
    }
  }

  if (count > max)
    max = count;

  cout << max << endl;

  return 0;
}