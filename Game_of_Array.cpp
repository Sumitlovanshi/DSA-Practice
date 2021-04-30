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
    int n;
    cin>>n;
    int arr[n];
    set<int> s;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s.insert(arr[i]);
    }
    int m = s.size();
    if(m&1){
        cout<<"Raju"<<endl;
    }
    else{
        
        cout<<"Aman"<<endl;
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