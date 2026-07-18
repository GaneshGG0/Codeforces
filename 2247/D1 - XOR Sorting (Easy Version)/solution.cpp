#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int i=0;i<t;i++) {
        int n, q;
        cin >> n >> q;
        vector <int> vect1(n), vect2;
        for (int i = 0; i < n; i++) {
            cin >> vect1[i];
        }
        vect2 = vect1;
        sort(vect2.begin(), vect2.end());
        int soln = 0;
        for (int check = 1; check < (1 << 21); check <<= 1) {
            bool found = true;
            for (int j = 0; j < n && found; j += check) {
                int c = min(n,j+check);
                vector <int> vect3(vect1.begin()+j, vect1.begin()+c);
                vector <int> vect4(vect2.begin()+j, vect2.begin()+c);
                sort(vect3.begin(), vect3.end());
                sort(vect4.begin(), vect4.end());
 
                if (vect3 != vect4) {
                    found = false;
                }
            }
           if (found) {
                if (check == 1) {
                    soln = 0;
                    } 
                    else {
                        soln = check / 2;
                        }
                break;
                }
            }
            cout << soln << endl;
        }
    }