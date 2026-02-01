#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    int len = 0;
    for (int i = 0; i < n; i++) {
        int j = i;
        int l = 0;
        while ((j + 1 < n) and (v[j + 1] == v[j])) {
            l++;
            j++;
        }
        len = max(len, l);
        if (j > i) i = j - 1;
    }

    cout << len + 1 << '\n';

    return 0;
}