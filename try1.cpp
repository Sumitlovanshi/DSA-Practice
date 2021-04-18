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
  ll n;
  cin>>n;
  
  vector< pair<int ,int> > vp;
  int a, b;
  ll i, j;
  rep(i, n){
    cin>>a>>b;
    vp.push_back(make_pair(a,b));
  }
  
  int ans[n] = {0};

  rep(i, n){
    // find vp->second == vp[i]->first
    for(j=0; i<n; j++){
      if(i==j) continue;
      if(vp[j].second == vp[i].first){
        ans[i] = 1;
        break;
      }
    }
  }
  ll z=0;
  rep(i, n){
    if(ans[i] == 0){
      z++;
    }
  }
  cout<<z<<'\n';
}
  
int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}