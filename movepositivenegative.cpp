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
    vector<int> v{-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = 9 , j=0;
    for(int i=0;i<n;i++){
        if(v[i] < 0 && i!= j){
            swap(v[i], v[j++]);
        }
    }
    for(int x:v){
        cout<<x<<" ";
    }
}
  
int main()
{
  
     //fast_io;
  
     solve();
  
     return 0;
}