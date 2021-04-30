/*
author : Instinct 
*/
#include <bits/stdc++.h>
using namespace std;
  
#define ll long long int
#define ull unsigned long long
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
  
  
  
void solve()
{
    ll n,x;
    cin>>n>>x;
    ll arr[n];
    set<int> s;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s.insert(arr[i]);
    }
    ll z=x;
    ll diff = n - s.size();
    if( x < diff ){
        cout<<s.size()<<endl;
    } 
    else if(diff == x){
        cout<<s.size()<<endl;
    }
    else{
        cout<< n - x <<endl;
    }

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