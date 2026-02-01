#include<bits/stdc++.h>
using namespace std;

#define int long long int

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int ans = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        ans = __gcd(ans, v[i]);
    }
    cout << ans * n << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //int T;
    //cin >> T;
    //while(T--){
        solve();
    //}
    return 0;
}
