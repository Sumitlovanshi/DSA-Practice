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

    // take two pointers from last of the array
    //find i < j to swap
    //if not then sort O(n^2)
    // Notice pattern
    // up down
    int i = n-2;
    while(i >= 0 && arr[i] >= arr[i+1]) i-- ;
    if(i >= 0){
        int j = n-1;
        while(arr[j] <= arr[i])j--;
        swap(arr[i] , arr[j]);
    }
    reverse(arr+i+1 , arr+n);

    rep(i , n) cout<<arr[i]<<", ";
}
  
int main()
{
  
     //fast_io;
  
     solve();
  
     return 0;
}