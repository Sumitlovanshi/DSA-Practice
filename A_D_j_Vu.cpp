#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
	int t; cin>>t;
	while(t--)
	{
//		int n;
//		cin>>n;
//		int arr[n];
//		for(int i=0;i<n;i++){
//			cin>>arr[i];
//		}
        string s;
        cin>>s;
        // string a = "a";
        // s.insert(2,a);
        // cout<<s<<endl;
        string a = s +'a';
        string b = 'a' + s;
        if( a == b){
                cout<<"yes"<<endl;
        }
        else{
                cout << "no" << endl;
        }
	}
	return 0;
}
