#include <iostream>
using namespace std;
 
int main () {
   int a,b,c,j;
   cin >> j;
   for (int i=0;i<j;i++) {
        cin >> a;
        cin >> b;
        cin >> c;
       if (a+b == c) {
           cout << "YES" << endl;
       } else if (a+c ==b) {
           cout << "YES" << endl;
       } else if (b+c==a) {
           cout << "YES" << endl;
       } else {
           cout << "NO" << endl;
       }
   }
 
}