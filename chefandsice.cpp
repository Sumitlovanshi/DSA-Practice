#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
	int t; cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
//		int sum = 14*n + 6;
//		cout<<sum<<endl;
		int sum =0;
		int rs;

		sum = (n/4) * 44;
		int rem = (n%4);
		
		if(n >= 4){
			if(rem == 0){
				sum += 16;
				
			}
			else if(rem == 1){
				sum += 32;
				
			}
			else if(rem == 2){
				sum += 44;
				
			}
			else if(rem == 3){
				sum += 55;
				
			}
			cout<<sum<<endl;
		}
		else{
			if(rem==1){
				rs = 20;
			}
			else if(rem==2){
				rs = 36;
			}
			else if(rem==3){
				rs = 51;
			}
			cout<<rs<<endl;
		}
		
	}
	
	return 0;
}

