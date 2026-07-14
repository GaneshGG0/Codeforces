#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> p(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> p[i];
        vector<vector<int>> g(n + 1);
        for (int i = 1; i + x <= n; i++) {
            g[i].push_back(i + x);
            g[i + x].push_back(i);
        }
        if (x != y) {
            for (int i = 1; i + y <= n; i++) {
                g[i].push_back(i + y);
                g[i + y].push_back(i);
            }
        }
        vector<int> vect(n + 1, -1);
        int id = 0;
        for (int i = 1; i <= n; i++) {
            if (vect[i] != -1) {
                continue; }
 
            queue<int> q;
            q.push(i);
            vect[i] = id;
            while (!q.empty()) {
                int v = q.front();
                q.pop();
                for (int u : g[v]) {
                    if (vect[u] == -1) {
                        vect[u] = id;
                        q.push(u);
                    }
                }
            }
            id++;
        }
        bool ok = true;
        for (int i = 1; i <= n; i++) {
            if (vect[i] != vect[p[i]]) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES
" : "NO
");
    }
    return 0;
}