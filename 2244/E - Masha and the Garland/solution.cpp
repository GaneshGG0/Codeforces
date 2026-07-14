#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        s = " " + s; // 1-index
        vector<int> mis(n + 1), misS(n + 1);
        vector<int> st0(n + 1), st1(n + 1);
        vector<int> pre(n + 1), pre1(n + 1);
        for (int i = 1; i <= n; i++) {
            char c0 = (i % 2 ? '0' : '1');
            char c1 = (i % 2 ? '1' : '0');
            mis[i] = (s[i] != c0);
            misS[i] = (s[i] != c1);
        }
        for (int i = 1; i <= n; i++) {
            st0[i] = mis[i] && (i == 1 || !mis[i - 1]);
            st1[i] = misS[i] && (i == 1 || !misS[i - 1]);
 
            pre[i] = pre[i - 1] + st0[i];
            pre1[i] = pre1[i - 1] + st1[i];
        }
        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;
            int b0 = pre[r] - pre[l - 1];
            if (mis[l] && l > 1 && mis[l - 1]) b0++;
            int b1 = pre1[r] - pre1[l - 1];
            if (misS[l] && l > 1 && misS[l - 1]) b1++;
            cout << (min(b0, b1) <= k ? "YES" : "NO") << '
';
        }
    }
    return 0;
}