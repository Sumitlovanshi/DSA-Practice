#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int TESt; 
    cin>>TESt;
	while(TESt--)
	{
		long long int n;
		cin>>n;
		
//		int sum = 14*n + 6;
//		cout<<sum<<endl;
		long long int sum =0;
		long long int result;

		sum = (n/4) * 44;
		int Re = (n%4);
		
		if(n >= 4){
			if(Re == 0){
				sum += 16;
				
			}
			else if(Re == 1){
				sum += 32;
				
			}
			else if(Re == 2){
				sum += 44;
				
			}
			else if(Re == 3){
				sum += 55;
				
			}
			cout<<sum<<endl;
		}
		else{
			if(Re==1){
				result = 20;
			}
			else if(Re==2){
				result = 36;
			}
			else if(Re==3){
				result = 51;
			}
			cout<<result<<endl;
		}
		
	}
	
	return 0;
}
