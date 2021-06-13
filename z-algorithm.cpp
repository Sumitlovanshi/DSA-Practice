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
    int n;
    cin>>n;
    char arr[n];
    rep(i , n) cin>>arr[i];
    int z[n] = {0};
    int r= 0 , l= 0;
    for(int i=1 ; i<n;i++){
        if( i > r){
            r  = l = i ;
            while( r < n && arr[r] == arr[ r - l]){
                r++;
            }
            z[i] = r-l;
            r--;
        }
        else{
            int k = i - l;
            if( z[k] < (r-i)+1){
                z[i] = z[k];
            }
            else{
                l = i;
                while( r < n && arr[r] == arr[ r - l]){
                r++;
            }
            z[i] = r-l;
            r--;
            }
        }
    }
    cout<<" -- Z Array --"<<endl;
    rep(i , n){
        cout<<z[i]<<' ';
    }
}
  
int main()
{
  
     //fast_io;
  
     solve();
  
     return 0;
}