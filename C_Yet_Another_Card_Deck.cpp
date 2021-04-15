#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
	int n,q;
    cin>>n>>q;
    int arr[n];
    map<int, int> m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(m[arr[i]]==0){
            m[i] = i+1;
        }
    }
    return 0;
}