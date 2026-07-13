#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i=0;i<n;i++) {
        int a;
        cin>>a;
        arr[i] =a;
    }
    //check for k-th value now
    int kth;
    kth = arr[k-1];
    int count=0;
    for (int j=0;j<n;j++){
    
        if(arr[j] >= kth && arr[j] > 0){
            count +=1;
            //cout<<"RUN";
        }
    }
    cout<<count;
}