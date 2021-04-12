#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
//	int t; cin>>t;
//	while(t--)
//	{
		
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int t;
		cin>>t;
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				if(arr[i]+arr[j] == t){
					cout<<i<<" "<<j;
					break;
				}
			}
		}
	return 0;
}

