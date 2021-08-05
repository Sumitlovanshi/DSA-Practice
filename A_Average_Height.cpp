#include <bits/stdc++.h>
using namespace std;
  
#define ll long long 
#define ull unsigned long long
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
  
#define MAX_N 1e5+1
#define INF 1e9
#define MOD 1e9+7
#define LINF 1e18
  
#define rep(i,n) for (i = 0; i < n; ++i) 
#define REP(i,a,n) for (i = a; i <= n; ++i)
#define REPR(i,n,a) for (i = n; i >= a; --i) 
  
  
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int even[n];
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even[j++] = arr[i];
        }
        else{
            cout<<arr[i]<<" ";
        }
    }
    for(int i=0;i<j;i++){
        cout<<even[i]<<" ";
    }
    cout<<endl;

}
  
int main()
{
  
     fast_io;
  
     ull t;
     cin>>t;
     while(t--)
     {
         solve();
     }
     return 0;
}
