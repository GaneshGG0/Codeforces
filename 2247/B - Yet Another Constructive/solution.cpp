#include <bits/stdc++.h>
using namespace std;
 
using big = long long ;
void soln() {
    big n, k, m;
    cin >> n >> k >> m;
    if ((n<k) || (m<k)) {
        cout << "NO" << endl;
        return ;
    }
    cout << "YES"<< endl;
    for (int i=1;i<=n;++i) {
        big c1 = i%k;
        big c2 = (i-1)%k;
        big sub = (c1-c2)%m;
        if (sub <= 0) {
            sub+=m;
        }
        if (i==n) {
            cout << sub;
        } 
        else {
            cout << sub << " ";
        }
    }
    cout << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    for(int i=0;i<t;i++) {
        soln();
    }
}