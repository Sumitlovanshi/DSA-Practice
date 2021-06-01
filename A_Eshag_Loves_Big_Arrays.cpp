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
    int n , mn = 1000 , cnt = 0 ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mn = min(mn , arr[i]);
    }
  
    for(int i=0;i<n;i++){
        if(arr[i] > mn ){
            cnt++;
        }
    }
    cout<<cnt<<endl;
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