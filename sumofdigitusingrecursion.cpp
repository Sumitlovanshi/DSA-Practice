#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sum(int n, int s=0){
	if(n==0){
		return s;
	}
	else{
		s += n%10;
		sum(n/10,s);
	}
}

int main(){
	int n;
	cin>>n;
	cout<<sum(n);
}
