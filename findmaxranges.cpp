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
//		map< int , int > v;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		
		
		for(int i=0;i<n;i++){
//			int k = arr[i];
			int j=i-1;
			while(arr[j] < arr[i] && j >=0 ){
				j--;
			}
			j++;
			int g = i+1;
			while(arr[g] < arr[i] && g<n){
				g++;
			}
			g--;
			cout<<j<<" "<<g<<endl;

	}
	return 0;
}

