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

        vector<int> tmp1;
        vector<int> tmp2;
        vector<int> tmp3;

        loop(i, n){
            if(arr[i]==1) tmp1.push_back(i+1);
            else if(arr[i]==2) tmp2.push_back(i+1);
            else tmp3.push_back(i+1);
        }

        vector<vector<int>> v;

        int size= min(tmp1.size(), min(tmp2.size(), tmp3.size()));
        cout<<size<<endl;
        for(int i=0;i<size;i++){
            cout<<tmp1[i]<<" "<<tmp2[i]<<" "<<tmp3[i]<<endl;
        }
        
    
    }
    return 0;
}