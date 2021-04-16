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
    // All The Best 
    // Stay Focused 
    int n;
    cin>>n;
    int arr[n];
    long long int sum=0;
    int evn=0,odd=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
        if(arr[i]%2 ==0 ){
            evn++;
        }
        else{
            odd++;
        }
    }
    if(sum%2 == 0 ){
        cout<<"0"<<endl;
    }
    else{
        if(evn != 0){
            cout<<"1"<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
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