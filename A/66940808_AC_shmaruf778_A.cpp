#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define endl '\n'
#define loop(i, n) for (int i = 0; i < n; ++i)
#define all(v) (v).begin(), (v).end()

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while (t--) {
        string s, t; cin >> s >> t; 

        int sh = stoi(s.substr(0, 2));
        int sm = stoi(s.substr(3, 2));
        int th = stoi(t.substr(0, 2));
        int tm = stoi(t.substr(3, 2));

        int current = sh * 60 + sm;
        int sleep = th * 60 + tm;

        int bed = current - sleep;
        if (bed < 0) bed += 1440;

        int hh = bed / 60;
        int mm = bed % 60;

        string h = to_string(hh);
        string m = to_string(mm);

        if(h.length() < 2) cout<<'0'<<h;
        else cout<<h;
        cout<<':';
        if(m.length() < 2) cout<<'0'<<m;
        else cout<<m;
        cout<<endl;
        }
    return 0;
}