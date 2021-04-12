#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
	int t; cin>>t;
	while(t--)
	{
		string a,b,c;
		cin>>a>>b>>c;
		vector<char> v;
		int a1 = a.length();
		int b1=b.length();
		int c1=c.length();
		a1 = min(a1,b1);
		a1 = min(a1,c1);
		for(int i=0;i<a1;i++){
			if(a[i]==b[i] && a[i]==c[i]){
				v.push_back(a[i]);
			}
			else{
				break;
			}
		}
		if(v.size() > 0)
		{
			for(int i=0;i<v.size();i++){
				cout<<v[i];
			}
			cout<<endl;
		}
		else{
			cout<<'"'<<endl;
		}
	}
	return 0;
}

