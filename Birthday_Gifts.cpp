
#include <bits/stdc++.h>
using namespace std;
  
#define ll long long int
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
    int n, k;
    cin>>n>>k;
    int arr[n];
    rep(i, n) cin>>arr[i];
    sort(arr, arr+n);
    reverse(arr , arr+n);
    long long fs = 0 , sn =0 ;
    int i=0;
    for(i=0;i<2*k;i++){
        if(i&1){
            sn += arr[i];
        }
        else{
            fs += arr[i];
        }
        // cout<<"First is : "<<fs<<' '<<"second id : "<<sn<<endl;
    }
    if(i<n){
        sn += arr[i];
    }
    // cout<<"First is at last : "<<fs<<' '<<"second is at last : "<<sn<<endl;
    if(fs > sn){
        cout<<fs<<endl;
    }
    else{
        cout<<sn<<endl;
    }

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
