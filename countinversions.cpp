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

    //simple O(n^2) approach
    // Learn Merge sort method
    int cnt = 0;
    rep(i,n){
        for(int j=i+1;j<n;j++){
            if(arr[i] > arr[j]) cnt++;
        }
    }
    cout<<cnt<<endl;
}
  
int main()
{
  
     //fast_io;
  
     solve();
  
     return 0;
}