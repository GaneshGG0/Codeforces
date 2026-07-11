#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    string s = "codeforces";
 
    while (t--) {
        char a;
        cin >> a;
 
        bool found = false;
 
        for (char x : s) {
            if (a == x) {
                found = true;
                break;
            }
        }
 
        if (found)
            cout << "YES
";
        else
            cout << "NO
";
    }
 
    return 0;
}