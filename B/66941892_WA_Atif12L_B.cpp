#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n; cin >> n;
    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        mp[x]++;
    }

    int ans = 0;
    for (auto i: mp) ans = max(ans, i.second);

    cout << ans << '\n';
    

    return 0;
}