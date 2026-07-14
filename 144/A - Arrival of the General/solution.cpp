#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; // test cases
    cin>>t;
    vector <int> v;
    for (int i=0;i<t;i++){ // stores vector data
        int a;
        cin>>a;
        v.push_back(a);
    }
    int maxid = 0;
    for (int i=0;i<t;i++){ // max index
        if (v[i]>v[maxid]){
            maxid=i;
        } }
    int minid =t-1;
    for (int i=t-2;i>=0;i--){ //min index
        if (v[i]<v[minid]){
            minid =i;
        }
 
    }
    int ans = maxid + (t-1-minid);
    if (maxid>minid){
        ans--;
    }
    cout <<ans<<endl;
}
 