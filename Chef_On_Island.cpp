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
  
void solve()
{
    int x,r,x1,r1,d;
    cin>>x>>r>>x1>>r1>>d;
   
    x = x/x1;
    // cout<<x<<endl;
    r = r/r1;
    // cout<<r<<endl;
    int q = min(x,r);
    if(q >= d){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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