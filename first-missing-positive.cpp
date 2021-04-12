#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
	int t; cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int start;
		sort(arr, arr+n);
		for(int i=0;i<n;i++){
			if(arr[i] >= 0){
				start = i;
				break;
			}
		}
		if( arr[start]==0 || arr[start]==1){
			for(int i=start;i<n;i++){
				if(arr[i]+1 != arr[i+1]){
					cout<<arr[i]+1<<endl;
					break;
				}
			}
		}
		else{
			cout<<"1"<<endl;
			return 1;
		}
	}
	return 0;
}

