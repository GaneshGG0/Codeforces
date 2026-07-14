#include <bits/stdc++.h>
using namespace std;
 
using int64 = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<int64> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        vector<int> al(n + 1, 0);
        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            al[x] = 1;}
        int64 dp[2] = {0, 0};
        for (int i = 1; i <= n; i++) {
            int64 ndp[2];
            if (al[i]) {
                int64 keep = dp[0] + a[i];
                int64 flip = dp[1] - a[i];
                int64 best = max(keep, flip);
                ndp[0] = ndp[1] = best;
            } else {
                ndp[0] = dp[0] + a[i];
                ndp[1] = dp[1] - a[i];
            }
            dp[0] = ndp[0];
            dp[1] = ndp[1];
        }
        cout << dp[0] << "
";
    }
    return 0;
}