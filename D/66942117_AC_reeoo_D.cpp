#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n + 1);
  for (int i = 1; i <= n; i++)
    cin >> a[i];

  vector<vector<int>> teams;

  while (true) {
    int p = -1, m = -1, s = -1;

    for (int i = 1; i <= n; i++) {
      if (a[i] == 1 && p == -1)
        p = i;
      if (a[i] == 2 && m == -1)
        m = i;
      if (a[i] == 3 && s == -1)
        s = i;
    }

    if (p == -1 || m == -1 || s == -1)
      break;

    a[p] = a[m] = a[s] = -1;
    teams.push_back({p, m, s});
  }

  cout << teams.size() << endl;
  for (int i = 0; i < teams.size(); i++) {
    for (int j = 0; j < 3; j++) {
      cout << teams[i][j];
      if (j != 3)
        cout << " ";
    }
    cout << endl;
  }

  return 0;
}