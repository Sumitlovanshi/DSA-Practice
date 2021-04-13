#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
	int t; cin>>t;
	while(t--)
	{
        string s;
        cin>>s;
        int a[26] = {0};
        int n = s.size();
        for(int i=0;i<n;i++){
            if(a[ int(s[i]) - 'a'] == 0){
                // m[i].insert(s[i]);
                cout<<s[i];
                // m[i]++;
                a[s[i] - 'a']++;
            }
            
        }
        cout<<endl;
    }
    return 0;
    }