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
  
// #define for(i,n) for (i = 0; i < n; i++) 
// #define for(i,a,n) for (i = a; i <= n; i++)
// #define for(i,n,a) for (i = n; i >= a; i--) 
  
  
void solve()
{
  //fastio
    int n,m;
    cin>>n>>m;
    int arr[n];
    set<int> s;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=0;
    for(int i=0;i<n-m;i++){
        int x = m-1;
        for(int j=i;;j++){
            if(x==0){
                break;
            }
            else{
                s.insert(arr[j]);
                x--;
            }
        }
        if(max < s.size()){
            max = s.size();
        }
    }
    cout<<max;
}
  
int main()
{
  
     //fast_io;
  
     solve();
  
     return 0;
}
