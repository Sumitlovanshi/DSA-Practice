#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
	int t; cin>>t;
	while(t--)
	{
		int n,k;
		string s;
		int max=0;
		cin>>n>>k;
		cin>>s;
		for(int i=0;i<n;i++){
			if(s[i] == '*'){
				int j=i,count =0;
				while(s[j]== '*' && j < n){
					count++;
					j++;
				}
				if(count >= k){
					max=1;
					break;
				}
			}
		}
		if(max)
		{
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;    
		}
	}
	return 0;
}

