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
#define repa(i,a,n) for (i = a; i <= n; i++)
#define repn(i,n,a) for (i = n; i >= a; i--) 
  
  
void solve()
{
    //kaden's algo
    //
    int n;
    cin>>n;
    int arr[n]
    rep(i, n) cin>>arr[i];
    int mx = arr[0], cm = arr[0];
    int sum =0;
    for(int i = 0; i < n; i++){
        // sum += a;
        // cm += sum;
        cm = max(cm , cm+arr[i]);
        mx = max(mx, cm);
    }
    cout<<mx<<endl;
}
  
int main()
{
  
     //fast_io;
  
     solve();
  
     return 0;
}