#include<bits/stdc++.h>
using namespace std;

#define int long long int

void solve()
{
    string s, ss;
    cin >> s >> ss;
    int h1 = ((s[0] - '0') * 10) + (s[1] - '0');
    int h2 = ((ss[0] - '0') * 10) + (ss[1] - '0');
    int m1 = ((s[3] - '0') * 10) + (s[4] - '0');
    int m2 = ((ss[3] - '0') * 10) + (ss[4] - '0');
    int hh = h1 - h2;
    int mm = m1 - m2;

    if(hh < 0){
        hh += 24;
    }
    if(mm < 0){
        mm += 60;
        hh--;
    }
    cout << setw(2) << setfill('0') << hh << ':' << setw(2) << setfill('0') << mm << '\n';
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
