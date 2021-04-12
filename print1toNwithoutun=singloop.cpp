#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void prinit(int n){
	if(n==0){
		return;
	}
	else{
//		cout<<n<<endl;
		prinit(n-1);
		cout<<n<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	prinit(n);
	
}
