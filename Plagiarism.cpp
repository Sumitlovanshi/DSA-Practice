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
    int n , m ,k;
    cin>>n>>m>>k;
    vector<int> v;
    map<int , int> mp;
    int j=0;
    for(int i=0;i<k;i++){
        cin>>j;
        v.push_back(j);
    }
    int flag = 0;
    vector<int> vec;
    for(int i=0;i<k;i++){
        mp[v[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(mp[i] > 1){
            flag++;
            vec.push_back(i);

        }
    }
    cout<<flag<<' ';
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<< ' ';
    }
    cout<<endl;
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