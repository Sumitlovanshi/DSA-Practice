
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"

void solve()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll> >x;
    vector<pair<ll,ll> >y;
    multiset<ll>X;
    multiset<ll>Y;
    
    for(ll i=0;i<n;i++)
    {
        ll a;ll b;cin>>a>>b;
        x.push_back({a,b});
        y.push_back({b,a});
        X.insert(a);
        Y.insert(b);
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    ll mx=0;
    ll mn=LLONG_MAX;
    ll j=0 , k=0;
    ll ar=LLONG_MAX;
    
    for(ll i=0;i<n-1;i++)
    {
        mx=max(mx,x[i].second);
        mn=min(mn,x[i].second);
        j=mx-mn;
        auto it=Y.find(x[i].second);
        Y.erase(it);
        k=*(Y.rbegin())-*(Y.begin());
        ll nar=(x[i].first-x[0].first)*j;
        nar+=((x[n-1].first-x[i+1].first)*k);
        
        ar=min(ar,nar);
    }
    mx=0;
    mn=LLONG_MAX;
    j=0 , k=0;
    for(ll i=0;i<n-1;i++)
    {
        mx=max(mx,y[i].second);
        mn=min(mn,y[i].second);
        j=mx-mn;
        auto it=X.find(y[i].second);
        X.erase(it);
        k=*(X.rbegin())-*(X.begin());
        ll nar=(y[i].first-y[0].first)*j;
        nar+=((y[n-1].first-y[i+1].first)*k);
        
        ar=min(ar,nar);
    }
    if(ar==LLONG_MAX)
    ar=0;
    cout<<ar<<endl;
    
}
int main() 
{
	fastio;
	ll t=1;
	cin>>t;
	while(t--)
	solve();
	return 0;
}