#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    string s, t; cin >> s >> t;
    int s_min = ((s[0] - '0') * 10 + (s[1] - '0')) * 60 + ((s[3] - '0') * 10 + (s[4] - '0'));
    int t_min = ((t[0] - '0') * 10 + (t[1] - '0')) * 60 + ((t[3] - '0') * 10 + (t[4] - '0'));

    if (s_min > t_min) {
        int dif = s_min - t_min;
        int hh = dif / 60;
        int mm = dif % 60;
        if (hh < 10) {
            cout << 0 << hh << ":";
        } else cout << hh << ":";

        if (mm < 10) cout << 0 << mm;
        else cout << mm;

    } else if (t_min > s_min) {
        int dif = (24 * 60) - (t_min - s_min);
        int hh = dif / 60;
        int mm = dif % 60;
        if (hh < 10) {
            cout << 0 << hh << ":";
        } else cout << hh << ":";

        if (mm < 10) cout << 0 << mm;
        else cout << mm;
        
    } else {
        cout << "00:00" << '\n';
    }

    return 0;
}