#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort (v.begin(), v.end());

    int dif = INT_MAX;
    for (int i = 0; i < n - 1; i++) {
        dif = min(dif, v[i + 1] - v[i]);
    }

    cout << dif * n << '\n';

    return 0;
}