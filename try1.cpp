#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a==b || b==c || a==c){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
	return 0;
}

