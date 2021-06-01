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
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int flag = 0;
    for(int i=0;i<n;i++)
    {
        string s = arr[i];
        int m = s.size();
        // cout<<m<<endl;
        int ok = 0 , no = 0 ;
        for(int j=0;j<m;j++)
        {
            if(s[j] >= 97 && s[j] < 110 ){
                ok++;
            }
            else if( s[j] >= 78 && s[j] < 91)
            {
                no++;
            }
        }
        if( ok == m || no == m){
            flag++;
        }
        
    }
    if(flag == n){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
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