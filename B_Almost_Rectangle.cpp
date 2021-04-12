#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
	int t; cin>>t;
	while(t--)
	{
		int n,flag=1;
		cin>>n;
		pair<int , int > p1 , p2;
		char arr[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;;j<n;j++){
				cin>>arr[i][j];
				if(arr[i][j] == '*'){
					if(flag){
						p1 = make_pair(i,j);
						flag=0;
					}
					else{
						p2 = make_pair(i,j);
					}
				}
			}
		}
		if(p1.first == p2.first){
			//if both the points are in th same row
			if(p1.first + 1 <n){
				
			}
		}
			
		}
		else{
			//if points are in diffrenet row and column
            
			
		}
		
	}
	
	return 0;
}
