#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    int countupper =0;
    int countlower =0;
 
    for (int i=0;i<s.size();i++){
        if (isupper(s[i])){
            countupper +=1;
        }
        else {
            countlower +=1;
        }
    }
    if (countupper>countlower){
        for (int i = 0; i < s.size(); i++) {
            s[i] = toupper(s[i]);   
    }
    }
    else {
        for (int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);  
    }
 
    }
    cout << s <<endl;
}