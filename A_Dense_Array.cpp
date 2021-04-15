#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
    int t; cin>>t;
    while(t--){
        int n;
        int ans=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[n];
        }
        for(int i=0;i<n-1;i++){
            int mx = max(arr[i],arr[i+1]);
            int mn = min(arr[i],arr[i+1]);
            while(mx > mn*2){
                mn = mn*2;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}