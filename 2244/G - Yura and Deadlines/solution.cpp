#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
struct SegTree {
    int n;
    vector<ll> tree;
 
    SegTree(int sz) {
        n = 1;
        while (n < sz) n <<= 1;
        tree.assign(2 * n, 0);
    }
 
    void update(int pos, ll val) {
        pos += n;
        tree[pos] = val;
        for (pos >>= 1; pos; pos >>= 1)
            tree[pos] = max(tree[pos << 1], tree[pos << 1 | 1]);
    }
 
    ll query(int l, int r) {
        if (l > r) return 0;
        l += n;
        r += n;
        ll res = 0;
        while (l <= r) {
            if (l & 1) res = max(res, tree[l++]);
            if (!(r & 1)) res = max(res, tree[r--]);
            l >>= 1;
            r >>= 1;
        }
        return res;
    }
};
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        int n;
        cin >> n;
 
        vector<ll> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
 
        vector<pair<ll, int>> ord;
        for (int i = 1; i <= n; i++)
            ord.push_back({i + a[i], i});
 
        sort(ord.begin(), ord.end());
 
        SegTree seg(n + 2);
 
        vector<ll> dp(n + 1);
 
        int ptr = 0;
        ll ans = 0;
 
        for (int i = 1; i <= n; i++) {
            while (ptr < n && ord[ptr].first < i) {
                int idx = ord[ptr].second;
                seg.update(idx, dp[idx]);
                ptr++;
            }
 
            int lim = i - a[i] - 1;
 
            ll best = 0;
            if (lim >= 1)
                best = seg.query(1, lim);
 
            dp[i] = best + a[i];
            ans = max(ans, dp[i]);
        }
 
        cout << ans << '
';
    }
 
    return 0;
}