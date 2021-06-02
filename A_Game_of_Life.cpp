/*
author : Instinct 
*/
#include <bits/stdc++.h>
using namespace std;
  
#define ll long long int
#define ull unsigned long long
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
  
#define MAX_N 1e5+1
#define INF 1e9
#define MOD 1e9+7
#define LINF 1e18
  
#define rep(i,n) for (i = 0; i < n; i++) 
#define repa(i,a,n) for (i = a; i <= n; i++)
#define repn(i,n,a) for (i = n; i >= a; i--) 
  
  
void solve()
{
    int n , m;
    string s;
    cin>>n>>m>>s;
    vector<int> v;
    if(s.size() > 1)
    {
        if(s[0]=='0' && s[1] =='1'){
        v.push_back(0);
        }
        if(s[s.size() - 1] == '0' && s[s.size() - 2] =='1'){
            v.push_back(s.size() - 1 );
        }
    }
    int r = min(n ,m);
    for(int z=0;z<r;z++){

        for(int i=1;i<s.size()-1;i++){
            if( s[i]=='0' && s[i-1] == '1' && s[i+1] == '0'){
                v.push_back(i);
            }
            else if(s[i]=='0' && s[i-1] == '0' && s[i+1] == '1'){
                v.push_back(i);
            }
        }
        for(int i=0;i<v.size();i++){
            s[v[i]] = '1';
        }
        v.clear();
    }
    cout<<s<<endl;
}
  
int main()
{
  
     //fast_io;
  
     ull t;
     cin>>t;
     while(t--)
     {
         solve();
     }
     return 0;
}