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
        int n; cin>>n;
        vector<int> arr(n);
        loop(i, n) cin>>arr[i];

        int g=arr[0];
        loop(i, n) {
            g=__gcd(g,arr[i]);
        }
        cout<<g*n<<endl;
    }
    return 0;
}