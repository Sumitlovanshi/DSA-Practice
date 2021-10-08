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
  
#define rep(i,n) for (int i = 0; i < n; i++) 
#define repa(i,a,n) for (int i = a; i <= n; i++)
#define repn(i,n,a) for (int i = n; i >= a; i--) 
  
  
void solve()
{
    int n,m;
    cin>>n>>m;
    int a[n] , b[m];
    rep(i ,n) cin>>a[i];
    rep(i ,m) cin>>b[i];

    // Two pointer  i =n-1 for a and j=0 for b, swap if a of i< b of j, then sort both array
    // code this next time


}
  
int main()
{
  
     //fast_io;
  
     solve();
  
     return 0;
}