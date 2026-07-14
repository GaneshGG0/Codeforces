#include <bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<vector<int>> ch(n + 1);
        for (int i = 2; i <= n; i++) {
            int p;
            cin >> p;
            ch[p].push_back(i);
        }
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        vector<int> mn(n + 1), mx(n + 1);
        vector<bool> ok(n + 1, true);
        function<void(int)> dfs = [&](int v) {
            if (ch[v].empty()) {
                mn[v] = mx[v] = a[v];
                ok[v] = true;
                return;
            }
            mn[v] = INT_MAX;
            mx[v] = INT_MIN;
            for (int u : ch[v]) {
                dfs(u);
                ok[v] = ok[u];
                mn[v] = min(mn[v], mn[u]);
                mx[v] = max(mx[v], mx[u]);
            }
            if (!ok[v]) return;
            int m = ch[v].size();
            int bad = 0;
            for (int i = 0; i < m; i++) {
                int x = ch[v][i];
                int y = ch[v][(i + 1) % m];
                if (mx[x] >= mn[y]) bad++;
            }
            ok[v] = (bad <= 1);
        };
        dfs(1);
        cout << (ok[1] ? "YES" : "NO") << '
';
    }
    return 0;
}