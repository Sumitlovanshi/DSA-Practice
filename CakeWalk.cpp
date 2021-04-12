#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
	int t; cin>>t;
	while(t--)
	{
        string s;
        cin>>s;
        map<int,char> c;
        // unordered_set<char> c;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(m[i]==0){
                m[i].insert(s[i]);
                m[i]++;
            }
        }
        set<char> ::iterator itr;
        for (itr = c.begin(); itr != c.end(); itr++)
    {
        cout << *itr<<" ";
    }
        // cout<<n<<endl;
    }
    return 0;
    }