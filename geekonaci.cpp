#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int geekonaci(int a,int b,int c,int n){
		if(n==4){
			return a+b+c;
		}
		else{
			int sum = a+b+c;
			geekonaci(b,c,sum,n-1);
		}
}

int main(){
	int t; cin>>t;
	while(t--)
	{
		int a, b, c,n;
		cin>>a>>b>>c>>n;
		cout<<geekonaci(a,b,c,n)<<endl;

		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
	}
	return 0;
}

