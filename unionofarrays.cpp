/*
author : Instinct 
*/
#include <bits/stdc++.h>
using namespace std;
  
#define ll long long 
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
    //use set (n+m)
    //check in both arrays O(n+m)
    //use map
    //sort and then check? No?
    //frequency - Store in a's element and then b's elements count non zeros form hashmap
    int n, m;
    cin>>n>>m;
    int a[n], b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    map<int, int> mp;
    for(int x : a){
        mp[x]++;
    }
    for(int x:b){
        mp[x]++;
    }
    int count = 0;
    for(auto x:mp){
        count++;
    }
    cout<<count<<endl;
}
  
int main()
{
  
     //fast_io;
  
     solve();
  
     return 0;
}