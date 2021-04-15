
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
    int arr[(n*2)];
    for(int i=0;i<(n*2);i++){
        cin>>arr[i];
    }
    int ans =0;
    if(is_sorted(arr,arr+(2*n))){
        cout<<ans<<endl;
    }
    unordered_map<int , int> m;
    

}
  
int main()
{
  
     //fast_io;
  
     solve();
  
     return 0;
}