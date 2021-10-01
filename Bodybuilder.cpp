#include <bits/stdc++.h>
using namespace std;
  
#define ll long long int
#define ull unsigned long long
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
  
  
  
void solve()
{
    ll n,r;
    cin>>n>>r;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    ll ten=b[0],mx = b[0],z=0;
    for(int i=1;i<n;i++){
        ll dif = a[i]-a[i-1];
        ten = ten - (r*dif);
        ten = ten + b[i];
        ten = max(z, ten );
        mx = max(mx , ten);
    }
    cout<<mx<<endl;
}
  
int main()
{
  
     fast_io;
  
     int t;
     cin>>t;
     while(t--)
     {
         solve();
     }
     return 0;
}
