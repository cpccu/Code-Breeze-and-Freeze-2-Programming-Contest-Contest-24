#include <iostream>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  string h1 = s.substr(0, 2);
  string m1 = s.substr(3, 2);

  string h2 = t.substr(0, 2);
  string m2 = t.substr(3, 2);

  int ht1 = (h1[0] - '0') * 10 + (h1[1] - '0');
  int mt1 = (m1[0] - '0') * 10 + (m1[1] - '0');

  int ht2 = (h2[0] - '0') * 10 + (h2[1] - '0');
  int mt2 = (m2[0] - '0') * 10 + (m2[1] - '0');

  int time1 = ht1 * 60 + mt1;
  int time2 = ht2 * 60 + mt2;

  int ans = time1 - time2;
  if (ans < 0)
    ans += 24 * 60;

  int bh = ans / 60;
  int bm = ans % 60;

  if (bh < 10)
    cout << '0';
  cout << bh << ':';
  if (bm < 10)
    cout << '0';
  cout << bm << endl;

  return 0;
}
