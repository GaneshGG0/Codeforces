#include <iostream>
using namespace std;
 
int main() {
    string a;
    cin >>a;
   int count = 1;
 
    for (int i = 1; i < a.length(); i++) {
        if (a[i] == a[i-1])
            count++;
        else
            count = 1;
 
        if (count >= 7) {
            cout << "YES";
            return 0;
        }
    }
 
cout << "NO";
}