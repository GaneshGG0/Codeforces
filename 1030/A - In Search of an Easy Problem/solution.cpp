#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin>> t;
    int count =0; 
    for (int i=0;i<t;i++) {
        int a;
        cin >>a;
        if (a==0){
            continue;
        }
        else if (a== 1){
            count += 1;
    
        }
        else {
            continue;
        }
 
       
    }
    if (count>0){
        cout<<"HARD"; }
    else {
        cout << "EASY";
    }
    }
    
    
 
 
 
 
 
 
 
 
 
 
 