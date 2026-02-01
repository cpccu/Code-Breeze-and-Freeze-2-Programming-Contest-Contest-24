#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> m, p, pe;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        if (x == 1) p.push_back(i);
        else if (x == 2) m.push_back(i);
        else pe.push_back(i);
    }

    int ans = min({p.size(), m.size(), pe.size()});
    cout << ans << '\n';
    for (int i = 0; i < ans; i++) {
        cout << p[i] << ' ' << m[i] << ' ' << pe[i] << '\n';
    }

    return 0;
}