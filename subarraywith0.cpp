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
#define repa(i,a,n) for (int i = a; i <= n; i++)
#define repn(i,n,a) for (int i = n; i >= a; i--) 
  
  
void solve()
{
    int n , k;cin>>n>>k;
    int arr[n]; rep(i, n) cin>>arr[i];

    set<int> st;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(sum == 0 || st.find(sum) != st.end()){
            cout<<"Yes"<<endl;
            return;
        }
        st.insert(sum);
    }
    cout<<"no"<<endl;
}
  
int main()
{
  
     //fast_io;
  
     solve();
  
     return 0;
}