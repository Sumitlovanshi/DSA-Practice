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
  
#define rep(i,n) for (i = 0; i < n; i++) 
#define repa(i,a,n) for (i = a; i <= n; i++)
#define repn(i,n,a) for (i = n; i >= a; i--) 
  
  
void solve()
{
    //sort
    //count freq
    //dutch national flag problem
    vector<int> v{0, 2, 1, 2, 0, 1, 2, 0, 0, 1, 2};
    int a =0, b = 11;
    for(int i=0;i<11;i++){
        if(v[i] == 0){
            swap(v[i] , v[a++]);
        }
        else if(v[i] == 2 && i<b){
            swap(v[i] , v[b--]);
        }
    }
    for(int i=0;i<11;i++){
        cout<<v[i]<<endl;
    }
}
  
int main()
{
  
     //fast_io;
  
     solve();
  
     return 0;
}