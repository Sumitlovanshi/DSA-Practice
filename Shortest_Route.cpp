#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007


void solve(){
    ll i;
    ll n,m; 
    cin>>n>>m;
    ll a[n];
    ll b[m];
    
    for (i=0;i<n;i++) {
        cin>>a[i];}
        for(i=0;i<m;i++){
        cin>>b[i];}
        
        ll mx=1e9;
        map<ll,ll> map ;
    
           for(i=0;i<n;i++)  {
               if(i==0) map[i]=0;
               else if (a[i]!=0) map[i]=0;
               
               else map[i]=mx; 
               
           }
           
          ll rt=-1;
           for(i=0;i<n;i++) {
               if(a[i]==1) rt=i;
               if(rt!=-1) {
                   if(a[i]==0)
                   map[i]=min(map[i],i-rt);
               }
               }
               
           ll lt =-1;
             for(i=n-1;i>=0;i--) {
                if(a[i]==2) lt=i;
                  if(lt!=-1) {
                      if(a[i]==0) 
                      map[i] =min(map[i],lt-i);
                
                   }
               }
               
             for(i=0;i<m;i++){
                   ll j=b[i]-1;
                   if(map[j]!=mx)
                   cout<<map[j]<<" ";
                   else 
                  cout<< -1<<" ";
               }
               
           cout<<endl;
}

int main(){
    
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}