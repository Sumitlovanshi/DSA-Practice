#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
	int t; cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		
		int n=s.length();
		map<char, int> map;
		for(int i=0; i<n; i++){
            if(map.count(s[i])==0)
                map[s[i]] = 1;
            else
                map[s[i]]++;   
        }
//		for(int i=0;i<n;i++){
//			map[s[i]]++;
//		}
		int flag=1;
		for(int i=0;i<n;i++){
			if(map[s[i]] == 1){
				cout<<i<<endl;
				flag=0;
				break;
			}
		}
		if(flag){
			cout<<"-1"<<endl;
		}
	}
	return 0;
}

