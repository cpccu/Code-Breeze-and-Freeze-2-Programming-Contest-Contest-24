#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  sort(a.begin(), a.end());

  int count = 0;

  while (true) {
    int curr = 0;
    bool done = false;

    for (int i = 0; i < n; i++) {
      if (a[i] != -1 && a[i] >= curr) {
        a[i] = -1;
        curr++;
        done = true;
      }
    }

    if (!done)
      break;
    count++;
  }

  cout << count << endl;

  return 0;
}