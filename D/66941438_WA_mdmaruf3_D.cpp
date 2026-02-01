#include<bits/stdc++.h>
using namespace std;

#define int long long int

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n), a, b, c;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] == 1){
            a.push_back(v[i]);
        }
        else if(v[i] == 2){
            b.push_back(v[i]);
        }
        else if(v[i] == 3){
            c.push_back(v[i]);
        }
    }
    int k = min(a.size(), min(b.size(), c.size())); 
    cout << k << '\n';
    for(int i = 0; i < k; i++){
        cout << b[i] << ' ' << a[i] << ' ' << c[i] << '\n';
    }
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
