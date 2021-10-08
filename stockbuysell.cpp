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
    int n;cin>>n;
    int arr[n]; rep(i, n) cin>>arr[i];

    //first is brute force O(n^2) complexity
    //
    int mn = INT_MAX, mx = 0;
    for(int i=0;i<n;i++){
        mn = min(mn , arr[i]);
        mx = max(mx , abs(mn - arr[i]));
    }
    cout<<mx<<endl;
}
  
int main()
{
  
     //fast_io;
  
     solve();
  
     return 0;
}