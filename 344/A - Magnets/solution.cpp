#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    string prev, cur;
    cin >> prev;
 
    int groups = 1;
 
    for (int i = 1; i < n; i++) {
        cin >> cur;
 
        if (cur != prev) {
            groups++;
        }
 
        prev = cur;
    }
 
    cout << groups << endl;
 
    return 0;
}