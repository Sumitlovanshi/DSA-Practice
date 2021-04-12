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
		int max=0,count=0;
		
		for(int i=0;i<n;i++)
		{
			if(arr[i]==0){
				count++;
				
			}
			else{
				count++;
				count /= 2;
				if(count > max){
					max=count;
				}
			}
		}
		if(count > max){
			max=count;
		}
		if (max==0){
			cout<<"1"<<endl;
		}
		else{
		cout<<max<<endl;
		}
	}
	return 0;
}

