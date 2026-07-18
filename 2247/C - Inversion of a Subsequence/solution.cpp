#include <bits/stdc++.h>
using namespace std;
void soln() {
    int n;
    cin >> n;
    vector <int> vect1(n), vect2(n);
    int z = 0; 
    for (int i=0;i<n;i++) {
        cin >> vect1[i];
        if (vect1[i]==1) {
            z++;
        }
    }
    int k = 0;
    for (int i=0;i<n;i++) {
        cin >> vect2[i];
        if (vect2[i]==0) {
            k++;
        }
    }
    int u = 0, v = 0;
    for (int i=0;i<n;i++) {
        if (vect1[i] != vect2[i]) {
            if (vect1[i]==1) {
                v++;
            }
            else {
                u++;
            }
        }
    }
    if (u==0 && v==0) {
        cout << 0 << endl;
        return;
    }
    if (k==0) {
        cout << -1 << endl;
        return;
    }
    if (z==0) {
        cout << -1 << endl;
        return;
    }
    if (v%2!=0) {
        cout << 1 << endl;
    } 
    else {
        cout << 2 << endl;
    }
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