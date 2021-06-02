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
  
#define rep(i,n) for (int i = 0; i < n; i++) 
#define repa(i,a,n) for (i = a; i <= n; i++)
#define repn(i,n,a) for (i = n; i >= a; i--) 
  
  
void solve()
{
    int n , k;
    string s;
    cin>>n>>k>>s;
    int arr[k];
    rep(i,n) cin>>arr[i];
    int dis = 0;
    for(int i=0;i<n-1;i++){
        if(s[i] == s[i+1]){
            dis += 2;
        }
        else{
            dis++;
        }
    }
    cout<<"Initial distance : "<<dis<<endl;
    for(int i=0;i<k;i++){
        int ind = arr[i] - 1;
        if(s[ind] == '1'){
            s[ind] = '0';
            cout<<s<<endl;
        }
        else{
            s[ind] = '1';
            cout<<s<<endl;
        }
        if( s[ind] == s[ind-1] && ind > 0){
            dis++;
        }
        else{
            dis--;
        }
        if(s[ind] == s[ind+1]  && ind+1 < n){
            dis++;
        }
        else{
            dis--;
        }
        cout<<dis<<endl;
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