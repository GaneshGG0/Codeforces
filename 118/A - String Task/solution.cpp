#include <iostream>
#include <array>
#include <vector>
#include <cctype>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
}
    for (int i = 0; i < s.length(); i++) {
    char c = s[i];
    string ans;
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y') {
        continue;
    }
    else {
        ans += '.';
        ans += c;
        //ans += '.';
    }
    cout << ans;
 
}
    
    
 
}