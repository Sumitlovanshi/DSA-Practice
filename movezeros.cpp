#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
	int t; cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> arr;
		
		for(int i=0;i<n;i++){
			int k;
			cin>>k;
			arr.push_back(k);
		}
		int N=n;
		for(int i=0;i<N;i++){
			if(arr[i]==0){
				arr.erase( arr.begin() + i );
				arr.push_back(0);
				N--;
				i--;
			}
		}
		
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		
	}
	return 0;
}

