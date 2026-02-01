#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> v(n);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        ans = __gcd(ans, v[i]);
    }

    cout << ans * n << '\n';

    return 0;
}