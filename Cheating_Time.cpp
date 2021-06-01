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
    long long n, k ;
    long long f;
    cin>>n>>k;
    cin>>f;
    // vector<  pair<int , int > > v;
    long long a, b;
    set<long long > st;
    for(long long i=0;i<n;i++){
        cin>>a>>b;
        for(long long j=a;j<b;j++){
            st.insert(j);
        }
    }
    long long q = st.size();
    if( f-q-1 > k ){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
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